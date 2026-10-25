// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147f92984 FUN_147f92984 body=101 status=ok
// SIG undefined FUN_147f92984(void)

void FUN_147f92984(longlong *param_1)

{
  longlong lVar1;
  undefined1 auStack_38 [39];
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = (**(code **)(*param_1 + 0x10))();
  if (lVar1 != 0) {
    FUN_147f9a824(lVar1 + 0x4f0);
    local_11 = 1;
    (**(code **)(*param_1 + 0xa8))(param_1,&local_11,1);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f929ea FUN_147f929ea body=2146 status=ok
// SIG undefined FUN_147f929ea(void)

/* WARNING: Type propagation algorithm not settling */

undefined4
FUN_147f929ea(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 param_5,undefined1 param_6)

{
  ulonglong uVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *****ppppplVar4;
  longlong *plVar5;
  longlong *****ppppplVar6;
  longlong *****ppppplVar7;
  longlong *****ppppplVar8;
  longlong *******ppppppplVar9;
  longlong ******pppppplVar10;
  undefined4 uVar11;
  longlong lVar12;
  longlong *******ppppppplVar13;
  longlong ******pppppplVar14;
  longlong ******pppppplVar15;
  longlong ******pppppplVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  ulonglong uVar20;
  longlong ******pppppplVar21;
  longlong ******pppppplVar22;
  int iVar23;
  int iVar24;
  longlong ******pppppplVar25;
  longlong ******pppppplVar26;
  longlong ******pppppplVar27;
  longlong ******pppppplVar28;
  bool bVar29;
  float fVar30;
  undefined1 auStack_458 [32];
  undefined8 *local_438;
  undefined8 local_430;
  undefined1 local_428;
  undefined8 local_418;
  undefined8 local_410;
  undefined8 *local_408;
  undefined8 local_400;
  undefined8 local_3f8;
  longlong local_3f0;
  longlong local_3e8;
  undefined8 uStack_3e0;
  longlong *******local_3d8;
  undefined8 uStack_3d0;
  longlong ****local_3c8 [2];
  undefined8 local_3b8;
  int local_3b0;
  undefined8 local_3ac;
  int local_3a4;
  longlong local_398;
  undefined4 local_390;
  longlong *******local_388;
  undefined8 local_380;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined8 local_88;
  undefined8 uStack_80;
  longlong *****local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_458;
  lVar12 = (**(code **)(*param_1 + 0x10))();
  uVar11 = 0;
  if (lVar12 != 0) {
    local_3b8 = 0;
    local_3b0 = 0;
    local_3d8 = (longlong *******)0x0;
    uStack_3d0 = 0;
    local_3ac = 0xffffffff00000080;
    local_3a4 = 0;
    local_398 = 0;
    local_390 = 0;
    local_418 = param_2;
    local_410 = param_3;
    local_408 = param_4;
    FUN_140d2530e(&local_3d8);
    if (local_3a4 < (int)uStack_3d0) {
      FUN_14181beea(&local_3d8);
      ppppppplVar13 = local_3d8;
      uVar17 = (int)uStack_3d0 - local_3a4;
      if (1 < (int)uVar17) {
        memset(&uStack_378,0,0x2f0);
        local_388 = ppppppplVar13;
        local_380 = ppppppplVar13 + (ulonglong)uVar17 * 3 + -3;
        fVar30 = logf((float)(int)uVar17);
        uStack_378 = (int)(longlong)(fVar30 + fVar30);
        ppppppplVar13 = (longlong *******)&local_388;
        do {
          pppppplVar15 = *ppppppplVar13;
          pppppplVar21 = ppppppplVar13[1];
          iVar23 = *(int *)(ppppppplVar13 + 2);
          iVar18 = (int)((ulonglong)((longlong)pppppplVar21 - (longlong)pppppplVar15) >> 3) *
                   -0x55555555;
          uVar17 = iVar18 + 1;
          pppppplVar26 = pppppplVar15;
          pppppplVar28 = pppppplVar21;
          if (iVar23 != 0) {
LAB_147f92b43:
            if (8 < (int)uVar17) {
              uVar20 = (ulonglong)(uVar17 >> 1);
              ppppplVar4 = pppppplVar15[uVar20 * 3 + 2];
              ppppplVar6 = pppppplVar15[uVar20 * 3];
              ppppplVar7 = (pppppplVar15 + uVar20 * 3)[1];
              pppppplVar15[uVar20 * 3 + 2] = pppppplVar15[2];
              ppppplVar8 = pppppplVar15[1];
              pppppplVar15[uVar20 * 3] = *pppppplVar15;
              (pppppplVar15 + uVar20 * 3)[1] = ppppplVar8;
              pppppplVar15[2] = ppppplVar4;
              *pppppplVar15 = ppppplVar6;
              pppppplVar15[1] = ppppplVar7;
              pppppplVar25 = pppppplVar21 + 3;
              pppppplVar14 = pppppplVar15;
              do {
                pppppplVar10 = pppppplVar14 + 3;
                pppppplVar22 = pppppplVar14 + 3;
                do {
                  pppppplVar14 = pppppplVar22;
                  pppppplVar27 = pppppplVar10;
                  if (pppppplVar21 < pppppplVar14) break;
                  pppppplVar10 = pppppplVar27 + 3;
                  pppppplVar22 = pppppplVar14 + 3;
                } while (*(int *)(pppppplVar15 + 1) <= *(int *)(pppppplVar14 + 1));
                pppppplVar10 = pppppplVar25 + -6;
                do {
                  pppppplVar22 = pppppplVar25;
                  pppppplVar16 = pppppplVar10;
                  pppppplVar25 = pppppplVar22 + -3;
                  if (pppppplVar25 <= pppppplVar15) break;
                  pppppplVar10 = pppppplVar16 + -3;
                } while (*(int *)(pppppplVar22 + -2) <= *(int *)(pppppplVar15 + 1));
                if (pppppplVar25 < pppppplVar14) goto LAB_147f92c35;
                ppppplVar4 = pppppplVar14[2];
                ppppplVar6 = *pppppplVar14;
                ppppplVar7 = pppppplVar14[1];
                pppppplVar14[2] = pppppplVar22[-1];
                ppppplVar8 = pppppplVar22[-2];
                *pppppplVar14 = *pppppplVar25;
                pppppplVar14[1] = ppppplVar8;
                pppppplVar22[-1] = ppppplVar4;
                *pppppplVar25 = ppppplVar6;
                pppppplVar22[-2] = ppppplVar7;
              } while( true );
            }
            for (; pppppplVar28 = pppppplVar15, pppppplVar26 = pppppplVar15,
                pppppplVar15 < pppppplVar21; pppppplVar21 = pppppplVar21 + -3) {
              while (pppppplVar25 = pppppplVar28, pppppplVar26 = pppppplVar26 + 3,
                    pppppplVar26 <= pppppplVar21) {
                pppppplVar28 = pppppplVar26;
                if (*(int *)(pppppplVar25 + 1) <= *(int *)(pppppplVar26 + 1)) {
                  pppppplVar28 = pppppplVar25;
                }
              }
              local_78 = pppppplVar25[2];
              local_88 = (longlong *******)*pppppplVar25;
              uStack_80 = pppppplVar25[1];
              ppppppplVar9 = local_88;
              ppppplVar6 = uStack_80;
              pppppplVar25[2] = pppppplVar21[2];
              ppppplVar4 = pppppplVar21[1];
              *pppppplVar25 = *pppppplVar21;
              pppppplVar25[1] = ppppplVar4;
              pppppplVar21[2] = local_78;
              local_88._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
              uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
              *(undefined4 *)pppppplVar21 = (undefined4)local_88;
              *(undefined4 *)((longlong)pppppplVar21 + 4) = local_88._4_4_;
              *(undefined4 *)(pppppplVar21 + 1) = (undefined4)uStack_80;
              *(undefined4 *)((longlong)pppppplVar21 + 0xc) = uStack_80._4_4_;
              local_88 = ppppppplVar9;
              uStack_80 = ppppplVar6;
            }
            goto LAB_147f92fcb;
          }
LAB_147f92d06:
          if (uVar17 != 0) {
            iVar23 = (iVar18 - (iVar18 + -1 >> 0x1f)) + -1 >> 1;
            iVar18 = iVar23;
joined_r0x000147f92d2d:
            do {
              iVar24 = iVar23 * 2 + 1;
              if (iVar24 < (int)uVar17) {
                iVar19 = iVar23 * 2 + 2;
                if ((iVar19 < (int)uVar17) &&
                   (*(int *)(pppppplVar15 + (longlong)iVar19 * 3 + 1) <=
                    *(int *)(pppppplVar15 + (longlong)iVar24 * 3 + 1))) {
                  iVar24 = iVar19;
                }
                if (*(int *)(pppppplVar15 + (longlong)iVar24 * 3 + 1) <
                    *(int *)(pppppplVar15 + (longlong)iVar23 * 3 + 1)) {
                  pppppplVar21 = pppppplVar15 + (longlong)iVar23 * 3;
                  pppppplVar26 = pppppplVar15 + (longlong)iVar24 * 3;
                  local_78 = pppppplVar21[2];
                  local_88 = (longlong *******)*pppppplVar21;
                  uStack_80 = pppppplVar21[1];
                  ppppppplVar9 = local_88;
                  ppppplVar6 = uStack_80;
                  pppppplVar21[2] = pppppplVar26[2];
                  ppppplVar4 = pppppplVar26[1];
                  *pppppplVar21 = *pppppplVar26;
                  pppppplVar21[1] = ppppplVar4;
                  pppppplVar26[2] = local_78;
                  local_88._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
                  uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
                  *(undefined4 *)pppppplVar26 = (undefined4)local_88;
                  *(undefined4 *)((longlong)pppppplVar26 + 4) = local_88._4_4_;
                  *(undefined4 *)(pppppplVar26 + 1) = (undefined4)uStack_80;
                  *(undefined4 *)((longlong)pppppplVar26 + 0xc) = uStack_80._4_4_;
                  iVar23 = iVar24;
                  local_88 = ppppppplVar9;
                  uStack_80 = ppppplVar6;
                  goto joined_r0x000147f92d2d;
                }
              }
              bVar29 = iVar18 != 0;
              iVar23 = iVar18 + -1;
              iVar18 = iVar23;
            } while (bVar29);
            if (1 < (int)uVar17) {
              uVar20 = (ulonglong)uVar17 - 1;
              local_78 = pppppplVar15[2];
              local_88 = (longlong *******)*pppppplVar15;
              uStack_80 = pppppplVar15[1];
              ppppppplVar9 = local_88;
              ppppplVar6 = uStack_80;
              pppppplVar15[2] = pppppplVar15[uVar20 * 3 + 2];
              ppppplVar4 = (pppppplVar15 + uVar20 * 3)[1];
              *pppppplVar15 = pppppplVar15[uVar20 * 3];
              pppppplVar15[1] = ppppplVar4;
              pppppplVar15[uVar20 * 3 + 2] = local_78;
              local_88._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
              uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
              pppppplVar21 = pppppplVar15 + uVar20 * 3;
              *(undefined4 *)pppppplVar21 = (undefined4)local_88;
              *(undefined4 *)((longlong)pppppplVar21 + 4) = local_88._4_4_;
              *(undefined4 *)(pppppplVar21 + 1) = (undefined4)uStack_80;
              *(undefined4 *)((longlong)pppppplVar21 + 0xc) = uStack_80._4_4_;
              local_88 = ppppppplVar9;
              uStack_80 = ppppplVar6;
              if (uVar17 != 2) {
                do {
                  iVar23 = 0;
                  iVar24 = 1;
                  iVar18 = 0;
                  do {
                    iVar23 = iVar23 + 2;
                    iVar19 = iVar24;
                    if (((longlong)iVar23 < (longlong)uVar20) &&
                       (*(int *)(pppppplVar15 + (longlong)iVar23 * 3 + 1) <=
                        *(int *)(pppppplVar15 + (longlong)iVar24 * 3 + 1))) {
                      iVar19 = iVar23;
                    }
                    if (*(int *)(pppppplVar15 + (longlong)iVar18 * 3 + 1) <=
                        *(int *)(pppppplVar15 + (longlong)iVar19 * 3 + 1)) break;
                    pppppplVar21 = pppppplVar15 + (longlong)iVar18 * 3;
                    pppppplVar26 = pppppplVar15 + (longlong)iVar19 * 3;
                    ppppplVar4 = pppppplVar21[2];
                    ppppplVar6 = *pppppplVar21;
                    ppppplVar7 = pppppplVar21[1];
                    pppppplVar21[2] = pppppplVar26[2];
                    ppppplVar8 = pppppplVar26[1];
                    *pppppplVar21 = *pppppplVar26;
                    pppppplVar21[1] = ppppplVar8;
                    pppppplVar26[2] = ppppplVar4;
                    *pppppplVar26 = ppppplVar6;
                    pppppplVar26[1] = ppppplVar7;
                    iVar23 = iVar19 * 2;
                    iVar24 = iVar19 * 2 + 1;
                    iVar18 = iVar19;
                  } while ((longlong)iVar24 < (longlong)uVar20);
                  uVar1 = uVar20 - 1;
                  local_78 = pppppplVar15[2];
                  local_88 = (longlong *******)*pppppplVar15;
                  uStack_80 = pppppplVar15[1];
                  ppppppplVar9 = local_88;
                  ppppplVar6 = uStack_80;
                  pppppplVar15[2] = pppppplVar15[uVar1 * 3 + 2];
                  ppppplVar4 = (pppppplVar15 + uVar1 * 3)[1];
                  *pppppplVar15 = pppppplVar15[uVar1 * 3];
                  pppppplVar15[1] = ppppplVar4;
                  pppppplVar15[uVar1 * 3 + 2] = local_78;
                  local_88._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
                  uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
                  pppppplVar21 = pppppplVar15 + uVar1 * 3;
                  *(undefined4 *)pppppplVar21 = (undefined4)local_88;
                  *(undefined4 *)((longlong)pppppplVar21 + 4) = local_88._4_4_;
                  *(undefined4 *)(pppppplVar21 + 1) = (undefined4)uStack_80;
                  *(undefined4 *)((longlong)pppppplVar21 + 0xc) = uStack_80._4_4_;
                  bVar29 = 2 < uVar20;
                  uVar20 = uVar1;
                  local_88 = ppppppplVar9;
                  uStack_80 = ppppplVar6;
                } while (bVar29);
              }
            }
          }
LAB_147f92fcb:
          ppppppplVar13 = ppppppplVar13 + -3;
        } while (&local_388 <= ppppppplVar13);
      }
    }
    FUN_140ffd204(&local_3d8);
    local_3e8 = 0;
    uStack_3e0 = 0;
    iVar23 = (int)uStack_3d0 - local_3a4;
    if (iVar23 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar23);
    }
    if (iVar23 != 0) {
      FUN_147f9a9ac(&local_3e8);
    }
    local_88 = (longlong *******)&DAT_100000000;
    uStack_80 = local_3c8;
    local_78 = (longlong *****)0xffffffff;
    uStack_70 = 0;
    if (local_3b0 == 0) {
      iVar23 = 0;
    }
    else {
      FUN_1449c0562(&local_88);
      iVar23 = local_3b0;
    }
    local_370 = local_78;
    ppppplVar4 = local_370;
    uStack_368 = CONCAT44(uStack_6c,uStack_70);
    local_380 = local_88;
    uStack_378 = (undefined4)uStack_80;
    uStack_374 = uStack_80._4_4_;
    local_388 = (longlong *******)&local_3d8;
    local_370._4_4_ = (int)((ulonglong)local_78 >> 0x20);
    if ((local_370._4_4_ != iVar23) || (uStack_80 != local_3c8)) {
      iVar18 = local_370._4_4_;
      local_370 = ppppplVar4;
      do {
        uVar20 = uStack_3e0;
        ppppplVar4 = (*local_388)[(longlong)iVar18 * 3];
        lVar12 = (longlong)(int)uStack_3e0;
        uVar17 = (int)uStack_3e0 + 1;
        uStack_3e0 = CONCAT44(uStack_3e0._4_4_,uVar17);
        if (uStack_3e0._4_4_ < uVar17) {
          FUN_147f9aa0c(&local_3e8,uVar20 & 0xffffffff);
        }
        *(longlong ******)(local_3e8 + lVar12 * 8) = ppppplVar4;
        local_370 = (longlong *****)CONCAT44(local_370._4_4_,(uint)local_370 & ~local_380._4_4_);
        FUN_1449c0562(&local_380);
        iVar18 = local_370._4_4_;
        ppppplVar4 = local_370;
      } while ((longlong ********)local_388 != &local_3d8 ||
               ((longlong *****)CONCAT44(uStack_374,uStack_378) != local_3c8 ||
               local_370._4_4_ != iVar23));
    }
    local_370 = ppppplVar4;
    param_4 = local_408;
    local_400 = *local_408;
    local_3f8 = local_408[1];
    local_3f0 = local_408[2];
    if (local_3f0 != 0) {
      LOCK();
      *(int *)(local_3f0 + 8) = *(int *)(local_3f0 + 8) + 1;
      UNLOCK();
    }
    local_428 = param_6;
    local_430 = param_5;
    local_438 = &local_400;
    uVar11 = (**(code **)(*param_1 + 0xb8))(param_1,&local_3e8,local_418,local_410);
    if (local_3e8 != 0) {
      FUN_1400020a8();
    }
    local_390 = 0;
    if (local_398 != 0) {
      FUN_1400020a8();
    }
    FUN_141078e0c(&local_3d8);
  }
  plVar5 = (longlong *)param_4[2];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar3 = (int *)((longlong)plVar5 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_458) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11;
LAB_147f92c35:
  local_78 = pppppplVar15[2];
  local_88 = (longlong *******)*pppppplVar15;
  uStack_80 = pppppplVar15[1];
  ppppppplVar9 = local_88;
  ppppplVar6 = uStack_80;
  pppppplVar15[2] = pppppplVar22[-1];
  ppppplVar4 = pppppplVar22[-2];
  *pppppplVar15 = *pppppplVar25;
  pppppplVar15[1] = ppppplVar4;
  pppppplVar22[-1] = local_78;
  local_88._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
  uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
  *(undefined4 *)pppppplVar25 = (undefined4)local_88;
  *(undefined4 *)((longlong)pppppplVar22 + -0x14) = local_88._4_4_;
  *(undefined4 *)(pppppplVar22 + -2) = (undefined4)uStack_80;
  *(undefined4 *)((longlong)pppppplVar22 + -0xc) = uStack_80._4_4_;
  iVar23 = iVar23 + -1;
  pppppplVar22 = pppppplVar22 + -6;
  local_88 = ppppppplVar9;
  uStack_80 = ppppplVar6;
  if ((longlong)pppppplVar16 - (longlong)pppppplVar26 <
      (longlong)pppppplVar28 - (longlong)pppppplVar27) {
    if (pppppplVar14 < pppppplVar21) {
      *ppppppplVar13 = pppppplVar14;
      ppppppplVar13[1] = pppppplVar21;
      *(int *)(ppppppplVar13 + 2) = iVar23;
      ppppppplVar13 = ppppppplVar13 + 3;
    }
    pppppplVar27 = pppppplVar15;
    if (pppppplVar25 <= pppppplVar15 + 3) goto LAB_147f92fcb;
  }
  else {
    if (pppppplVar15 + 3 < pppppplVar25) {
      *ppppppplVar13 = pppppplVar15;
      ppppppplVar13[1] = pppppplVar22;
      *(int *)(ppppppplVar13 + 2) = iVar23;
      ppppppplVar13 = ppppppplVar13 + 3;
    }
    pppppplVar16 = pppppplVar21;
    pppppplVar15 = pppppplVar14;
    pppppplVar22 = pppppplVar21;
    if (pppppplVar21 <= pppppplVar14) goto LAB_147f92fcb;
  }
  iVar18 = (int)((ulonglong)((longlong)pppppplVar16 - (longlong)pppppplVar27) >> 3) * -0x55555555;
  uVar17 = iVar18 + 1;
  pppppplVar21 = pppppplVar22;
  pppppplVar26 = pppppplVar27;
  pppppplVar28 = pppppplVar16;
  if (iVar23 == 0) goto LAB_147f92d06;
  goto LAB_147f92b43;
}



// FUNCTION 147f9324e FUN_147f9324e body=819 status=ok
// SIG undefined FUN_147f9324e(void)

ulonglong FUN_147f9324e(undefined8 param_1,longlong *param_2,longlong param_3,longlong param_4,
                       longlong *param_5,longlong *param_6,byte param_7)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  byte bVar11;
  byte bVar12;
  undefined8 unaff_RBX;
  undefined7 uVar14;
  ulonglong uVar13;
  longlong lVar15;
  uint uVar16;
  byte bVar17;
  undefined1 auStack_c8 [36];
  uint local_a4;
  longlong local_a0;
  uint local_94;
  longlong *local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  char local_68 [8];
  longlong local_60;
  longlong lStack_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar14 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar13 = CONCAT71(uVar14,2);
  if (param_4 != 0) {
    *(undefined4 *)(param_6 + 1) = 0;
    local_a0 = param_4;
    if (*(int *)((longlong)param_6 + 0xc) < 0) {
      FUN_147f9aa92();
    }
    local_80 = *param_5;
    local_78 = param_5[1];
    local_70 = param_5[2];
    if (local_70 != 0) {
      LOCK();
      *(int *)(local_70 + 8) = *(int *)(local_70 + 8) + 1;
      UNLOCK();
    }
    FUN_147f93582(local_68,&local_80);
    bVar12 = *(byte *)(local_a0 + 0x48);
    if ((bVar12 != local_50) && ((local_50 != 0 || (bVar12 != 1)))) {
      local_68[0] = (bVar12 <= local_50) * '\x10' + '\x10';
      local_60 = 0;
      lStack_58 = 0;
      iVar3 = (int)param_6[1];
      *(uint *)(param_6 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_6 + 0xc) < iVar3 + 1U) {
        FUN_147f9ab20(param_6,iVar3);
      }
      FUN_147f9aac2((longlong)iVar3 * 0x18 + *param_6,local_68);
    }
    iVar3 = (int)param_2[1];
    if ((longlong)iVar3 == 0) {
      uVar13 = CONCAT71(uVar14,1);
    }
    else {
      param_2 = (longlong *)*param_2;
      plVar9 = param_2 + iVar3;
      local_a4 = (uint)CONCAT71((int7)(int3)((uint)iVar3 >> 8),4);
      bVar11 = 0;
      bVar12 = 0;
      lVar10 = local_a0;
      local_90 = plVar9;
      local_88 = param_3;
      do {
        lVar5 = *param_2;
        if (lVar5 != 0) {
          bVar12 = bVar11;
          if (lVar5 == param_3) {
            bVar12 = 1;
          }
          if (bVar11 == 1) {
            bVar12 = 2;
          }
          iVar3 = *(int *)(lVar5 + 0x38);
          bVar11 = bVar12;
          if ((longlong)iVar3 != 0) {
            lVar6 = *(longlong *)(lVar5 + 0x30);
            uVar16 = (uint)bVar12;
            lVar15 = 0;
            local_94 = (uint)bVar12;
            do {
              if ((*(longlong *)(lVar6 + 0x28 + lVar15) == *param_5) &&
                 (lVar8 = *(longlong *)(lVar6 + 0x20 + lVar15), lVar8 != 0)) {
                local_68[0] = '\0';
                if (bVar12 == 2) {
                  if (*(char *)(lVar10 + 0x41) == '\x01') {
                    local_68[0] = '\x02';
                    bVar17 = 2;
                    goto LAB_147f933e9;
                  }
LAB_147f93423:
                  bVar7 = true;
                  bVar17 = 0;
                }
                else {
                  if (uVar16 == 1) {
                    local_68[0] = '\b';
                    bVar17 = 8;
                  }
                  else {
                    if (*(char *)(lVar8 + 0x41) != '\x01') goto LAB_147f93423;
                    local_68[0] = '\x04';
                    bVar17 = 4;
                  }
LAB_147f933e9:
                  bVar7 = false;
                }
                if (*(char *)(lVar8 + 0x43) == '\x01') {
                  local_68[0] = '\x01';
                  bVar17 = 1;
                }
                else if (bVar7) goto LAB_147f933f5;
                if (DAT_14c950c29 == 1) {
                  FUN_1456cec3c(lVar5);
                  lVar8 = *(longlong *)(lVar6 + 0x20 + lVar15);
                }
                local_60 = lVar5;
                if ((DAT_14c950c29 & 1) != 0) {
                  if (lVar8 == 0) {
                    lVar8 = 0;
                  }
                  else {
                    FUN_1456cec3c();
                    lVar8 = *(longlong *)(lVar6 + 0x20 + lVar15);
                  }
                }
                iVar4 = (int)param_6[1];
                *(uint *)(param_6 + 1) = iVar4 + 1U;
                lStack_58 = lVar8;
                if (*(uint *)((longlong)param_6 + 0xc) < iVar4 + 1U) {
                  FUN_147f9ab20(param_6,iVar4);
                }
                FUN_147f9abb4((longlong)iVar4 * 0x18 + *param_6,local_68);
                local_a4 = local_a4 & 0xff;
                lVar10 = local_a0;
                uVar16 = local_94;
                if ((param_7 & bVar17) != 0) {
                  local_a4 = 3;
                }
              }
LAB_147f933f5:
              lVar15 = lVar15 + 0x50;
              plVar9 = local_90;
              param_3 = local_88;
            } while ((longlong)iVar3 * 0x50 != lVar15);
          }
        }
        param_2 = param_2 + 1;
      } while (param_2 != plVar9);
      uVar13 = 1;
      if (bVar12 != 0) {
        uVar13 = (ulonglong)(byte)local_a4;
      }
    }
  }
  plVar9 = (longlong *)param_5[2];
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar9 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar13 & 0xffffffff;
}



// FUNCTION 147f93582 FUN_147f93582 body=159 status=ok
// SIG undefined FUN_147f93582(void)

undefined8 * FUN_147f93582(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 uVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_30 = *param_2;
  local_28 = param_2[1];
  local_20 = param_2[2];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  uVar4 = FUN_147f95f86(&local_30);
  *(undefined1 *)(param_1 + 3) = uVar4;
  plVar3 = (longlong *)param_2[2];
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f93622 FUN_147f93622 body=175 status=ok
// SIG undefined FUN_147f93622(void)

undefined8 FUN_147f93622(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_140af3742();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f936d2 FUN_147f936d2 body=175 status=ok
// SIG undefined FUN_147f936d2(void)

undefined8 FUN_147f936d2(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_145b65f46();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f93782 FUN_147f93782 body=175 status=ok
// SIG undefined FUN_147f93782(void)

undefined8 FUN_147f93782(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_145b65d72();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f93832 FUN_147f93832 body=99 status=ok
// SIG undefined FUN_147f93832(void)

undefined8 * FUN_147f93832(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  *param_2 = 0;
  param_2[1] = 0;
  lVar1 = (**(code **)(*param_1 + 0x10))();
  if ((lVar1 != 0) && ((longlong)*(int *)(lVar1 + 0x548) != 0)) {
    lVar3 = *(longlong *)(lVar1 + 0x540);
    lVar1 = (longlong)*(int *)(lVar1 + 0x548) * 0x50;
    do {
      lVar2 = FUN_1402218d6(lVar3);
      if (lVar2 != 0) {
        FUN_1449ec78a(param_2,lVar3);
      }
      lVar3 = lVar3 + 0x50;
      lVar1 = lVar1 + -0x50;
    } while (lVar1 != 0);
  }
  return param_2;
}



// FUNCTION 147f93895 FUN_147f93895 body=485 status=ok
// SIG undefined FUN_147f93895(void)

void FUN_147f93895(longlong *param_1,undefined8 *param_2,double *param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong *plVar4;
  undefined1 auStack_b8 [32];
  double local_98;
  double dStack_90;
  double local_88;
  undefined8 local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  double local_50;
  double dStack_48;
  double local_40;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  cVar3 = FUN_1449448d4(param_2);
  if (cVar3 == '\0') {
    local_38 = FUN_140230656(param_2);
    local_50 = (double)(float)*param_3;
    local_78 = *param_2;
    local_70 = param_2[1];
    plVar4 = (longlong *)param_2[2];
    if (plVar4 == (longlong *)0x0) {
      local_68 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      local_68 = plVar4;
    }
    uStack_58 = 0x3c88888900000000;
    dStack_48 = 0.0;
    local_40 = 0.0;
  }
  else {
    local_38 = FUN_140230656(param_2);
    local_88 = param_3[2];
    local_98 = *param_3;
    dStack_90 = param_3[1];
    local_78 = *param_2;
    local_70 = param_2[1];
    plVar4 = (longlong *)param_2[2];
    if (plVar4 == (longlong *)0x0) {
      local_68 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      local_68 = plVar4;
    }
    uStack_58 = CONCAT44(param_4,1);
    local_50 = local_98;
    dStack_48 = dStack_90;
    local_40 = local_88;
  }
  local_60 = 0xffffffff;
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
  (**(code **)(*param_1 + 0xd08))(param_1,&local_78);
  plVar4 = local_68;
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_68 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  plVar4 = (longlong *)param_2[2];
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
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f93a7b FUN_147f93a7b body=485 status=ok
// SIG undefined FUN_147f93a7b(void)

void FUN_147f93a7b(longlong *param_1,undefined8 *param_2,double *param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong *plVar4;
  undefined1 auStack_b8 [32];
  double local_98;
  double dStack_90;
  double local_88;
  undefined8 local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  double local_50;
  double dStack_48;
  double local_40;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  cVar3 = FUN_1449448d4(param_2);
  if (cVar3 == '\0') {
    local_38 = FUN_140230656(param_2);
    local_50 = (double)(float)*param_3;
    local_78 = *param_2;
    local_70 = param_2[1];
    plVar4 = (longlong *)param_2[2];
    if (plVar4 == (longlong *)0x0) {
      local_68 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      local_68 = plVar4;
    }
    uStack_58 = 0x3c88888900000000;
    dStack_48 = 0.0;
    local_40 = 0.0;
  }
  else {
    local_38 = FUN_140230656(param_2);
    local_88 = param_3[2];
    local_98 = *param_3;
    dStack_90 = param_3[1];
    local_78 = *param_2;
    local_70 = param_2[1];
    plVar4 = (longlong *)param_2[2];
    if (plVar4 == (longlong *)0x0) {
      local_68 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      local_68 = plVar4;
    }
    uStack_58 = CONCAT44(param_4,1);
    local_50 = local_98;
    dStack_48 = dStack_90;
    local_40 = local_88;
  }
  local_60 = 0xffffffff;
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
  (**(code **)(*param_1 + 0x2a8))(param_1,&local_78);
  plVar4 = local_68;
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_68 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  plVar4 = (longlong *)param_2[2];
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
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f93c62 FUN_147f93c62 body=140 status=ok
// SIG undefined FUN_147f93c62(void)

void FUN_147f93c62(longlong param_1,undefined8 *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  uint uVar14;
  
  uVar3 = *param_2;
  uVar5 = (uint)((ulonglong)uVar3 >> 0x10);
  uVar14 = (uint)uVar3 & 0xffff;
  puVar13 = (undefined4 *)
            FUN_147f9b81e(param_1 + 0x58,
                          ((uint)uVar3 << 0x10 | uVar14) + (int)((ulonglong)uVar3 >> 0x20) +
                          (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar14 >> 4),param_2);
  uVar6 = *param_3;
  uVar7 = param_3[1];
  uVar8 = param_3[2];
  uVar9 = param_3[3];
  uVar10 = param_3[5];
  uVar11 = param_3[6];
  uVar12 = param_3[7];
  puVar13[4] = param_3[4];
  puVar13[5] = uVar10;
  puVar13[6] = uVar11;
  puVar13[7] = uVar12;
  *puVar13 = uVar6;
  puVar13[1] = uVar7;
  puVar13[2] = uVar8;
  puVar13[3] = uVar9;
  plVar4 = (longlong *)param_2[2];
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
                    /* WARNING: Could not recover jumptable at 0x000147f93ce2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x10))(plVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147f93cee FUN_147f93cee body=758 status=ok
// SIG undefined FUN_147f93cee(void)

void FUN_147f93cee(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  byte bVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined1 auStack_a8 [40];
  longlong local_80;
  longlong lStack_78;
  longlong *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  undefined1 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((int)param_1[0xc] != *(int *)((longlong)param_1 + 0x8c)) {
    lVar8 = *param_2;
    uVar13 = (uint)((ulonglong)lVar8 >> 0x10);
    uVar10 = (uint)lVar8 & 0xffff;
    plVar9 = param_1 + 0x12;
    if ((longlong *)param_1[0x13] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[0x13];
    }
    iVar11 = *(int *)((longlong)plVar9 +
                     (ulonglong)
                     ((int)param_1[0x14] - 1U &
                     (int)((ulonglong)lVar8 >> 0x20) + ((uint)lVar8 << 0x10 | uVar10) +
                     (uVar13 << 0x13 | uVar13 & 0xffff) + (uVar10 >> 4)) * 4);
    if (iVar11 != -1) {
      lVar4 = param_1[0xb];
      do {
        lVar3 = lVar4 + (longlong)iVar11 * 0x60;
        if (*(longlong *)(lVar4 + (longlong)iVar11 * 0x60) == lVar8) {
          if (lVar3 != -0x18 && lVar3 != 0) {
            plVar7 = (longlong *)(**(code **)(*param_1 + 0x10))();
            plVar9 = DAT_14c966e90;
            if (plVar7 != (longlong *)0x0) {
              if (DAT_14c966e90 != (longlong *)0x0) {
                LOCK();
                *(int *)(DAT_14c966e90 + 1) = (int)DAT_14c966e90[1] + 1;
                UNLOCK();
              }
              local_68 = 0xffffffff;
              uStack_60 = 0x3c88888900000000;
              local_58 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
              uStack_50 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
              local_48 = DAT_14c8464f0;
              local_40 = 0;
              local_80 = *param_2;
              lStack_78 = param_2[1];
              local_70 = (longlong *)param_2[2];
              if (local_70 != (longlong *)0x0) {
                LOCK();
                *(int *)(local_70 + 1) = (int)local_70[1] + 1;
                UNLOCK();
              }
              if (plVar9 != (longlong *)0x0) {
                LOCK();
                plVar2 = plVar9 + 1;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)*plVar2 == 0) {
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
              cVar5 = FUN_1449448d4(param_2);
              if (cVar5 == '\0') {
                uStack_50 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
                uVar12 = (undefined4)DAT_14c8464e0;
                uVar13 = DAT_14c8464e0._4_4_;
                local_48 = DAT_14c8464f0;
              }
              else {
                uStack_50 = *(ulonglong *)(lVar3 + 0x40) ^ 0x8000000000000000;
                uVar12 = (int)*(undefined8 *)(lVar3 + 0x38);
                uVar13 = (uint)((ulonglong)*(undefined8 *)(lVar3 + 0x38) >> 0x20) ^ 0x80000000;
                local_48 = *(ulonglong *)(lVar3 + 0x48) ^ 0x8000000000000000;
              }
              local_58 = CONCAT44(uVar13,uVar12);
              local_68 = CONCAT44(1,(undefined4)local_68);
              bVar6 = FUN_1449448d4(param_2);
              uStack_60 = CONCAT44(uStack_60._4_4_,(uint)bVar6);
              lVar8 = FUN_1404d56e0(plVar7);
              uVar12 = *(undefined4 *)(lVar8 + 0x100);
              plVar9 = (longlong *)FUN_144a81a0a();
              (**(code **)(*plVar9 + 0x60))(plVar9,&local_68,uVar12);
              plVar9 = (longlong *)plVar7[4];
              if (plVar9 == (longlong *)0x0) {
LAB_147f93f90:
                (**(code **)(*plVar7 + 0x2a8))(plVar7,&local_80);
              }
              else {
                lVar8 = FUN_144a75eb4();
                if ((*(int *)(plVar9[2] + 0x38) < *(int *)(lVar8 + 0x38)) ||
                   (*(longlong *)
                     (*(longlong *)(plVar9[2] + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) !=
                    lVar8 + 0x30)) goto LAB_147f93f90;
                (**(code **)(*plVar9 + 0xd08))(plVar9,&local_80);
              }
              (**(code **)(*plVar7 + 0x2a0))(plVar7);
              plVar9 = local_70;
              if (local_70 != (longlong *)0x0) {
                LOCK();
                plVar7 = local_70 + 1;
                *(int *)plVar7 = (int)*plVar7 + -1;
                UNLOCK();
                if ((int)*plVar7 == 0) {
                  (**(code **)*local_70)(local_70);
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
            FUN_147f9c040(param_1 + 0xb,param_2);
          }
          break;
        }
        iVar11 = *(int *)(lVar3 + 0x58);
      } while (iVar11 != -1);
    }
  }
  plVar9 = (longlong *)param_2[2];
  if (plVar9 != (longlong *)0x0) {
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
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147f93fe6 FUN_147f93fe6 body=7865 status=ok
// SIG undefined FUN_147f93fe6(void)

/* WARNING: Instruction at (ram,0x000147f95902) overlaps instruction at (ram,0x000147f958ff)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x000147f953c3) */

void FUN_147f93fe6(longlong *param_1,longlong param_2,longlong *param_3,undefined8 param_4)

{
  void **ppvVar1;
  byte bVar2;
  double dVar3;
  double dVar4;
  ulonglong uVar5;
  ulonglong **ppuVar6;
  ulonglong *puVar7;
  byte bVar8;
  char cVar9;
  ulonglong *puVar10;
  longlong *plVar11;
  ulonglong *puVar12;
  double *pdVar13;
  undefined8 uVar14;
  char *pcVar15;
  void *pvVar16;
  uint *puVar17;
  undefined1 *puVar18;
  ulonglong **ppuVar19;
  uint uVar20;
  ulonglong *puVar21;
  wchar_t *pwVar22;
  ulonglong *puVar23;
  ulonglong uVar24;
  longlong lVar25;
  void **ppvVar26;
  uint uVar27;
  int iVar28;
  int iVar29;
  ulonglong uVar30;
  double dVar31;
  undefined2 *puVar32;
  ulonglong *puVar33;
  int iVar34;
  int iVar35;
  ulonglong uVar36;
  ulonglong *puVar37;
  ulonglong *puVar38;
  ulonglong uVar39;
  ulonglong *puVar40;
  ulonglong *puVar41;
  longlong lVar42;
  longlong lVar43;
  bool bVar44;
  float fVar45;
  undefined2 *puVar46;
  undefined4 uVar47;
  undefined1 in_XMM2 [16];
  float fVar48;
  double dVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined1 auStack_658 [32];
  undefined2 *local_638;
  longlong *local_630;
  longlong local_628;
  ulonglong local_620;
  ulonglong local_618;
  longlong *local_610;
  ulonglong *local_608;
  ulonglong *local_600;
  ulonglong *local_5f8;
  void **local_5f0;
  void *local_5e8;
  int local_5e0;
  undefined4 local_5dc;
  ulonglong local_5d8;
  void *local_5d0;
  int local_5c8;
  undefined4 local_5c4;
  undefined2 *local_5c0;
  undefined2 **local_5b8;
  undefined8 local_5b0;
  void *local_5a8;
  int local_5a0;
  undefined4 local_59c;
  undefined2 local_598 [4];
  ulonglong local_590;
  longlong *local_588 [2];
  longlong local_578 [2];
  longlong local_568 [2];
  longlong local_558 [2];
  undefined2 *local_548;
  int local_540;
  undefined2 *local_538;
  undefined8 uStack_530;
  void *local_520;
  void *local_518;
  void *local_510;
  void *local_508;
  void *local_500;
  void *local_4f8;
  void *local_4f0;
  int local_4e8;
  longlong local_4e0;
  ulonglong local_4d8;
  undefined8 uStack_4d0;
  ulonglong *local_4c8;
  ulonglong uStack_4c0;
  undefined1 local_4ac [4];
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  ulonglong *local_498;
  undefined8 local_490;
  undefined4 local_488;
  undefined4 local_484;
  ulonglong *local_478;
  undefined8 uStack_470;
  ulonglong local_468 [2];
  undefined8 local_458;
  uint local_450;
  undefined8 local_44c;
  int local_444;
  longlong local_438;
  undefined4 local_430;
  ulonglong local_428;
  undefined8 uStack_420;
  undefined8 local_408;
  undefined4 local_400;
  undefined8 local_3fc;
  int local_3f4;
  undefined1 local_3f0 [8];
  undefined1 *local_3e8;
  int local_3e0;
  ulonglong *local_3d8;
  ulonglong *puStack_3d0;
  undefined8 local_3c8;
  undefined4 local_3c0;
  undefined4 local_3bc;
  undefined8 local_3b8;
  undefined4 local_3b0;
  undefined8 local_3ac;
  int local_3a4;
  undefined1 local_3a0 [8];
  undefined1 *local_398;
  int local_390;
  ulonglong local_d0;
  
  uVar47 = (undefined4)((ulonglong)param_4 >> 0x20);
  uVar50 = (undefined4)param_4;
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_658;
  lVar42 = param_2 + 0xa8;
  if ((int)param_3[0xa9] == *(int *)((longlong)param_3 + 0x7b4) - (int)param_3[0xf1]) {
    *(undefined4 *)(param_2 + 0xd8) = 0x3f73f3f5;
    *(undefined4 *)(param_2 + 0xdc) = 0x3f1c9c9d;
    *(undefined4 *)(param_2 + 0xe0) = 0x3d909091;
    *(undefined4 *)(param_2 + 0xe4) = 0x3f800000;
    local_428 = local_428 & 0xffffffff00000000;
    FUN_140056680(&local_3d8,
                  L"No enhanced player input action mappings have been applied to this input.");
    FUN_147d8f316(lVar42,&local_3d8,&local_428);
    if (local_3d8 != (ulonglong *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    local_408 = 0;
    local_400 = 0;
    local_428 = 0;
    uStack_420 = 0;
    local_3fc = 0xffffffff00000080;
    local_3f4 = 0;
    local_3e8 = (undefined1 *)0x0;
    local_3e0 = 0;
    local_458 = 0;
    local_450 = 0;
    local_478 = (ulonglong *)0x0;
    uStack_470 = 0;
    local_44c = 0xffffffff00000080;
    local_444 = 0;
    local_438 = 0;
    local_618 = 0;
    local_430 = 0;
    local_610 = param_1;
    FUN_140d2530e(&local_478);
    local_630 = param_3;
    local_628 = lVar42;
    if (local_444 < (int)uStack_470) {
      FUN_14181beea(&local_478);
      puVar12 = local_478;
      uVar27 = (int)uStack_470 - local_444;
      if (1 < (int)uVar27) {
        memset(&local_3c8,0,0x2f0);
        local_3d8 = puVar12;
        puStack_3d0 = puVar12 + (ulonglong)uVar27 * 3 + -3;
        fVar45 = logf((float)(int)uVar27);
        local_3c8 = CONCAT44(local_3c8._4_4_,(int)(longlong)(fVar45 + fVar45));
        ppuVar19 = &local_3d8;
        do {
          puVar10 = *ppuVar19;
          puVar23 = ppuVar19[1];
          iVar34 = *(int *)(ppuVar19 + 2);
          iVar28 = (int)((ulonglong)((longlong)puVar23 - (longlong)puVar10) >> 3) * -0x55555555;
          uVar27 = iVar28 + 1;
          puVar12 = puVar23;
          puVar40 = puVar10;
          if (iVar34 != 0) {
LAB_147f9420e:
            if (8 < (int)uVar27) {
              uVar36 = (ulonglong)(uVar27 >> 1);
              uVar24 = puVar10[uVar36 * 3 + 2];
              uVar30 = puVar10[uVar36 * 3];
              uVar39 = (puVar10 + uVar36 * 3)[1];
              puVar10[uVar36 * 3 + 2] = puVar10[2];
              uVar5 = puVar10[1];
              puVar10[uVar36 * 3] = *puVar10;
              (puVar10 + uVar36 * 3)[1] = uVar5;
              puVar10[2] = uVar24;
              *puVar10 = uVar30;
              puVar10[1] = uVar39;
              puVar37 = puVar12 + 3;
              puVar21 = puVar10;
              do {
                puVar7 = puVar21 + 3;
                puVar33 = puVar21 + 3;
                do {
                  puVar21 = puVar33;
                  puVar41 = puVar7;
                  if (puVar12 < puVar21) break;
                  puVar7 = puVar41 + 3;
                  puVar33 = puVar21 + 3;
                } while ((int)puVar10[1] <= (int)puVar21[1]);
                puVar7 = puVar37 + -6;
                do {
                  puVar33 = puVar37;
                  puVar38 = puVar7;
                  puVar37 = puVar33 + -3;
                  if (puVar37 <= puVar10) break;
                  puVar7 = puVar38 + -3;
                } while ((int)puVar33[-2] <= (int)puVar10[1]);
                if (puVar37 < puVar21) goto LAB_147f94301;
                uVar24 = puVar21[2];
                uVar30 = *puVar21;
                uVar39 = puVar21[1];
                puVar21[2] = puVar33[-1];
                uVar5 = puVar33[-2];
                *puVar21 = *puVar37;
                puVar21[1] = uVar5;
                puVar33[-1] = uVar24;
                *puVar37 = uVar30;
                puVar33[-2] = uVar39;
              } while( true );
            }
            for (; puVar40 = puVar10, puVar23 = puVar10, puVar10 < puVar12; puVar12 = puVar12 + -3)
            {
              while (puVar37 = puVar40, puVar23 = puVar23 + 3, puVar23 <= puVar12) {
                puVar40 = puVar23;
                if ((int)puVar37[1] <= (int)puVar23[1]) {
                  puVar40 = puVar37;
                }
              }
              local_498 = (ulonglong *)puVar37[2];
              ppuVar6 = (ulonglong **)*puVar37;
              puVar23 = (ulonglong *)puVar37[1];
              puVar37[2] = puVar12[2];
              uVar24 = puVar12[1];
              *puVar37 = *puVar12;
              puVar37[1] = uVar24;
              puVar12[2] = (ulonglong)local_498;
              local_4a8._0_4_ = SUB84(ppuVar6,0);
              local_4a8._4_4_ = (undefined4)((ulonglong)ppuVar6 >> 0x20);
              uStack_4a0._0_4_ = SUB84(puVar23,0);
              uStack_4a0._4_4_ = (uint)((ulonglong)puVar23 >> 0x20);
              *(undefined4 *)puVar12 = (undefined4)local_4a8;
              *(undefined4 *)((longlong)puVar12 + 4) = local_4a8._4_4_;
              *(undefined4 *)(puVar12 + 1) = (undefined4)uStack_4a0;
              *(uint *)((longlong)puVar12 + 0xc) = uStack_4a0._4_4_;
              local_4a8 = ppuVar6;
              uStack_4a0 = puVar23;
            }
            goto LAB_147f946b4;
          }
LAB_147f943e1:
          if (uVar27 != 0) {
            iVar34 = (iVar28 - (iVar28 + -1 >> 0x1f)) + -1 >> 1;
            iVar28 = iVar34;
joined_r0x000147f94408:
            do {
              iVar35 = iVar34 * 2 + 1;
              if (iVar35 < (int)uVar27) {
                iVar29 = iVar34 * 2 + 2;
                if ((iVar29 < (int)uVar27) &&
                   ((int)puVar10[(longlong)iVar29 * 3 + 1] <= (int)puVar10[(longlong)iVar35 * 3 + 1]
                   )) {
                  iVar35 = iVar29;
                }
                if ((int)puVar10[(longlong)iVar35 * 3 + 1] < (int)puVar10[(longlong)iVar34 * 3 + 1])
                {
                  puVar12 = puVar10 + (longlong)iVar34 * 3;
                  puVar23 = puVar10 + (longlong)iVar35 * 3;
                  local_498 = (ulonglong *)puVar12[2];
                  ppuVar6 = (ulonglong **)*puVar12;
                  puVar40 = (ulonglong *)puVar12[1];
                  puVar12[2] = puVar23[2];
                  uVar24 = puVar23[1];
                  *puVar12 = *puVar23;
                  puVar12[1] = uVar24;
                  puVar23[2] = (ulonglong)local_498;
                  local_4a8._0_4_ = SUB84(ppuVar6,0);
                  local_4a8._4_4_ = (undefined4)((ulonglong)ppuVar6 >> 0x20);
                  uStack_4a0._0_4_ = SUB84(puVar40,0);
                  uStack_4a0._4_4_ = (uint)((ulonglong)puVar40 >> 0x20);
                  *(undefined4 *)puVar23 = (undefined4)local_4a8;
                  *(undefined4 *)((longlong)puVar23 + 4) = local_4a8._4_4_;
                  *(undefined4 *)(puVar23 + 1) = (undefined4)uStack_4a0;
                  *(uint *)((longlong)puVar23 + 0xc) = uStack_4a0._4_4_;
                  iVar34 = iVar35;
                  local_4a8 = ppuVar6;
                  uStack_4a0 = puVar40;
                  goto joined_r0x000147f94408;
                }
              }
              bVar44 = iVar28 != 0;
              iVar34 = iVar28 + -1;
              iVar28 = iVar34;
            } while (bVar44);
            if (1 < (int)uVar27) {
              uVar30 = (ulonglong)uVar27 - 1;
              local_498 = (ulonglong *)puVar10[2];
              ppuVar6 = (ulonglong **)*puVar10;
              puVar23 = (ulonglong *)puVar10[1];
              puVar10[2] = puVar10[uVar30 * 3 + 2];
              uVar24 = (puVar10 + uVar30 * 3)[1];
              *puVar10 = puVar10[uVar30 * 3];
              puVar10[1] = uVar24;
              puVar10[uVar30 * 3 + 2] = (ulonglong)local_498;
              local_4a8._0_4_ = SUB84(ppuVar6,0);
              local_4a8._4_4_ = (undefined4)((ulonglong)ppuVar6 >> 0x20);
              uStack_4a0._0_4_ = SUB84(puVar23,0);
              uStack_4a0._4_4_ = (uint)((ulonglong)puVar23 >> 0x20);
              puVar12 = puVar10 + uVar30 * 3;
              *(undefined4 *)puVar12 = (undefined4)local_4a8;
              *(undefined4 *)((longlong)puVar12 + 4) = local_4a8._4_4_;
              *(undefined4 *)(puVar12 + 1) = (undefined4)uStack_4a0;
              *(uint *)((longlong)puVar12 + 0xc) = uStack_4a0._4_4_;
              local_4a8 = ppuVar6;
              uStack_4a0 = puVar23;
              if (uVar27 != 2) {
                do {
                  iVar34 = 0;
                  iVar35 = 1;
                  iVar28 = 0;
                  do {
                    iVar34 = iVar34 + 2;
                    iVar29 = iVar35;
                    if (((longlong)iVar34 < (longlong)uVar30) &&
                       ((int)puVar10[(longlong)iVar34 * 3 + 1] <=
                        (int)puVar10[(longlong)iVar35 * 3 + 1])) {
                      iVar29 = iVar34;
                    }
                    if ((int)puVar10[(longlong)iVar28 * 3 + 1] <=
                        (int)puVar10[(longlong)iVar29 * 3 + 1]) break;
                    puVar12 = puVar10 + (longlong)iVar28 * 3;
                    puVar23 = puVar10 + (longlong)iVar29 * 3;
                    uVar24 = puVar12[2];
                    uVar39 = *puVar12;
                    uVar5 = puVar12[1];
                    puVar12[2] = puVar23[2];
                    uVar36 = puVar23[1];
                    *puVar12 = *puVar23;
                    puVar12[1] = uVar36;
                    puVar23[2] = uVar24;
                    *puVar23 = uVar39;
                    puVar23[1] = uVar5;
                    iVar34 = iVar29 * 2;
                    iVar35 = iVar29 * 2 + 1;
                    iVar28 = iVar29;
                  } while ((longlong)iVar35 < (longlong)uVar30);
                  uVar24 = uVar30 - 1;
                  local_498 = (ulonglong *)puVar10[2];
                  ppuVar6 = (ulonglong **)*puVar10;
                  puVar23 = (ulonglong *)puVar10[1];
                  puVar10[2] = puVar10[uVar24 * 3 + 2];
                  uVar39 = (puVar10 + uVar24 * 3)[1];
                  *puVar10 = puVar10[uVar24 * 3];
                  puVar10[1] = uVar39;
                  puVar10[uVar24 * 3 + 2] = (ulonglong)local_498;
                  local_4a8._0_4_ = SUB84(ppuVar6,0);
                  local_4a8._4_4_ = (undefined4)((ulonglong)ppuVar6 >> 0x20);
                  uStack_4a0._0_4_ = SUB84(puVar23,0);
                  uStack_4a0._4_4_ = (uint)((ulonglong)puVar23 >> 0x20);
                  puVar12 = puVar10 + uVar24 * 3;
                  *(undefined4 *)puVar12 = (undefined4)local_4a8;
                  *(undefined4 *)((longlong)puVar12 + 4) = local_4a8._4_4_;
                  *(undefined4 *)(puVar12 + 1) = (undefined4)uStack_4a0;
                  *(uint *)((longlong)puVar12 + 0xc) = uStack_4a0._4_4_;
                  bVar44 = 2 < uVar30;
                  uVar30 = uVar24;
                  local_4a8 = ppuVar6;
                  uStack_4a0 = puVar23;
                } while (bVar44);
              }
            }
          }
LAB_147f946b4:
          ppuVar19 = ppuVar19 + -3;
        } while (&local_3d8 <= ppuVar19);
      }
    }
    FUN_140ffd204(&local_478);
    local_3d8 = (ulonglong *)&DAT_100000000;
    puStack_3d0 = local_468;
    local_3c8 = 0xffffffff;
    local_3c0 = 0;
    if (local_450 != 0) {
      FUN_1449c0562(&local_3d8);
      local_618 = (ulonglong)local_450;
    }
    dVar49 = (double)CONCAT44(uVar47,uVar50);
    local_490 = local_3c8;
    uVar14 = local_490;
    local_488 = local_3c0;
    local_484 = local_3bc;
    uStack_4a0 = local_3d8;
    local_498 = puStack_3d0;
    local_4a8 = &local_478;
    local_490._4_4_ = (int)((ulonglong)local_3c8 >> 0x20);
    if ((local_490._4_4_ != (int)local_618) || (puStack_3d0 != local_468)) {
      local_610 = local_610 + 0x1f;
      ppvVar26 = &local_4f0;
      iVar34 = local_490._4_4_;
      local_490 = uVar14;
      do {
        puVar12 = (ulonglong *)(*local_4a8)[(longlong)iVar34 * 3];
        *(undefined4 *)(param_2 + 0xd8) = 0x3f800000;
        if (puVar12 == (ulonglong *)0x0) {
          *(undefined8 *)(param_2 + 0xdc) = 0;
          *(undefined4 *)(param_2 + 0xe4) = 0x3f800000;
          local_5c0 = (undefined2 *)((ulonglong)local_5c0 & 0xffffffff00000000);
          FUN_140056680(&local_3d8,L"Null Input Mapping Context!");
          FUN_147d8f316(lVar42,&local_3d8,&local_5c0);
          puVar12 = local_3d8;
        }
        else {
          *(undefined8 *)(param_2 + 0xdc) = 0x3f800000;
          *(undefined4 *)(param_2 + 0xe4) = 0x3f800000;
          if (DAT_14c950c29 == 1) {
            FUN_1456cec3c(puVar12);
          }
          local_3d8 = puVar12;
          if ((DAT_14c950c29 & 1) != 0) {
            FUN_1456cec3c(puVar12);
          }
          if ((DAT_14c950c29 & 1) != 0) {
            FUN_1456cec3c(puVar12);
          }
          plVar11 = local_610;
          uVar27 = ((uint)((ulonglong)puVar12 >> 0x14) & 0xffff ^ (uint)((ulonglong)puVar12 >> 4)) *
                   -0x7a143595;
          uVar27 = (uVar27 >> 0xd ^ uVar27) * -0x3d4d51cb;
          iVar34 = FUN_147f99cc6(local_610,uVar27 >> 0x10 ^ uVar27,&local_3d8);
          if ((iVar34 == -1) ||
             (lVar43 = *plVar11 + (longlong)iVar34 * 0x18, puVar10 = (ulonglong *)(lVar43 + 8),
             puVar10 == (ulonglong *)0x0 || lVar43 == 0)) {
            local_4d8 = local_4d8 & 0xffffffff00000000;
            local_4c8 = (ulonglong *)puVar12[3];
            FUN_1400021e4(&local_4c8,&local_5c0);
            puVar46 = &DAT_149dfb77a;
            if ((int)local_5b8 != 0) {
              puVar46 = local_5c0;
            }
            FUN_140002266(&local_3d8,L"  Context: %s",puVar46);
            FUN_147d8f316(lVar42,&local_3d8,&local_4d8);
            if (local_3d8 != (ulonglong *)0x0) {
              FUN_1400020a8();
            }
            if (local_5c0 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
          }
          else {
            puVar10 = (ulonglong *)*puVar10;
            local_538 = (undefined2 *)((ulonglong)local_538 & 0xffffffff00000000);
            local_4d8 = puVar10[3];
            FUN_1400021e4(&local_4d8,&local_5c0);
            puVar46 = &DAT_149dfb77a;
            if ((int)local_5b8 != 0) {
              puVar46 = local_5c0;
            }
            local_4f0 = (void *)puVar12[3];
            FUN_1400021e4(ppvVar26,&local_4c8);
            puVar12 = (ulonglong *)&DAT_149dfb77a;
            if ((int)uStack_4c0 != 0) {
              puVar12 = local_4c8;
            }
            FUN_140002266(&local_3d8,L"  Redirected Context: %s -> %s",puVar12,puVar46);
            FUN_147d8f316(lVar42,&local_3d8,&local_538);
            if (local_3d8 != (ulonglong *)0x0) {
              FUN_1400020a8();
            }
            param_3 = local_630;
            if (local_4c8 != (ulonglong *)0x0) {
              FUN_1400020a8();
            }
            puVar12 = puVar10;
            if (local_5c0 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
          }
          local_4c8 = (ulonglong *)0x0;
          uStack_4c0 = 0;
          local_3b8 = 0;
          local_3b0 = 0;
          local_3d8 = (ulonglong *)0x0;
          puStack_3d0 = (ulonglong *)0x0;
          local_3ac = 0xffffffff00000080;
          local_3a4 = 0;
          local_398 = (undefined1 *)0x0;
          local_390 = 0;
          if ((longlong)(int)puVar12[7] != 0) {
            uVar24 = puVar12[6];
            lVar42 = (longlong)(int)puVar12[7] * 0x50;
            do {
              puVar46 = *(undefined2 **)(uVar24 + 0x20);
              if (puVar46 != (undefined2 *)0x0) {
                uVar27 = ((uint)((ulonglong)puVar46 >> 0x14) & 0xffff ^
                         (uint)((ulonglong)puVar46 >> 4)) * -0x7a143595;
                uVar27 = (uVar27 >> 0xd ^ uVar27) * -0x3d4d51cb;
                local_5c0 = puVar46;
                plVar11 = (longlong *)FUN_147f9c17c(&local_3d8,uVar27 >> 0x10 ^ uVar27,&local_5c0);
                iVar34 = (int)plVar11[1];
                *(uint *)(plVar11 + 1) = iVar34 + 1U;
                if (*(uint *)((longlong)plVar11 + 0xc) < iVar34 + 1U) {
                  FUN_1405b89f8(plVar11,iVar34);
                }
                FUN_1405b824a((longlong)iVar34 * 0x50 + *plVar11,uVar24);
                local_5c0 = *(undefined2 **)(uVar24 + 0x20);
                FUN_147f9c736(&local_4c8,&local_5c0);
                param_3 = local_630;
              }
              uVar24 = uVar24 + 0x50;
              lVar42 = lVar42 + -0x50;
            } while (lVar42 != 0);
          }
          local_608 = puVar12;
          if ((longlong)(int)param_3[0xa9] != 0) {
            uVar24 = local_630[0xa8];
            uVar30 = (longlong)(int)param_3[0xa9] * 0x50 + uVar24;
            local_620 = uVar30;
LAB_147f94c84:
            if ((int)puStack_3d0 != local_3a4) {
              uVar39 = *(ulonglong *)(uVar24 + 0x20);
              uVar27 = ((uint)(uVar39 >> 0x14) & 0xffff ^ (uint)(uVar39 >> 4)) * -0x7a143595;
              uVar27 = (uVar27 >> 0xd ^ uVar27) * -0x3d4d51cb;
              puVar18 = local_398;
              if (local_398 == (undefined1 *)0x0) {
                puVar18 = local_3a0;
              }
              iVar34 = *(int *)(puVar18 +
                               (ulonglong)(local_390 - 1U & (uVar27 >> 0x10 ^ uVar27)) * 4);
              while (iVar34 != -1) {
                puVar12 = local_3d8 + (longlong)iVar34 * 4;
                if (local_3d8[(longlong)iVar34 * 4] == uVar39) {
                  puVar10 = puVar12 + 1;
                  if (puVar10 != (ulonglong *)0x0 && puVar12 != (ulonglong *)0x0) {
                    if ((longlong)(int)puVar12[2] == 0) goto LAB_147f94d95;
                    uVar39 = puVar12[1];
                    lVar42 = (longlong)(int)puVar12[2] * 0x50;
                    goto LAB_147f94d4f;
                  }
                  break;
                }
                iVar34 = (int)puVar12[3];
              }
            }
            goto LAB_147f94c94;
          }
LAB_147f94b3f:
          FUN_147f9c827(local_4c8,uStack_4c0 & 0xffffffff);
          ppvVar26 = &local_4f0;
          lVar42 = local_628;
          param_3 = local_630;
          if ((longlong)(int)uStack_4c0 != 0) {
            local_600 = local_4c8 + (int)uStack_4c0;
            puVar17 = (uint *)local_4c8;
            do {
              uVar50 = (undefined4)((ulonglong)dVar49 >> 0x20);
              uVar24 = *(ulonglong *)puVar17;
              local_4d8 = 0;
              uStack_4d0 = 0;
              if ((int)puStack_3d0 != local_3a4) {
                uVar27 = ((uint)(uVar24 >> 0x14) & 0xffff ^ (uint)(uVar24 >> 4)) * -0x7a143595;
                uVar27 = (uVar27 >> 0xd ^ uVar27) * -0x3d4d51cb;
                puVar18 = local_398;
                if (local_398 == (undefined1 *)0x0) {
                  puVar18 = local_3a0;
                }
                iVar34 = *(int *)(puVar18 +
                                 (ulonglong)(local_390 - 1U & (uVar27 >> 0x10 ^ uVar27)) * 4);
                while (iVar34 != -1) {
                  puVar12 = local_3d8 + (longlong)iVar34 * 4;
                  if (local_3d8[(longlong)iVar34 * 4] == uVar24) goto LAB_147f94e06;
                  iVar34 = (int)puVar12[3];
                }
              }
              puVar12 = (ulonglong *)0x0;
LAB_147f94e06:
              local_5f8 = (ulonglong *)puVar17;
              if ((longlong)(int)puVar12[2] != 0) {
                ppvVar26 = (void **)puVar12[1];
                local_5f0 = ppvVar26 + (longlong)(int)puVar12[2] * 10;
                local_620 = uVar24;
LAB_147f94e2c:
                ppvVar1 = ppvVar26 + 5;
                FUN_1410e4a6a(ppvVar1,&local_4e0);
                if ((int)uStack_420 != local_3f4) {
                  uVar27 = (uint)((ulonglong)local_4e0 >> 0x10);
                  uVar20 = (uint)local_4e0 & 0xffff;
                  puVar18 = local_3e8;
                  if (local_3e8 == (undefined1 *)0x0) {
                    puVar18 = local_3f0;
                  }
                  iVar34 = *(int *)(puVar18 +
                                   (ulonglong)
                                   (local_3e0 - 1U &
                                   (int)((ulonglong)local_4e0 >> 0x20) +
                                   ((uint)local_4e0 << 0x10 | uVar20) +
                                   (uVar27 << 0x13 | uVar27 & 0xffff) + (uVar20 >> 4)) * 4);
                  while (iVar34 != -1) {
                    lVar43 = local_428 + (longlong)iVar34 * 0x20;
                    if (*(longlong *)(local_428 + (longlong)iVar34 * 0x20) == local_4e0)
                    goto LAB_147f94eb5;
                    iVar34 = *(int *)(lVar43 + 0x18);
                  }
                }
                lVar43 = 0;
LAB_147f94eb5:
                lVar25 = lVar43 + 8;
                if (lVar43 == 0) {
                  lVar25 = 0;
                }
                FUN_1400b22c2(&local_4f0,"      ");
                local_508 = ppvVar26[5];
                local_500 = ppvVar26[6];
                local_4f8 = ppvVar26[7];
                if (local_4f8 != (void *)0x0) {
                  LOCK();
                  *(int *)((longlong)local_4f8 + 8) = *(int *)((longlong)local_4f8 + 8) + 1;
                  UNLOCK();
                }
                pdVar13 = (double *)FUN_147f95ea0(param_3,&local_508);
                if (pdVar13 == (double *)0x0) {
                  pdVar13 = (double *)&DAT_14c8464e0;
                }
                dVar31 = *pdVar13;
                uVar50 = SUB84(pdVar13[1],0);
                uVar47 = (undefined4)((ulonglong)pdVar13[1] >> 0x20);
                uVar51 = SUB84(pdVar13[2],0);
                uVar52 = (undefined4)((ulonglong)pdVar13[2] >> 0x20);
                local_520 = ppvVar26[5];
                local_518 = ppvVar26[6];
                local_510 = ppvVar26[7];
                if (local_510 != (void *)0x0) {
                  LOCK();
                  *(int *)((longlong)local_510 + 8) = *(int *)((longlong)local_510 + 8) + 1;
                  UNLOCK();
                }
                bVar8 = FUN_147f95f86(&local_520);
                param_3 = local_568;
                if (bVar8 < 2) {
                  uVar50 = 0;
                  uVar47 = 0;
LAB_147f94f81:
                  uVar51 = 0;
                  uVar52 = 0;
                }
                else if (bVar8 == 2) goto LAB_147f94f81;
                if (lVar25 != 0) {
LAB_147f94f8f:
                  FUN_1400b22c2(&local_538,&DAT_149e9807e);
                  FUN_1459c4454(ppvVar1,local_588,1);
                  uVar14 = FUN_1447a1f4a(local_588);
                  FUN_1407ec8fc(&local_5c0,uVar14,&local_538);
                  iVar34 = (int)local_5b8 + -1;
                  if ((int)local_5b8 == 0) {
                    iVar34 = 0;
                  }
                  FUN_1400020e8(&local_4f0,local_5c0,iVar34);
                  if (local_5c0 != (undefined2 *)0x0) {
                    FUN_1400020a8();
                  }
                  puVar46 = local_538;
                  if (local_588[0] != (longlong *)0x0) {
                    (**(code **)(*local_588[0] + 0x10))();
                    puVar46 = local_538;
                  }
                  goto LAB_147f95029;
                }
                dVar4 = dVar31 * dVar31;
                dVar3 = dVar4;
                if ((1 < bVar8) &&
                   (dVar3 = (double)CONCAT44(uVar47,uVar50) * (double)CONCAT44(uVar47,uVar50) +
                            dVar4, bVar8 != 2)) {
                  dVar3 = dVar3 + (double)CONCAT44(uVar52,uVar51) * (double)CONCAT44(uVar52,uVar51);
                }
                if (((float)dVar3 == 0.0) && (!NAN((float)dVar3))) goto LAB_147f94f8f;
                puVar46 = (undefined2 *)FUN_1400b22c2(&local_548," ) - ");
                puVar17 = &switchD_147f952ba::switchdataD_14acd0b58;
                pcVar15 = (char *)((longlong)&switchD_147f952ba::switchdataD_14acd0b58 +
                                  (longlong)(int)(&switchD_147f952ba::switchdataD_14acd0b58)[bVar8])
                ;
                lVar43 = 0;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
                switch(bVar8) {
                case 0:
                  pwVar22 = L"false";
                  if (9.99999905104687e-09 <=
                      (double)CONCAT44(uVar52,uVar51) * (double)CONCAT44(uVar52,uVar51) +
                      dVar4 + (double)CONCAT44(uVar47,uVar50) * (double)CONCAT44(uVar47,uVar50)) {
                    pwVar22 = L"true";
                  }
                  FUN_140056680(param_3,pwVar22);
                  break;
                case 1:
                  in_XMM2._8_8_ = 0;
                  in_XMM2._0_8_ = dVar31;
                  FUN_140002266(param_3,L"%3.3f",dVar31);
                  break;
                case 2:
                  pwVar22 = L"X=%3.3f Y=%3.3f";
                  goto LAB_147f95570;
                case 3:
                  local_638 = (undefined2 *)CONCAT44(uVar52,uVar51);
                  pwVar22 = L"X=%3.3f Y=%3.3f Z=%3.3f";
LAB_147f95570:
                  in_XMM2._8_8_ = 0;
                  in_XMM2._0_8_ = dVar31;
                  FUN_140002266(param_3,pwVar22,dVar31,CONCAT44(uVar47,uVar50));
                  dVar49 = (double)CONCAT44(uVar47,uVar50);
                  break;
                case 4:
                  goto switchD_147f952ba_caseD_4;
                case 5:
                    /* WARNING: Read-only address (ram,0x00014acd0b58) is written */
                  switchD_147f952ba::switchdataD_14acd0b58._0_1_ = (byte)pcVar15 & 100;
                  *pcVar15 = *pcVar15 + (byte)pcVar15;
                  goto switchD_147f95829_caseD_47f95bca;
                case 6:
                    /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
                case 7:
                  goto switchD_147f952ba_caseD_7;
                }
                FUN_1400b22c2(local_578," - ( ");
                FUN_1401c7f3e(local_558,local_578,param_3);
                FUN_1401c7f3e(&local_538,local_558,&local_548);
                FUN_1459c4454(ppvVar1,local_588,1);
                uVar14 = FUN_1447a1f4a(local_588);
                FUN_1407ec8fc(&local_5c0,uVar14,&local_538);
                iVar34 = (int)local_5b8 + -1;
                if ((int)local_5b8 == 0) {
                  iVar34 = 0;
                }
                FUN_1400020e8(&local_4f0,local_5c0,iVar34);
                if (local_5c0 != (undefined2 *)0x0) {
                  FUN_1400020a8();
                }
                if (local_588[0] != (longlong *)0x0) {
                  (**(code **)(*local_588[0] + 0x10))();
                }
                if (local_538 != (undefined2 *)0x0) {
                  FUN_1400020a8();
                }
                if (local_558[0] != 0) {
                  FUN_1400020a8();
                }
                if (local_578[0] != 0) {
                  FUN_1400020a8();
                }
                puVar46 = local_548;
                if (local_568[0] != 0) {
                  FUN_1400020a8();
                  puVar46 = local_548;
                }
LAB_147f95029:
                if (puVar46 != (undefined2 *)0x0) {
                  FUN_1400020a8();
                }
                iVar34 = *(int *)(ppvVar26 + 1);
                if ((longlong)iVar34 != 0) {
                  pvVar16 = *ppvVar26;
                  lVar42 = 0;
                  do {
                    local_5c0 = *(undefined2 **)((longlong)pvVar16 + lVar42);
                    cVar9 = FUN_1438bb80e(&local_5c0);
                    if (cVar9 != '\0') goto LAB_147f950b5;
                    lVar42 = lVar42 + 8;
                  } while ((longlong)iVar34 * 8 != lVar42);
                }
                pvVar16 = ppvVar26[4];
                iVar34 = *(int *)((longlong)pvVar16 + 0x58);
                if ((longlong)iVar34 != 0) {
                  lVar42 = *(longlong *)((longlong)pvVar16 + 0x50);
                  lVar43 = 0;
                  do {
                    local_5c0 = *(undefined2 **)(lVar42 + lVar43);
                    cVar9 = FUN_1438bb80e(&local_5c0);
                    if (cVar9 != '\0') goto LAB_147f950b5;
                    lVar43 = lVar43 + 8;
                  } while ((longlong)iVar34 * 8 != lVar43);
                  if (lVar25 == 0) {
                    pvVar16 = ppvVar26[4];
                    goto LAB_147f954ad;
                  }
                  goto LAB_147f950be;
                }
                if (lVar25 != 0) goto LAB_147f950be;
LAB_147f954ad:
                param_3 = local_630;
                bVar8 = *(byte *)((longlong)pvVar16 + 0x41);
                if (bVar8 != 1) goto LAB_147f954fe;
                local_588[0] = *(longlong **)(local_620 + 0x18);
                FUN_1400021e4(local_588,&local_548);
                FUN_1400b22c2(local_568,L":Asset");
                local_590 = local_608[3];
                FUN_1400021e4(&local_590,local_578);
                FUN_1401c7f3e(local_558,local_578,local_568);
                FUN_1401c7f3e(&local_538,local_558,&local_548);
                FUN_1410e4a6a(ppvVar1,local_598);
                local_5c0 = local_598;
                local_5b8 = &local_538;
                FUN_147f9cd2a(&local_428,local_4ac,&local_5c0);
                if (local_538 != (undefined2 *)0x0) {
                  FUN_1400020a8();
                }
                if (local_558[0] != 0) {
                  FUN_1400020a8();
                }
                if (local_578[0] != 0) {
                  FUN_1400020a8();
                }
                if (local_568[0] != 0) {
                  FUN_1400020a8();
                }
                if (local_548 != (undefined2 *)0x0) {
                  FUN_1400020a8();
                }
                uVar50 = 0xffffffff;
                goto LAB_147f9513b;
              }
LAB_147f956bc:
              local_5d8 = uVar24;
              if ((uVar24 != 0) && (DAT_14c950c29 != 0)) {
                FUN_1456cec3c(uVar24);
              }
              lVar43 = FUN_144a7a2cc(param_3,&local_5d8);
              puVar17 = &DAT_149e1e2cc;
              ppvVar26 = &local_4f0;
              if (lVar43 != 0) {
                bVar8 = *(char *)(lVar43 + 0x13) - 1;
                puVar17 = &DAT_149e1e2cc;
                if (bVar8 < 8) {
                  puVar17 = (uint *)(&PTR_DAT_14acd0b08)[bVar8];
                }
              }
              uVar27 = *puVar17;
              fVar45 = (float)(uVar27 >> 8 & 0xff) * 0.003921569;
              in_XMM2 = ZEXT416((uint)fVar45);
              fVar48 = (float)(uVar27 >> 0x10 & 0xff) * 0.003921569;
              *(float *)(param_2 + 0xd8) = fVar48;
              *(float *)(param_2 + 0xdc) = fVar45;
              *(float *)(param_2 + 0xe0) = (float)(uVar27 & 0xff) * 0.003921569;
              *(float *)(param_2 + 0xe4) = (float)(uVar27 >> 0x18) * 0.003921569;
              FUN_140056680(&local_5c0,L"    Action: ");
              local_538 = *(undefined2 **)(uVar24 + 0x18);
              FUN_1400021e4(&local_538,ppvVar26);
              iVar34 = local_4e8 + -1;
              if (local_4e8 == 0) {
                iVar34 = 0;
              }
              FUN_1400020e8(&local_5c0,local_4f0,iVar34);
              if (local_4f0 != (void *)0x0) {
                FUN_1400020a8();
              }
              dVar49 = (double)CONCAT44(uVar50,fVar48);
              if (lVar43 != 0) {
                if (*(char *)(lVar43 + 0x13) == '\x01') {
                  in_XMM2._8_8_ = 0;
                  in_XMM2._0_8_ = (double)*(ulonglong *)(lVar43 + 0x38);
                  uVar50 = (undefined4)*(undefined8 *)(lVar43 + 0x48);
                  uVar47 = (undefined4)((ulonglong)*(undefined8 *)(lVar43 + 0x48) >> 0x20);
                  bVar8 = *(byte *)(lVar43 + 0x50);
                  dVar49 = *(double *)(lVar43 + 0x40);
LAB_147f95810:
                  puVar46 = (undefined2 *)CONCAT44(uVar47,uVar50);
                  if (bVar8 < 4) {
                    pcVar15 = (char *)(ulonglong)bVar8;
switchD_147f952ba_caseD_4:
                    dVar31 = in_XMM2._0_8_;
                    switch((longlong)&switchD_147f95829::switchdataD_14acd0b68 +
                           (longlong)
                           (int)(&switchD_147f95829::switchdataD_14acd0b68)[(longlong)pcVar15]) {
                    case 0x147f9582b:
                      in_XMM2._0_8_ = dVar31 * dVar31 + dVar49 * dVar49;
                      pwVar22 = L"false";
                      if (9.99999905104687e-09 <= (double)puVar46 * (double)puVar46 + in_XMM2._0_8_)
                      {
                        pwVar22 = L"true";
                      }
                      FUN_140056680(&local_538,pwVar22);
                      break;
                    case 0x147f95912:
                      goto switchD_147f95829_caseD_47f95912;
                    case 0x147f95bca:
switchD_147f95829_caseD_47f95bca:
                      local_638 = puVar46;
                      pwVar22 = L"X=%3.3f Y=%3.3f Z=%3.3f";
                      goto LAB_147f95921;
                    case 0x147f95be4:
                      FUN_140002266(&local_538,L"%3.3f",dVar31);
                    }
                  }
                  else {
                    local_538 = (undefined2 *)0x0;
                    uStack_530 = 0;
                  }
                }
                else {
                  in_XMM2._8_8_ = 0;
                  in_XMM2._0_8_ = (double)DAT_14c8464e0;
                  bVar8 = *(byte *)(lVar43 + 0x50);
                  if (bVar8 < 2) {
                    uVar50 = 0;
                    uVar47 = 0;
                    dVar49 = 0.0;
                    goto LAB_147f95810;
                  }
                  dVar49 = DAT_14c8464e8;
                  if (bVar8 != 2) {
                    uVar50 = (undefined4)DAT_14c8464f0;
                    uVar47 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
                    goto LAB_147f95810;
                  }
switchD_147f95829_caseD_47f95912:
                  pwVar22 = L"X=%3.3f Y=%3.3f";
LAB_147f95921:
                  FUN_140002266(&local_538,pwVar22,in_XMM2._0_8_,dVar49);
                }
                puVar46 = &DAT_149dfb77a;
                if ((int)uStack_530 != 0) {
                  puVar46 = local_538;
                }
                cVar9 = *(char *)(lVar43 + 0x13);
                fVar45 = *(float *)(lVar43 + 0x58 + (ulonglong)(cVar9 == '\x01') * 4);
                uVar14 = FUN_140851d9a();
                lVar25 = FUN_140277b32(uVar14,0,L"EnhancedInput.ETriggerEvent",0);
                if (lVar25 == 0) {
                  FUN_140033559("Runtime\\CoreUObject\\Public\\UObject/Class.h",0xd12,
                                L"Couldn\'t find enum \'%s\'",L"EnhancedInput.ETriggerEvent");
                }
                FUN_1401cfad2(lVar25,&local_548,cVar9);
                puVar32 = &DAT_149dfb77a;
                if (local_540 != 0) {
                  puVar32 = local_548;
                }
                dVar49 = (double)fVar45;
                local_638 = puVar46;
                FUN_140002266(ppvVar26,L" - %s - %.3fs (%s)",puVar32);
                iVar34 = local_4e8 + -1;
                if (local_4e8 == 0) {
                  iVar34 = 0;
                }
                FUN_1400020e8(&local_5c0,local_4f0,iVar34);
                if (local_4f0 != (void *)0x0) {
                  FUN_1400020a8();
                }
                if (local_548 != (undefined2 *)0x0) {
                  FUN_1400020a8();
                }
                if (local_538 != (undefined2 *)0x0) {
                  FUN_1400020a8();
                }
                local_5e8 = (void *)0x0;
                local_5e0 = *(int *)(lVar43 + 0x20);
                lVar25 = (longlong)local_5e0;
                pvVar16 = *(void **)(lVar43 + 0x18);
                if (lVar25 == 0) {
                  local_5dc = 0;
                }
                else {
                  FUN_147f9ce98(&local_5e8,local_5e0);
                  memcpy(local_5e8,pvVar16,lVar25 << 3);
                }
                param_3 = local_630;
                FUN_1438ba306(ppvVar26,&local_5e8);
                iVar34 = local_4e8 + -1;
                if (local_4e8 == 0) {
                  iVar34 = 0;
                }
                FUN_1400020e8(&local_5c0,local_4f0,iVar34);
                if (local_4f0 != (void *)0x0) {
                  FUN_1400020a8();
                }
              }
              local_4f0 = (void *)((ulonglong)local_4f0 & 0xffffffff00000000);
              FUN_147d8f316(lVar42,&local_5c0,ppvVar26);
              if ((longlong)(int)uStack_4d0 != 0) {
                lVar43 = (longlong)(int)uStack_4d0 * 0x18;
                lVar25 = local_4d8 + 8;
                do {
                  bVar8 = *(byte *)(lVar25 + -5);
                  bVar2 = *(byte *)(lVar25 + -8);
                  uVar50 = 0;
                  fVar45 = (float)*(byte *)(lVar25 + -7) * 0.003921569;
                  in_XMM2 = ZEXT416((uint)fVar45);
                  fVar48 = (float)*(byte *)(lVar25 + -6) * 0.003921569;
                  *(float *)(param_2 + 0xd8) = fVar48;
                  *(float *)(param_2 + 0xdc) = fVar45;
                  *(float *)(param_2 + 0xe0) = (float)bVar2 * 0.003921569;
                  *(float *)(param_2 + 0xe4) = (float)bVar8 * 0.003921569;
                  local_4f0 = (void *)((ulonglong)local_4f0 & 0xffffffff00000000);
                  FUN_147d8f316(lVar42,lVar25,ppvVar26);
                  dVar49 = (double)CONCAT44(uVar50,fVar48);
                  lVar25 = lVar25 + 0x18;
                  lVar43 = lVar43 + -0x18;
                } while (lVar43 != 0);
              }
              if (local_5c0 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
              FUN_1438bb7de(local_4d8,uStack_4d0 & 0xffffffff);
              if (local_4d8 != 0) {
                FUN_1400020a8();
              }
              puVar17 = (uint *)(local_5f8 + 1);
switchD_147f952ba_caseD_7:
            } while ((ulonglong *)puVar17 != local_600);
          }
          local_390 = 0;
          if (local_398 != (undefined1 *)0x0) {
            FUN_1400020a8();
          }
          FUN_147f98cee(&local_3d8);
          puVar12 = local_4c8;
        }
        if (puVar12 != (ulonglong *)0x0) {
          FUN_1400020a8();
        }
        local_490 = CONCAT44(local_490._4_4_,(uint)local_490 & ~uStack_4a0._4_4_);
        FUN_1449c0562(&uStack_4a0);
        iVar34 = local_490._4_4_;
        uVar14 = local_490;
      } while (local_4a8 != &local_478 ||
               (local_498 != local_468 || local_490._4_4_ != (int)local_618));
    }
    local_490 = uVar14;
    local_430 = 0;
    if (local_438 != 0) {
      FUN_1400020a8();
    }
    FUN_141078e0c(&local_478);
    local_3e0 = 0;
    if (local_3e8 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    FUN_140bb2a1a(&local_428);
  }
  if ((local_d0 ^ (ulonglong)auStack_658) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_147f94301:
  local_498 = (ulonglong *)puVar10[2];
  ppuVar6 = (ulonglong **)*puVar10;
  puVar7 = (ulonglong *)puVar10[1];
  puVar10[2] = puVar33[-1];
  uVar24 = puVar33[-2];
  *puVar10 = *puVar37;
  puVar10[1] = uVar24;
  puVar33[-1] = (ulonglong)local_498;
  local_4a8._0_4_ = SUB84(ppuVar6,0);
  local_4a8._4_4_ = (undefined4)((ulonglong)ppuVar6 >> 0x20);
  uStack_4a0._0_4_ = SUB84(puVar7,0);
  uStack_4a0._4_4_ = (uint)((ulonglong)puVar7 >> 0x20);
  *(undefined4 *)puVar37 = (undefined4)local_4a8;
  *(undefined4 *)((longlong)puVar33 + -0x14) = local_4a8._4_4_;
  *(undefined4 *)(puVar33 + -2) = (undefined4)uStack_4a0;
  *(uint *)((longlong)puVar33 + -0xc) = uStack_4a0._4_4_;
  iVar34 = iVar34 + -1;
  puVar33 = puVar33 + -6;
  param_3 = local_630;
  lVar42 = local_628;
  local_4a8 = ppuVar6;
  uStack_4a0 = puVar7;
  if ((longlong)puVar38 - (longlong)puVar40 < (longlong)puVar23 - (longlong)puVar41) {
    if (puVar21 < puVar12) {
      *ppuVar19 = puVar21;
      ppuVar19[1] = puVar12;
      *(int *)(ppuVar19 + 2) = iVar34;
      ppuVar19 = ppuVar19 + 3;
    }
    puVar23 = puVar38;
    puVar41 = puVar10;
    if (puVar37 <= puVar10 + 3) goto LAB_147f946b4;
  }
  else {
    if (puVar10 + 3 < puVar37) {
      *ppuVar19 = puVar10;
      ppuVar19[1] = puVar33;
      *(int *)(ppuVar19 + 2) = iVar34;
      ppuVar19 = ppuVar19 + 3;
    }
    puVar10 = puVar21;
    puVar33 = puVar12;
    puVar23 = puVar12;
    if (puVar12 <= puVar21) goto LAB_147f946b4;
  }
  iVar28 = (int)((ulonglong)((longlong)puVar23 - (longlong)puVar41) >> 3) * -0x55555555;
  uVar27 = iVar28 + 1;
  puVar12 = puVar33;
  puVar40 = puVar41;
  if (iVar34 == 0) goto LAB_147f943e1;
  goto LAB_147f9420e;
LAB_147f94d4f:
  do {
    if (*(longlong *)(uVar39 + 0x28) == *(longlong *)(uVar24 + 0x28)) {
      lVar43 = *(longlong *)(uVar24 + 0x20);
      if ((DAT_14c950c29 == 1) && (lVar43 != 0)) {
        FUN_1456cec3c(lVar43);
        uVar30 = local_620;
      }
      if (*(longlong *)(uVar39 + 0x20) == lVar43) {
        if (uVar39 != 0) goto LAB_147f94c94;
        break;
      }
    }
    uVar39 = uVar39 + 0x50;
    lVar42 = lVar42 + -0x50;
  } while (lVar42 != 0);
LAB_147f94d95:
  iVar34 = (int)puVar12[2];
  *(uint *)(puVar12 + 2) = iVar34 + 1U;
  if (*(uint *)((longlong)puVar12 + 0x14) < iVar34 + 1U) {
    FUN_1405b89f8(puVar10,iVar34);
  }
  FUN_1405b824a((longlong)iVar34 * 0x50 + *puVar10,uVar24);
  uVar30 = local_620;
LAB_147f94c94:
  uVar24 = uVar24 + 0x50;
  if (uVar24 == uVar30) goto LAB_147f94b3f;
  goto LAB_147f94c84;
LAB_147f950b5:
  if (lVar25 == 0) {
    bVar8 = *(byte *)((longlong)ppvVar26[4] + 0x41);
LAB_147f954fe:
    param_3 = local_630;
    uVar50 = 0xffffffff;
    if ((bVar8 & 1) == 0) {
      thunk_FUN_14047a987(&local_4f0," (Not consuming input)",0x16);
    }
  }
  else {
LAB_147f950be:
    FUN_1400b22c2(&local_538,"  : OVERRIDDEN BY ");
    FUN_144a7dea0(&local_5c0,&local_538,lVar25);
    iVar34 = (int)local_5b8 + -1;
    if ((int)local_5b8 == 0) {
      iVar34 = 0;
    }
    FUN_1400020e8(&local_4f0,local_5c0,iVar34);
    param_3 = local_630;
    if (local_5c0 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_538 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    uVar50 = 0xff404040;
  }
LAB_147f9513b:
  thunk_FUN_14047a987(&local_4f0,&DAT_149e42208);
  lVar42 = param_3[0xa9];
  uVar47 = 0xff404040;
  if ((longlong)(int)lVar42 != 0) {
    lVar43 = param_3[0xa8];
    lVar25 = 0;
    do {
      cVar9 = FUN_147f8e276(lVar43 + lVar25,ppvVar26);
      param_3 = local_630;
      if (cVar9 != '\0') {
        iVar34 = (int)(lVar25 >> 4) * -0x33333333;
        if (iVar34 != -1) {
          lVar42 = (longlong)iVar34 * 0x50;
          local_5a8 = (void *)0x0;
          local_5a0 = *(int *)(local_630[0xa8] + 8 + lVar42);
          lVar43 = (longlong)local_5a0;
          pvVar16 = *(void **)(local_630[0xa8] + lVar42);
          if (lVar43 == 0) {
            local_59c = 0;
          }
          else {
            FUN_147f9ce98(&local_5a8,local_5a0);
            memcpy(local_5a8,pvVar16,lVar43 << 3);
          }
          FUN_1438ba306(&local_5c0,&local_5a8);
          FUN_1400020e8(&local_4f0,local_5c0);
          uVar47 = uVar50;
          if (local_5c0 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
        }
        break;
      }
      lVar25 = lVar25 + 0x50;
    } while ((longlong)(int)lVar42 * 0x50 != lVar25);
  }
  pvVar16 = local_4f0;
  local_5d0 = (void *)0x0;
  lVar42 = (longlong)local_4e8;
  local_5c8 = local_4e8;
  if (lVar42 == 0) {
    local_5c4 = 0;
    local_5c0 = (undefined2 *)CONCAT44(local_5c0._4_4_,uVar47);
    local_5b0 = 0;
  }
  else {
    FUN_1446dd670(&local_5d0,local_4e8,0);
    memcpy(local_5d0,pvVar16,lVar42 * 2);
    pvVar16 = local_5d0;
    uVar24 = local_620;
    lVar42 = (longlong)local_5c8;
    local_5c0 = (undefined2 *)CONCAT44(local_5c0._4_4_,uVar47);
    local_5b8 = (undefined2 **)0x0;
    local_5b0 = CONCAT44(local_5b0._4_4_,local_5c8);
    if (lVar42 != 0) {
      FUN_1446dd670(&local_5b8,local_5c8,0);
      memcpy(local_5b8,pvVar16,lVar42 * 2);
      goto LAB_147f9532e;
    }
  }
  local_5b8 = (undefined2 **)0x0;
  local_5b0 = local_5b0 & 0xffffffff;
  uVar24 = local_620;
LAB_147f9532e:
  lVar42 = local_628;
  if (local_5d0 != (void *)0x0) {
    FUN_1400020a8(local_5d0);
  }
  uVar30 = uStack_4d0;
  lVar43 = (longlong)(int)uStack_4d0;
  uVar27 = (int)uStack_4d0 + 1;
  uStack_4d0 = CONCAT44(uStack_4d0._4_4_,uVar27);
  if (uStack_4d0._4_4_ < uVar27) {
    FUN_1438bb848(&local_4d8,uVar30 & 0xffffffff);
  }
  *(undefined4 *)(local_4d8 + lVar43 * 0x18) = local_5c0._0_4_;
  *(undefined8 *)(local_4d8 + 8 + lVar43 * 0x18) = 0;
  *(undefined2 ***)(local_4d8 + 8 + lVar43 * 0x18) = local_5b8;
  *(undefined4 *)(local_4d8 + 0x10 + lVar43 * 0x18) = (undefined4)local_5b0;
  *(undefined4 *)(local_4d8 + 0x14 + lVar43 * 0x18) = local_5b0._4_4_;
  local_5b0 = 0;
                    /* WARNING: Read-only address (ram,0x00014acd0b58) is written */
  local_5b8 = (undefined2 **)0x0;
  if (local_4f0 != (void *)0x0) {
    FUN_1400020a8();
  }
  uVar50 = (undefined4)((ulonglong)dVar49 >> 0x20);
  ppvVar26 = ppvVar26 + 10;
  if (ppvVar26 == local_5f0) goto LAB_147f956bc;
  goto LAB_147f94e2c;
}



// FUNCTION 147f95ea0 FUN_147f95ea0 body=229 status=ok
// SIG undefined FUN_147f95ea0(void)

longlong FUN_147f95ea0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  
  if (*(int *)(param_1 + 0x2e8) != *(int *)(param_1 + 0x314)) {
    lVar5 = *param_2;
    uVar4 = (uint)((ulonglong)lVar5 >> 0x10);
    uVar8 = (uint)lVar5 & 0xffff;
    lVar6 = param_1 + 0x318;
    if (*(longlong *)(param_1 + 800) != 0) {
      lVar6 = *(longlong *)(param_1 + 800);
    }
    iVar7 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)(param_1 + 0x328) - 1U &
                             (int)((ulonglong)lVar5 >> 0x20) + ((uint)lVar5 << 0x10 | uVar8) +
                             (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar8 >> 4)) * 4);
    if (iVar7 != -1) {
      do {
        lVar6 = *(longlong *)(param_1 + 0x2e0) + (longlong)iVar7 * 0x110;
        if (*(longlong *)(*(longlong *)(param_1 + 0x2e0) + (longlong)iVar7 * 0x110) == lVar5)
        goto LAB_147f95eb6;
        iVar7 = *(int *)(lVar6 + 0x108);
      } while (iVar7 != -1);
    }
  }
  lVar6 = 0;
LAB_147f95eb6:
  plVar3 = (longlong *)param_2[2];
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
  lVar5 = lVar6 + 0x18;
  if (lVar6 == 0) {
    lVar5 = 0;
  }
  return lVar5;
}



// FUNCTION 147f95f86 FUN_147f95f86 body=91 status=ok
// SIG undefined FUN_147f95f86(void)

ulonglong FUN_147f95f86(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  undefined8 unaff_RBX;
  ulonglong uVar6;
  undefined7 uVar7;
  
  cVar4 = FUN_144aa26b8();
  uVar7 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar6 = CONCAT71(uVar7,3);
  if (cVar4 == '\0') {
    cVar4 = FUN_144a8fce0(param_1);
    uVar6 = CONCAT71(uVar7,2);
    if (cVar4 == '\0') {
      uVar5 = FUN_140f47498(param_1);
      uVar6 = (ulonglong)uVar5;
    }
  }
  plVar3 = *(longlong **)(param_1 + 0x10);
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
  return uVar6 & 0xffffffff;
}



// FUNCTION 147f95fe2 FUN_147f95fe2 body=368 status=ok
// SIG undefined FUN_147f95fe2(void)

void FUN_147f95fe2(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  int local_50;
  undefined4 local_44;
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 != 0) {
    lVar2 = (**(code **)(*param_1 + 0x10))();
    if (lVar2 == 0) {
      *(undefined4 *)(param_2 + 0xd8) = 0x3f73f3f5;
      *(undefined4 *)(param_2 + 0xdc) = 0x3f1c9c9d;
      *(undefined4 *)(param_2 + 0xe0) = 0x3d909091;
      *(undefined4 *)(param_2 + 0xe4) = 0x3f800000;
      local_58 = 0;
      FUN_140056680(local_40,
                    L"This player does not support Enhanced Input. To enable it update Project Settings -> Input -> Default Classes to the Enhanced versions."
                   );
      FUN_147d8f316(param_2 + 0xa8,local_40,&local_58);
      if (local_40[0] != 0) {
        FUN_1400020a8();
      }
    }
    else {
      lVar1 = *(longlong *)(lVar2 + 0x20);
      if (lVar1 != 0) {
        lVar3 = FUN_144a75eb4();
        if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
          *(undefined4 *)(param_2 + 0xd8) = 0x3f800000;
          *(undefined4 *)(param_2 + 0xdc) = 0x3f800000;
          *(undefined4 *)(param_2 + 0xe0) = 0x3f800000;
          *(undefined4 *)(param_2 + 0xe4) = 0x3f800000;
          local_44 = 0;
          local_60 = *(undefined8 *)(lVar1 + 0x18);
          FUN_1400021e4(&local_60,&local_58);
          if (local_50 == 0) {
            puVar4 = &DAT_149dfb77a;
          }
          else {
            puVar4 = (undefined2 *)CONCAT44(uStack_54,local_58);
          }
          FUN_140002266(local_40,L"Player: %s",puVar4);
          FUN_147d8f316(param_2 + 0xa8,local_40,&local_44);
          if (local_40[0] != 0) {
            FUN_1400020a8();
          }
          if (CONCAT44(uStack_54,local_58) != 0) {
            FUN_1400020a8();
          }
        }
      }
      FUN_147f93fe6(param_1,param_2,lVar2);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f96154 FUN_147f96154 body=67 status=ok
// SIG undefined FUN_147f96154(void)

void FUN_147f96154(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  
  if ((DAT_14c872a72 == '\0') && (*param_1 != 0)) {
    uVar1 = *(uint *)(*param_1 + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar2 = 0;
    }
    FUN_14482b126(lVar2,0x40000000);
    return;
  }
  return;
}



// FUNCTION 147f9619c FUN_147f9619c body=156 status=ok
// SIG undefined FUN_147f9619c(void)

void FUN_147f9619c(undefined8 param_1,longlong param_2)

{
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
  FUN_1438ba610(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f96240 FUN_147f96240 body=163 status=ok
// SIG undefined FUN_147f96240(void)

void FUN_147f96240(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar1 = FUN_147f962e4(param_1,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f962e4 FUN_147f962e4 body=233 status=ok
// SIG undefined FUN_147f962e4(void)

ulonglong FUN_147f962e4(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    lVar1 = *(longlong *)(param_2 + 0x188);
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar1);
    }
    else if (lVar1 == 0) goto LAB_147f96389;
    if ((DAT_14c950c29 & 1) != 0) {
      FUN_1456cec3c(lVar1);
    }
    local_30 = 0;
    FUN_14485c47a(&local_30,lVar1);
    iVar2 = FUN_1413ef3b4(param_1 + 0x198,&local_30);
    if (0 < iVar2) {
      FUN_14596436e(lVar1);
      local_30 = CONCAT71(local_30._1_7_,1);
      uVar3 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
      (**(code **)(*(longlong *)(param_1 + 0x30) + 0xa8))(param_1 + 0x30,&local_30,1);
      goto LAB_147f9638b;
    }
  }
LAB_147f96389:
  uVar3 = 0;
LAB_147f9638b:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f963d2 FUN_147f963d2 body=1155 status=ok
// SIG undefined FUN_147f963d2(void)

void FUN_147f963d2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  void *_Src;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar8 = (longlong *)FUN_14032f648();
  lVar9 = plVar8[0x22];
  if (lVar9 == 0) {
    (**(code **)(*plVar8 + 1000))(plVar8);
    lVar9 = plVar8[0x22];
  }
  local_58 = *(undefined8 *)(lVar9 + 0xb8);
  local_50 = *(undefined4 *)(lVar9 + 0xc0);
  uStack_4c = *(undefined4 *)(lVar9 + 0xc4);
  uStack_48 = *(undefined4 *)(lVar9 + 200);
  uStack_44 = *(undefined4 *)(lVar9 + 0xcc);
  local_40 = (void *)0x0;
  local_38 = *(int *)(lVar9 + 0xd8);
  lVar12 = (longlong)local_38;
  _Src = *(void **)(lVar9 + 0xd0);
  if (lVar12 == 0) {
    local_34 = 0;
  }
  else {
    FUN_1446dd670(&local_40,local_38,0);
    memcpy(local_40,_Src,lVar12 * 2);
  }
  lVar9 = FUN_14479d2ce(&local_58);
  if ((lVar9 == 0) && (CONCAT44(uStack_4c,local_50) != 0)) {
    lVar9 = FUN_140007850();
    cVar7 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar9 == 0) || (cVar7 == '\0')) {
      FUN_14485c47a(&local_58,lVar9);
      if (lVar9 == 0) goto LAB_147f965dd;
    }
    else {
      uVar3 = *(uint *)(lVar9 + 0xc);
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar12 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar12 = 0;
      }
      if ((*(uint *)(lVar12 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(&local_58,lVar9);
      }
    }
    if ((*(uint *)(lVar9 + 8) >> 0x1e & 1) != 0) goto LAB_147f965dd;
LAB_147f96520:
    lVar12 = FUN_144a797b2();
    if ((((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x38) < *(int *)(lVar12 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar12 + 0x38) * 8) != lVar12 + 0x30)) ||
        (lVar12 = FUN_140334ca4(), lVar12 == 0)) ||
       ((*(int *)(lVar9 + 0x38) < *(int *)(lVar12 + 0x38) ||
        (*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(lVar12 + 0x38) * 8) !=
         lVar12 + 0x30)))) goto LAB_147f965dd;
    lVar12 = FUN_14479d2ce(&local_58);
    if ((lVar12 == 0) && (CONCAT44(uStack_4c,local_50) != 0)) {
      lVar12 = FUN_140007850();
      cVar7 = (*(code *)PTR_FUN_14c758760)();
      if ((lVar12 == 0) || (cVar7 == '\0')) {
        FUN_14485c47a(&local_58,lVar12);
        if (lVar12 == 0) goto LAB_147f96838;
      }
      else {
        uVar3 = *(uint *)(lVar12 + 0xc);
        if ((int)uVar3 < DAT_14c9647dc) {
          lVar9 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
        }
        else {
          lVar9 = 0;
        }
        if ((*(uint *)(lVar9 + 8) & 0x8400000) == 0) {
          FUN_14485c47a(&local_58,lVar12);
        }
      }
      if ((*(uint *)(lVar12 + 8) >> 0x1e & 1) != 0) goto LAB_147f96838;
LAB_147f96805:
      lVar9 = FUN_144a797b2();
      if ((((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x38) < *(int *)(lVar9 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar9 + 0x38) * 8) != lVar9 + 0x30)) ||
          (lVar10 = FUN_140334ca4(), lVar10 == 0)) ||
         (*(int *)(lVar12 + 0x38) < *(int *)(lVar10 + 0x38))) goto LAB_147f96838;
      lVar9 = 0;
      if (*(longlong *)(*(longlong *)(lVar12 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8) ==
          lVar10 + 0x30) {
        lVar9 = lVar12;
      }
    }
    else {
      if (lVar12 != 0) goto LAB_147f96805;
LAB_147f96838:
      lVar9 = 0;
    }
  }
  else {
    if (lVar9 != 0) goto LAB_147f96520;
LAB_147f965dd:
    lVar9 = FUN_140334ca4();
  }
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_60,L"EIWorldSubsystem_PlayerInput0",1);
  lVar9 = FUN_147f96856(param_1,lVar9,local_60);
  if ((lVar9 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar9);
  }
  *(longlong *)(param_1 + 0x180) = lVar9;
  if (DAT_14c98e618 == 0) goto LAB_147f96781;
  plVar8 = (longlong *)FUN_14001cc68(0x30,0x10);
  plVar8[1] = (longlong)&DAT_100000001;
  *plVar8 = (longlong)&PTR_FUN_14acd0980;
  plVar8[2] = (longlong)&PTR_FUN_14acd09a0;
  plVar8[3] = DAT_14c967818;
  uVar6 = DAT_14c8463f8._4_4_;
  uVar5 = (undefined4)DAT_14c8463f8;
  uVar4 = DAT_14c8463f0._4_4_;
  *(undefined4 *)(plVar8 + 4) = (undefined4)DAT_14c8463f0;
  *(undefined4 *)((longlong)plVar8 + 0x24) = uVar4;
  *(undefined4 *)(plVar8 + 5) = uVar5;
  *(undefined4 *)((longlong)plVar8 + 0x2c) = uVar6;
  if (plVar8 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x188) = 0x10;
    plVar11 = *(longlong **)(param_1 + 400);
    if (plVar11 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 400) = 0;
LAB_147f966ca:
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
      if (plVar8 != (longlong *)0x0) goto LAB_147f9673a;
    }
  }
  else {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x188) = plVar8 + 2;
    plVar11 = *(longlong **)(param_1 + 400);
    if (plVar8 == plVar11) {
      LOCK();
      plVar11 = plVar8 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
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
    else {
      *(longlong **)(param_1 + 400) = plVar8;
      if (plVar11 != (longlong *)0x0) goto LAB_147f966ca;
    }
LAB_147f9673a:
    LOCK();
    plVar11 = plVar8 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
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
  lVar9 = DAT_14c98e618;
  local_70 = *(undefined8 *)(param_1 + 0x188);
  local_68 = *(longlong *)(param_1 + 400);
  if (local_68 != 0) {
    LOCK();
    *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + 1;
    UNLOCK();
  }
  FUN_145c240d4(lVar9,&local_70);
LAB_147f96781:
  FUN_147f96920(param_1);
  local_58 = CONCAT71(local_58._1_7_,1);
  (**(code **)(*(longlong *)(param_1 + 0x30) + 0xa8))(param_1 + 0x30,&local_58,1);
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147f96856 FUN_147f96856 body=201 status=ok
// SIG undefined FUN_147f96856(void)

undefined8 FUN_147f96856(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_3 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  local_68 = (longlong *)0x0;
  local_38 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  local_a8 = param_3;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f96920 FUN_147f96920 body=312 status=ok
// SIG undefined FUN_147f96920(void)

void FUN_147f96920(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [39];
  char local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar2 = (longlong *)FUN_14032f648();
  lVar6 = plVar2[0x22];
  if (lVar6 == 0) {
    (**(code **)(*plVar2 + 1000))(plVar2);
    lVar6 = plVar2[0x22];
  }
  if ((*(byte *)(lVar6 + 0xe0) & 4) != 0) {
    plVar2 = (longlong *)FUN_14032f648();
    lVar6 = plVar2[0x22];
    if (lVar6 == 0) {
      (**(code **)(*plVar2 + 1000))(plVar2);
      lVar6 = plVar2[0x22];
    }
    if ((longlong)*(int *)(lVar6 + 0x50) != 0) {
      lVar5 = *(longlong *)(lVar6 + 0x48);
      plVar2 = (longlong *)(param_1 + 0x30);
      lVar6 = (longlong)*(int *)(lVar6 + 0x50) * 0x30;
      do {
        lVar3 = FUN_147f96c32(lVar5);
        if (lVar3 != 0) {
          if (*(char *)(lVar5 + 0x2c) == '\x01') {
            cVar1 = (**(code **)(*plVar2 + 200))(plVar2,lVar3);
            if (cVar1 == '\0') {
              local_31 = *(char *)(lVar5 + 0x2d) * '\x04' + '\x01';
              (**(code **)(*plVar2 + 0x98))(plVar2,lVar3,*(undefined4 *)(lVar5 + 0x28),&local_31);
            }
          }
          else if ((*(char *)(lVar5 + 0x2d) == '\x01') &&
                  (plVar4 = (longlong *)(**(code **)(*plVar2 + 0x18))(plVar2),
                  plVar4 != (longlong *)0x0)) {
            (**(code **)(*plVar4 + 0x328))(plVar4,lVar3);
          }
        }
        lVar5 = lVar5 + 0x30;
        lVar6 = lVar6 + -0x30;
      } while (lVar6 != 0);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147f96a5a FUN_147f96a5a body=221 status=ok
// SIG undefined FUN_147f96a5a(void)

void FUN_147f96a5a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  lVar4 = DAT_14c98e618;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c98e618 != 0) {
    local_28 = *(undefined8 *)(param_1 + 0x188);
    local_20 = *(longlong *)(param_1 + 400);
    if (local_20 != 0) {
      LOCK();
      *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
      UNLOCK();
    }
    FUN_145a3846a(lVar4,&local_28);
  }
  *(undefined8 *)(param_1 + 0x188) = 0;
  plVar3 = *(longlong **)(param_1 + 400);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 400) = 0;
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
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  if (*(int *)(param_1 + 0x1a4) != 0) {
    FUN_147f9cf38(param_1 + 0x198);
  }
  *(undefined8 *)(param_1 + 0x180) = 0;
  FUN_147f96b38(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f96b38 FUN_147f96b38 body=239 status=ok
// SIG undefined FUN_147f96b38(void)

void FUN_147f96b38(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [47];
  char local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)FUN_14032f648();
  lVar4 = plVar1[0x22];
  if (lVar4 == 0) {
    (**(code **)(*plVar1 + 1000))(plVar1);
    lVar4 = plVar1[0x22];
  }
  if ((*(byte *)(lVar4 + 0xe0) & 4) != 0) {
    plVar1 = (longlong *)FUN_14032f648();
    lVar4 = plVar1[0x22];
    if (lVar4 == 0) {
      (**(code **)(*plVar1 + 1000))(plVar1);
      lVar4 = plVar1[0x22];
    }
    if ((longlong)*(int *)(lVar4 + 0x50) != 0) {
      lVar3 = *(longlong *)(lVar4 + 0x48);
      lVar4 = (longlong)*(int *)(lVar4 + 0x50) * 0x30;
      do {
        lVar2 = FUN_147f96c32(lVar3);
        if (lVar2 != 0) {
          local_29 = *(char *)(lVar3 + 0x2d) * '\x04' + '\x01';
          (**(code **)(*(longlong *)(param_1 + 0x30) + 0xa0))
                    ((longlong *)(param_1 + 0x30),lVar2,&local_29);
        }
        lVar3 = lVar3 + 0x30;
        lVar4 = lVar4 + -0x30;
      } while (lVar4 != 0);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147f96c32 FUN_147f96c32 body=61 status=ok
// SIG undefined FUN_147f96c32(void)

longlong FUN_147f96c32(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_144a6654a();
  if (lVar1 != 0) {
    lVar2 = FUN_1409f0ed2();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 147f96c78 FUN_147f96c78 body=285 status=ok
// SIG undefined FUN_147f96c78(void)

void FUN_147f96c78(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [40];
  longlong local_50 [2];
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 != 0) {
    lVar1 = (**(code **)(*param_1 + 0x10))();
    if (lVar1 == 0) {
      *(undefined4 *)(param_2 + 0xd8) = 0x3f73f3f5;
      *(undefined4 *)(param_2 + 0xdc) = 0x3f1c9c9d;
      *(undefined4 *)(param_2 + 0xe0) = 0x3d909091;
      *(undefined4 *)(param_2 + 0xe4) = 0x3f800000;
      local_3c = 0;
      FUN_140056680(local_50,L"This player does not support Enhanced Input.");
      FUN_147d8f316(param_2 + 0xa8,local_50,&local_3c);
      if (local_50[0] != 0) {
        FUN_1400020a8();
      }
    }
    else {
      *(undefined4 *)(param_2 + 0xd8) = 0x3f800000;
      *(undefined4 *)(param_2 + 0xdc) = 0x3f800000;
      *(undefined4 *)(param_2 + 0xe0) = 0x3f800000;
      *(undefined4 *)(param_2 + 0xe4) = 0x3f800000;
      local_3c = 0;
      lVar2 = FUN_144a126be(param_1 + -6);
      uVar3 = FUN_1434df4ac(*(undefined1 *)(lVar2 + 0x152));
      FUN_140002266(local_50,L"World Subsystem from %s",uVar3);
      FUN_147d8f316(param_2 + 0xa8,local_50,&local_3c);
      if (local_50[0] != 0) {
        FUN_1400020a8();
      }
      FUN_147f93fe6(param_1,param_2,lVar1);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f96d96 FUN_147f96d96 body=45 status=ok
// SIG undefined FUN_147f96d96(void)

longlong FUN_147f96d96(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_140ffbf72(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f96dc4 FUN_147f96dc4 body=29 status=ok
// SIG undefined FUN_147f96dc4(void)

undefined8 FUN_147f96dc4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f96de2 FUN_147f96de2 body=45 status=ok
// SIG undefined FUN_147f96de2(void)

longlong FUN_147f96de2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_1457c65b0(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f96e10 FUN_147f96e10 body=45 status=ok
// SIG undefined FUN_147f96e10(void)

longlong FUN_147f96e10(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_145ec7794(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f96e5e FUN_147f96e5e body=56 status=ok
// SIG undefined FUN_147f96e5e(void)

void FUN_147f96e5e(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_2 + 0x20);
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
                    /* WARNING: Could not recover jumptable at 0x000147f96e8b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147f96eac FUN_147f96eac body=112 status=ok
// SIG undefined FUN_147f96eac(void)

undefined8 FUN_147f96eac(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    do {
      puVar1 = (undefined8 *)(param_3 + lVar6);
      lVar2 = param_2 + 0x10 + lVar6;
      *(undefined1 *)(lVar2 + -8) = *(undefined1 *)(puVar1 + 1);
      *(undefined8 *)(lVar2 + -0x10) = *puVar1;
      FUN_1413a517a(lVar2,puVar1 + 2);
      uVar3 = *(undefined4 *)((longlong)puVar1 + 0x2c);
      uVar4 = *(undefined4 *)(puVar1 + 6);
      uVar5 = *(undefined4 *)((longlong)puVar1 + 0x34);
      *(undefined4 *)(lVar2 + 0x18) = *(undefined4 *)(puVar1 + 5);
      *(undefined4 *)(lVar2 + 0x1c) = uVar3;
      *(undefined4 *)(lVar2 + 0x20) = uVar4;
      *(undefined4 *)(lVar2 + 0x24) = uVar5;
      *(undefined1 *)(lVar2 + 0x28) = *(undefined1 *)(puVar1 + 7);
      lVar6 = lVar6 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147f96f44 FUN_147f96f44 body=59 status=ok
// SIG undefined FUN_147f96f44(void)

undefined8 FUN_147f96f44(longlong *param_1)

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



// FUNCTION 147f96f8a FUN_147f96f8a body=64 status=ok
// SIG undefined FUN_147f96f8a(void)

void FUN_147f96f8a(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_2 + 0x40) == '\x01') {
    plVar3 = *(longlong **)(param_2 + 0x20);
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
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 147f97048 FUN_147f97048 body=63 status=ok
// SIG undefined FUN_147f97048(void)

undefined1 FUN_147f97048(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f9717c(param_2,param_3);
    param_3 = param_3 + 0x88;
    param_2 = param_2 + 0x88;
  }
  return 1;
}



// FUNCTION 147f970b0 FUN_147f970b0 body=70 status=ok
// SIG undefined FUN_147f970b0(void)

void FUN_147f970b0(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  FUN_140e95df5(param_2);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f97108 FUN_147f97108 body=38 status=ok
// SIG undefined FUN_147f97108(void)

void FUN_147f97108(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x88) == '\x01') {
    FUN_1438b5fe0(param_2);
    *(undefined1 *)(param_2 + 0x88) = 0;
  }
  return;
}



// FUNCTION 147f9717c FUN_147f9717c body=257 status=ok
// SIG undefined FUN_147f9717c(void)

undefined8 * FUN_147f9717c(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  longlong lVar7;
  
  *param_1 = *param_2;
  plVar1 = (longlong *)param_2[1];
  plVar2 = (longlong *)param_1[1];
  if (plVar2 != plVar1) {
    param_1[1] = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  plVar1 = (longlong *)param_2[3];
  plVar2 = (longlong *)param_1[3];
  if (plVar2 != plVar1) {
    param_1[3] = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined2 *)(param_1 + 5) = *(undefined2 *)(param_2 + 5);
  FUN_1413a517a(param_1 + 6,param_2 + 6);
  FUN_1413a517a(param_1 + 9,param_2 + 9);
  param_1[0xe] = param_2[0xe];
  uVar3 = *(undefined4 *)((longlong)param_2 + 100);
  uVar4 = *(undefined4 *)(param_2 + 0xd);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x6c);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)((longlong)param_1 + 100) = uVar3;
  *(undefined4 *)(param_1 + 0xd) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x6c) = uVar5;
  lVar7 = param_2[0xf];
  if (DAT_14c950c29 == 1) {
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar7 = param_2[0xf];
    }
  }
  bVar6 = DAT_14c950c29;
  param_1[0xf] = lVar7;
  lVar7 = param_2[0x10];
  if ((bVar6 & 1) != 0) {
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar7 = param_2[0x10];
    }
  }
  param_1[0x10] = lVar7;
  return param_1;
}



// FUNCTION 147f972cc FUN_147f972cc body=42 status=ok
// SIG undefined FUN_147f972cc(void)

void FUN_147f972cc(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x48) = 0;
  if (*(longlong *)(param_2 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_140d979a6(param_2);
  return;
}



// FUNCTION 147f9730c FUN_147f9730c body=54 status=ok
// SIG undefined FUN_147f9730c(void)

undefined1 FUN_147f9730c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f8d622(param_2,param_3);
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return 1;
}



// FUNCTION 147f9736a FUN_147f9736a body=59 status=ok
// SIG undefined FUN_147f9736a(void)

undefined8 FUN_147f9736a(longlong *param_1)

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



// FUNCTION 147f973b0 FUN_147f973b0 body=53 status=ok
// SIG undefined FUN_147f973b0(void)

void FUN_147f973b0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    *(undefined4 *)(param_2 + 0x48) = 0;
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_140d979a6(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 147f97446 FUN_147f97446 body=56 status=ok
// SIG undefined FUN_147f97446(void)

void FUN_147f97446(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_2 + 0x18);
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
                    /* WARNING: Could not recover jumptable at 0x000147f97473. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147f97494 FUN_147f97494 body=94 status=ok
// SIG undefined FUN_147f97494(void)

undefined8 FUN_147f97494(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    do {
      puVar1 = (undefined8 *)(param_3 + lVar3);
      lVar2 = param_2 + 8 + lVar3;
      *(undefined8 *)(lVar2 + -8) = *puVar1;
      FUN_1413a517a(lVar2,puVar1 + 1);
      *(undefined8 *)(lVar2 + 0x18) = puVar1[4];
      lVar3 = lVar3 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147f9751a FUN_147f9751a body=59 status=ok
// SIG undefined FUN_147f9751a(void)

undefined8 FUN_147f9751a(longlong *param_1)

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



// FUNCTION 147f97560 FUN_147f97560 body=64 status=ok
// SIG undefined FUN_147f97560(void)

void FUN_147f97560(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_2 + 0x28) == '\x01') {
    plVar3 = *(longlong **)(param_2 + 0x18);
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
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 147f975f0 FUN_147f975f0 body=122 status=ok
// SIG undefined FUN_147f975f0(void)

longlong FUN_147f975f0(longlong param_1,longlong param_2)

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
    FUN_147f9766a(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 147f9766a FUN_147f9766a body=325 status=ok
// SIG undefined FUN_147f9766a(void)

longlong * FUN_147f9766a(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  if (param_1 != param_2) {
    uVar2 = *(uint *)(param_2 + 1);
    FUN_140d9778c(param_1,(ulonglong)uVar2);
    lVar4 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar4 + uVar2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar4) < uVar2) {
      FUN_14488f93c(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar2) {
      lVar4 = *param_1;
      lVar3 = *param_2;
      lVar6 = 0;
      uVar7 = 0;
      do {
        plVar5 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar5 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar5 + (uVar7 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar7 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)(lVar4 + lVar6) = *(undefined4 *)(lVar3 + lVar6);
          *(undefined4 *)(lVar4 + 4 + lVar6) = *(undefined4 *)(lVar3 + 4 + lVar6);
        }
        else {
          *(undefined8 *)(lVar4 + lVar6) = *(undefined8 *)(lVar3 + lVar6);
          *(undefined8 *)(lVar4 + 0x28 + lVar6) = 0;
          *(undefined4 *)(lVar4 + 0x30 + lVar6) = 0;
          puVar1 = (undefined8 *)(lVar4 + 8 + lVar6);
          *puVar1 = 0;
          puVar1[1] = 0;
          *(undefined8 *)(lVar4 + 0x34 + lVar6) = 0xffffffff00000080;
          *(undefined4 *)(lVar4 + 0x3c + lVar6) = 0;
          *(undefined8 *)(lVar4 + 0x48 + lVar6) = 0;
          *(undefined4 *)(lVar4 + 0x50 + lVar6) = 0;
          FUN_147f8d622(lVar4 + 8 + lVar6,lVar3 + 8 + lVar6);
          *(undefined8 *)(lVar4 + 0x58 + lVar6) = *(undefined8 *)(lVar3 + 0x58 + lVar6);
        }
        uVar7 = uVar7 + 1;
        lVar6 = lVar6 + 0x60;
      } while (uVar2 != uVar7);
    }
  }
  return param_1;
}



// FUNCTION 147f977e8 FUN_147f977e8 body=54 status=ok
// SIG undefined FUN_147f977e8(void)

undefined1 FUN_147f977e8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f97902(param_2,param_3);
    param_3 = param_3 + 0x30;
    param_2 = param_2 + 0x30;
  }
  return 1;
}



// FUNCTION 147f97846 FUN_147f97846 body=59 status=ok
// SIG undefined FUN_147f97846(void)

undefined8 FUN_147f97846(longlong *param_1)

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



// FUNCTION 147f9788c FUN_147f9788c body=39 status=ok
// SIG undefined FUN_147f9788c(void)

void FUN_147f9788c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    if (*(longlong **)(param_2 + 0x18) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_2 + 0x18) + 0x10))();
    }
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 147f97902 FUN_147f97902 body=134 status=ok
// SIG undefined FUN_147f97902(void)

longlong * FUN_147f97902(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  lVar3 = *param_2;
  if (DAT_14c950c29 == '\x01') {
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar3 = *param_2;
    }
  }
  *param_1 = lVar3;
  *(int *)(param_1 + 2) = (int)param_2[2];
  param_1[1] = param_2[1];
  plVar1 = (longlong *)param_2[3];
  plVar2 = (longlong *)param_1[3];
  if (plVar2 != plVar1) {
    param_1[3] = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 4) = (int)param_2[4];
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0xfe | *(byte *)(param_2 + 5) & 1;
  return param_1;
}



// FUNCTION 147f979e4 FUN_147f979e4 body=59 status=ok
// SIG undefined FUN_147f979e4(void)

undefined8 FUN_147f979e4(longlong *param_1)

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



// FUNCTION 147f97aba FUN_147f97aba body=54 status=ok
// SIG undefined FUN_147f97aba(void)

undefined1 FUN_147f97aba(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f97bb8(param_2,param_3);
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return 1;
}



// FUNCTION 147f97b18 FUN_147f97b18 body=59 status=ok
// SIG undefined FUN_147f97b18(void)

undefined8 FUN_147f97b18(longlong *param_1)

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



// FUNCTION 147f97bb8 FUN_147f97bb8 body=98 status=ok
// SIG undefined FUN_147f97bb8(void)

undefined1 * FUN_147f97bb8(undefined1 *param_1,undefined1 *param_2)

{
  byte bVar1;
  longlong lVar2;
  
  *param_1 = *param_2;
  lVar2 = *(longlong *)(param_2 + 8);
  if (DAT_14c950c29 == 1) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *(longlong *)(param_2 + 8);
    }
  }
  bVar1 = DAT_14c950c29;
  *(longlong *)(param_1 + 8) = lVar2;
  lVar2 = *(longlong *)(param_2 + 0x10);
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *(longlong *)(param_2 + 0x10);
    }
  }
  *(longlong *)(param_1 + 0x10) = lVar2;
  return param_1;
}



// FUNCTION 147f97c88 FUN_147f97c88 body=70 status=ok
// SIG undefined FUN_147f97c88(void)

void FUN_147f97c88(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  FUN_147fa032c(param_2);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f97d46 FUN_147f97d46 body=51 status=ok
// SIG undefined FUN_147f97d46(void)

void FUN_147f97d46(undefined8 param_1,longlong param_2)

{
  if (*(longlong **)(param_2 + 0x20) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_2 + 0x20) + 0x10))();
  }
  if (*(longlong **)(param_2 + 0x10) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147f97d6e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_2 + 0x10) + 0x10))();
    return;
  }
  return;
}



// FUNCTION 147f97d90 FUN_147f97d90 body=54 status=ok
// SIG undefined FUN_147f97d90(void)

undefined1 FUN_147f97d90(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f97f42(param_2,param_3);
    param_3 = param_3 + 0x30;
    param_2 = param_2 + 0x30;
  }
  return 1;
}



// FUNCTION 147f97dee FUN_147f97dee body=59 status=ok
// SIG undefined FUN_147f97dee(void)

undefined8 FUN_147f97dee(longlong *param_1)

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



// FUNCTION 147f97e34 FUN_147f97e34 body=54 status=ok
// SIG undefined FUN_147f97e34(void)

void FUN_147f97e34(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    if (*(longlong **)(param_2 + 0x20) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_2 + 0x20) + 0x10))();
    }
    if (*(longlong **)(param_2 + 0x10) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_2 + 0x10) + 0x10))();
    }
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 147f97eb8 FUN_147f97eb8 body=137 status=ok
// SIG undefined FUN_147f97eb8(void)

undefined8 * FUN_147f97eb8(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  FUN_144a5dc74(param_1 + 2);
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  param_1[4] = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 5) = (int)plVar2[1];
  param_1[1] = 0;
  plVar3 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar3;
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != plVar1) {
    param_1[2] = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 3) = (int)plVar3[1];
  return param_1;
}



// FUNCTION 147f97f42 FUN_147f97f42 body=160 status=ok
// SIG undefined FUN_147f97f42(void)

longlong * FUN_147f97f42(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  lVar3 = *param_2;
  if (DAT_14c950c29 == '\x01') {
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar3 = *param_2;
    }
  }
  *param_1 = lVar3;
  param_1[1] = param_2[1];
  plVar1 = (longlong *)param_2[2];
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != plVar1) {
    param_1[2] = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 3) = (int)param_2[3];
  plVar1 = (longlong *)param_2[4];
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != plVar1) {
    param_1[4] = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 5) = (int)param_2[5];
  return param_1;
}



// FUNCTION 147f97fe4 FUN_147f97fe4 body=94 status=ok
// SIG undefined FUN_147f97fe4(void)

void FUN_147f97fe4(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = (undefined4)DAT_14c966e80;
  uStack_1c = DAT_14c966e80._4_4_;
  uStack_18 = (undefined4)DAT_14c966e88;
  uStack_14 = DAT_14c966e88._4_4_;
  local_10 = DAT_14c966e90;
  if (DAT_14c966e90 != 0) {
    LOCK();
    *(int *)(DAT_14c966e90 + 8) = *(int *)(DAT_14c966e90 + 8) + 1;
    UNLOCK();
  }
  FUN_1409f7bea(param_2,0,&local_20);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f98062 FUN_147f98062 body=54 status=ok
// SIG undefined FUN_147f98062(void)

undefined1 FUN_147f98062(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f98174(param_2,param_3);
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return 1;
}



// FUNCTION 147f980c0 FUN_147f980c0 body=59 status=ok
// SIG undefined FUN_147f980c0(void)

undefined8 FUN_147f980c0(longlong *param_1)

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



// FUNCTION 147f98106 FUN_147f98106 body=32 status=ok
// SIG undefined FUN_147f98106(void)

void FUN_147f98106(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    FUN_14181bc4c(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 147f98174 FUN_147f98174 body=131 status=ok
// SIG undefined FUN_147f98174(void)

longlong FUN_147f98174(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_147f981f8();
  FUN_147f98248(param_1 + 0x10,param_2 + 0x10);
  lVar1 = *(longlong *)(param_2 + 0x20);
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *(longlong *)(param_2 + 0x20);
    }
  }
  *(longlong *)(param_1 + 0x20) = lVar1;
  FUN_1413a517a(param_1 + 0x28,param_2 + 0x28);
  *(undefined2 *)(param_1 + 0x40) = *(undefined2 *)(param_2 + 0x40);
  lVar1 = *(longlong *)(param_2 + 0x48);
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *(longlong *)(param_2 + 0x48);
    }
  }
  *(longlong *)(param_1 + 0x48) = lVar1;
  return param_1;
}



// FUNCTION 147f981f8 FUN_147f981f8 body=79 status=ok
// SIG undefined FUN_147f981f8(void)

undefined8 * FUN_147f981f8(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1405b83fc(param_1,iVar1);
      FUN_1405b835c(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147f98248 FUN_147f98248 body=79 status=ok
// SIG undefined FUN_147f98248(void)

undefined8 * FUN_147f98248(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1405b853a(param_1,iVar1);
      FUN_1405b83ac(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147f982be FUN_147f982be body=110 status=ok
// SIG undefined FUN_147f982be(void)

undefined1 FUN_147f982be(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_4 != 0) {
    lVar4 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar3 = *(longlong *)(param_3 + lVar4);
      if ((bVar2 & 1) != 0) {
        if (lVar3 == 0) {
          lVar3 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar3 = *(longlong *)(param_3 + lVar4);
          bVar2 = DAT_14c950c29;
        }
      }
      plVar1 = (longlong *)(param_2 + lVar4);
      *plVar1 = lVar3;
      plVar1[1] = *(longlong *)(param_3 + 8 + lVar4);
      *(undefined4 *)(plVar1 + 2) = *(undefined4 *)(param_3 + 0x10 + lVar4);
      lVar4 = lVar4 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147f98354 FUN_147f98354 body=59 status=ok
// SIG undefined FUN_147f98354(void)

undefined8 FUN_147f98354(longlong *param_1)

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



// FUNCTION 147f983f6 FUN_147f983f6 body=275 status=ok
// SIG undefined FUN_147f983f6(void)

void FUN_147f983f6(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  puVar3 = (undefined8 *)*param_1;
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = 0;
    puVar3[1] = 0;
  }
  plVar5 = (longlong *)FUN_14001cc68(0x20,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14accfe10;
  plVar5[2] = 0;
  plVar5[3] = 0;
  if (plVar5 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar6 = (longlong *)param_1[1];
    if (plVar6 == (longlong *)0x0) goto LAB_147f984b4;
    param_1[1] = 0;
LAB_147f98471:
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
    if (plVar5 == (longlong *)0x0) goto LAB_147f984b4;
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    *param_1 = (longlong)(plVar5 + 2);
    plVar6 = (longlong *)param_1[1];
    if (plVar5 == plVar6) {
      LOCK();
      plVar6 = plVar5 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
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
    else {
      param_1[1] = (longlong)plVar5;
      if (plVar6 != (longlong *)0x0) goto LAB_147f98471;
    }
  }
  LOCK();
  plVar6 = plVar5 + 1;
  *(int *)plVar6 = (int)*plVar6 + -1;
  UNLOCK();
  if ((int)*plVar6 == 0) {
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
LAB_147f984b4:
  lVar4 = *param_1;
  FUN_14485c47a(lVar4,param_2);
  *(undefined8 *)(lVar4 + 8) = param_3;
  return;
}



// FUNCTION 147f9850a FUN_147f9850a body=83 status=ok
// SIG undefined FUN_147f9850a(void)

undefined8 * FUN_147f9850a(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14accfde0;
  plVar3 = (longlong *)param_1[5];
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



// FUNCTION 147f9855e FUN_147f9855e body=163 status=ok
// SIG undefined FUN_147f9855e(void)

void FUN_147f9855e(longlong param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_2;
  if (*(char *)((longlong)param_2 + 0x13) == '\x01') {
    local_28 = *(undefined4 *)(param_2 + 7);
    uStack_24 = *(undefined4 *)((longlong)param_2 + 0x3c);
    uStack_20 = param_2[8];
    local_18 = param_2[9];
    uStack_10 = *(undefined4 *)(param_2 + 10);
    uStack_c = *(undefined4 *)((longlong)param_2 + 0x54);
  }
  else {
    local_18 = DAT_14c8464f0;
    local_28 = (undefined4)DAT_14c8464e0;
    uStack_24 = DAT_14c8464e0._4_4_;
    uStack_20 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    bVar1 = *(byte *)(param_2 + 10);
    uStack_10 = CONCAT31(uStack_10._1_3_,bVar1);
    if (bVar1 < 2) {
      uStack_20 = 0;
    }
    else if (bVar1 != 2) goto LAB_147f98596;
    local_18 = 0;
  }
LAB_147f98596:
  FUN_147f986ae(param_1 + 0x20,&local_28,*(undefined4 *)(param_2 + 0xb),
                *(undefined4 *)((longlong)param_2 + 0x5c));
  if ((local_8 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147f98602 FUN_147f98602 body=101 status=ok
// SIG undefined FUN_147f98602(void)

undefined8 * FUN_147f98602(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *(undefined1 *)(puVar2 + 3) = *(undefined1 *)(param_1 + 0x18);
  *puVar2 = &PTR_FUN_14accfde0;
  puVar2[4] = *(undefined8 *)(param_1 + 0x20);
  lVar1 = *(longlong *)(param_1 + 0x28);
  puVar2[5] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined1 *)(puVar2 + 6) = *(undefined1 *)(param_1 + 0x30);
  *param_2 = puVar2;
  return param_2;
}



// FUNCTION 147f9866c FUN_147f9866c body=64 status=ok
// SIG undefined FUN_147f9866c(void)

bool FUN_147f9866c(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  
  if ((*(longlong *)(param_1 + 0x20) != 0) &&
     (cVar1 = FUN_14113f0c0(), param_2 != 0 && cVar1 == '\x01')) {
    lVar2 = FUN_14479d2ce(*(undefined8 *)(param_1 + 0x20));
    return lVar2 == param_2;
  }
  return false;
}



// FUNCTION 147f986ae FUN_147f986ae body=193 status=ok
// SIG undefined FUN_147f986ae(void)

void FUN_147f986ae(longlong *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*param_1 != 0) {
    cVar2 = FUN_14113f0c0();
    if (cVar2 != '\0') {
      lVar1 = *param_1;
      local_78 = *param_2;
      uStack_74 = param_2[1];
      uStack_70 = param_2[2];
      uStack_6c = param_2[3];
      local_68 = param_2[4];
      uStack_64 = param_2[5];
      uStack_60 = param_2[6];
      uStack_5c = param_2[7];
      local_50 = param_5;
      local_58 = param_3;
      local_54 = param_4;
      plVar3 = (longlong *)FUN_14479d2ce(lVar1);
      uVar4 = FUN_14477b072(plVar3,*(undefined8 *)(lVar1 + 8));
      (**(code **)(*plVar3 + 0x248))(plVar3,uVar4,&local_78);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f98770 FUN_147f98770 body=1 status=ok
// SIG undefined FUN_147f98770(void)

void FUN_147f98770(void)

{
  return;
}



// FUNCTION 147f98772 FUN_147f98772 body=29 status=ok
// SIG undefined FUN_147f98772(void)

undefined8 FUN_147f98772(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f98790 FUN_147f98790 body=143 status=ok
// SIG undefined FUN_147f98790(void)

void FUN_147f98790(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = uVar1;
      }
      lVar4 = (longlong)(int)uVar3;
    }
    else {
      lVar4 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar5 = FUN_144a3809e(lVar4 * 0x38,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 3;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0x38,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147f98820 FUN_147f98820 body=29 status=ok
// SIG undefined FUN_147f98820(void)

undefined8 FUN_147f98820(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f9883e FUN_147f9883e body=96 status=ok
// SIG undefined FUN_147f9883e(void)

void FUN_147f9883e(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 147f988ec FUN_147f988ec body=114 status=ok
// SIG undefined FUN_147f988ec(void)

undefined8 FUN_147f988ec(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    do {
      puVar1 = (undefined8 *)(param_3 + lVar6);
      lVar2 = param_2 + 0x18 + lVar6;
      *(undefined8 *)(lVar2 + -0x18) = *puVar1;
      uVar3 = *(undefined4 *)((longlong)puVar1 + 0xc);
      uVar4 = *(undefined4 *)(puVar1 + 2);
      uVar5 = *(undefined4 *)((longlong)puVar1 + 0x14);
      *(undefined4 *)(lVar2 + -0x10) = *(undefined4 *)(puVar1 + 1);
      *(undefined4 *)(lVar2 + -0xc) = uVar3;
      *(undefined4 *)(lVar2 + -8) = uVar4;
      *(undefined4 *)(lVar2 + -4) = uVar5;
      FUN_144a787a6(lVar2,puVar1 + 3);
      *(undefined4 *)(lVar2 + 0x10) = *(undefined4 *)(puVar1 + 5);
      *(undefined2 *)(lVar2 + 0x14) = *(undefined2 *)((longlong)puVar1 + 0x2c);
      lVar6 = lVar6 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147f98986 FUN_147f98986 body=59 status=ok
// SIG undefined FUN_147f98986(void)

undefined8 FUN_147f98986(longlong *param_1)

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



// FUNCTION 147f989cc FUN_147f989cc body=38 status=ok
// SIG undefined FUN_147f989cc(void)

void FUN_147f989cc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    if (*(longlong *)(param_2 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 147f98a42 FUN_147f98a42 body=408 status=ok
// SIG undefined FUN_147f98a42(void)

double * FUN_147f98a42(double *param_1,longlong *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  byte bVar7;
  int iVar8;
  wchar_t *_Str;
  longlong lVar9;
  longlong lVar10;
  double dVar11;
  undefined1 auStack_a8 [40];
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  double local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  wchar_t *local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar2 = *param_3;
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  dVar11 = *(double *)(param_3 + 6);
  param_1[2] = *(double *)(param_3 + 4);
  param_1[3] = dVar11;
  *(undefined4 *)param_1 = uVar2;
  *(undefined4 *)((longlong)param_1 + 4) = uVar3;
  *(undefined4 *)(param_1 + 1) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar5;
  if (1 < (int)param_2[1]) {
    local_58 = (wchar_t *)0x0;
    uStack_50 = 0;
    lVar10 = 1;
    lVar9 = 0x18;
    do {
      iVar8 = *(int *)(*param_2 + lVar9);
      iVar1 = iVar8 + -1;
      if (iVar8 == 0) {
        iVar1 = 0;
      }
      FUN_1400020e8(&local_58,*(undefined8 *)(*param_2 + -8 + lVar9),iVar1);
      iVar8 = (int)param_2[1];
      if (lVar10 < (longlong)iVar8 + -1) {
        thunk_FUN_14047a987(&local_58,&DAT_149dfc0cb,1);
        iVar8 = (int)param_2[1];
      }
      lVar10 = lVar10 + 1;
      lVar9 = lVar9 + 0x10;
    } while (lVar10 < iVar8);
    cVar6 = FUN_1467fc5ae(&local_80,&local_58);
    if (cVar6 == '\0') {
      cVar6 = FUN_146805230(&local_68,&local_58);
      if (cVar6 == '\0') {
        cVar6 = FUN_1405b43cc(&local_58);
        if (cVar6 == '\0') {
          bVar7 = FUN_1456afa18(&local_58);
          dVar11 = (double)bVar7;
        }
        else {
          _Str = local_58;
          if ((int)uStack_50 == 0) {
            _Str = L"";
          }
          dVar11 = _wtof(_Str);
          dVar11 = (double)(float)dVar11;
        }
        *param_1 = dVar11;
        param_1[1] = 0.0;
        param_1[2] = 0.0;
        *(undefined1 *)(param_1 + 3) = 1;
      }
      else {
        *(undefined4 *)param_1 = local_68;
        *(undefined4 *)((longlong)param_1 + 4) = uStack_64;
        *(undefined4 *)(param_1 + 1) = uStack_60;
        *(undefined4 *)((longlong)param_1 + 0xc) = uStack_5c;
        param_1[2] = 0.0;
        *(undefined1 *)(param_1 + 3) = 2;
      }
    }
    else {
      param_1[2] = local_70;
      *(undefined4 *)param_1 = local_80;
      *(undefined4 *)((longlong)param_1 + 4) = uStack_7c;
      *(undefined4 *)(param_1 + 1) = uStack_78;
      *(undefined4 *)((longlong)param_1 + 0xc) = uStack_74;
      *(undefined1 *)(param_1 + 3) = 3;
    }
    if (local_58 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147f98c4c FUN_147f98c4c body=59 status=ok
// SIG undefined FUN_147f98c4c(void)

undefined8 FUN_147f98c4c(longlong *param_1)

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



// FUNCTION 147f98cee FUN_147f98cee body=52 status=ok
// SIG undefined FUN_147f98cee(void)

void FUN_147f98cee(longlong *param_1)

{
  FUN_147f98d22();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147f98d22 FUN_147f98d22 body=337 status=ok
// SIG undefined FUN_147f98d22(void)

void FUN_147f98d22(longlong *param_1)

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
      lVar3 = (longlong)iStack_5c * 0x20;
      FUN_140dde623(*(undefined8 *)(lVar2 + 8 + lVar3),*(undefined4 *)(lVar2 + 0x10 + lVar3));
      if (*(longlong *)(lVar2 + 8 + lVar3) != 0) {
        FUN_1400020a8();
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
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
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f98e7a FUN_147f98e7a body=222 status=ok
// SIG undefined FUN_147f98e7a(void)

undefined8 * FUN_147f98e7a(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_140d979de(param_1,(ulonglong)uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_140f20a84(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      puVar6 = (undefined4 *)*param_1;
      puVar4 = (undefined4 *)*param_2;
      uVar5 = 0;
      do {
        puVar3 = (undefined8 *)param_2[4];
        if ((undefined8 *)param_2[4] == (undefined8 *)0x0) {
          puVar3 = param_2 + 2;
        }
        if ((*(uint *)((longlong)puVar3 + (uVar5 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar5 & 0x1f) & 1)
            == 0) {
          *puVar6 = *puVar4;
          puVar6[1] = puVar4[1];
        }
        else {
          FUN_147f98f58(puVar6,puVar4);
          *(undefined8 *)(puVar6 + 0x22) = *(undefined8 *)(puVar4 + 0x22);
        }
        uVar5 = uVar5 + 1;
        puVar4 = puVar4 + 0x24;
        puVar6 = puVar6 + 0x24;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 147f98f58 FUN_147f98f58 body=242 status=ok
// SIG undefined FUN_147f98f58(void)

undefined8 * FUN_147f98f58(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  
  *param_1 = *param_2;
  plVar1 = (longlong *)param_2[1];
  param_1[1] = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  plVar1 = (longlong *)param_2[3];
  param_1[3] = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined2 *)(param_1 + 5) = *(undefined2 *)(param_2 + 5);
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  lVar2 = param_2[8];
  param_1[8] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  lVar2 = param_2[0xb];
  param_1[0xb] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  param_1[0xe] = param_2[0xe];
  uVar3 = *(undefined4 *)((longlong)param_2 + 100);
  uVar4 = *(undefined4 *)(param_2 + 0xd);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x6c);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)((longlong)param_1 + 100) = uVar3;
  *(undefined4 *)(param_1 + 0xd) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x6c) = uVar5;
  lVar2 = param_2[0xf];
  param_1[0xf] = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar6 = DAT_14c950c29;
  lVar2 = param_2[0x10];
  param_1[0x10] = lVar2;
  if ((lVar2 != 0 & bVar6) == 1) {
    FUN_1456cec3c();
  }
  return param_1;
}



// FUNCTION 147f9904a FUN_147f9904a body=52 status=ok
// SIG undefined FUN_147f9904a(void)

void FUN_147f9904a(longlong *param_1)

{
  FUN_147f9907e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147f9907e FUN_147f9907e body=89 status=ok
// SIG undefined FUN_147f9907e(void)

void FUN_147f9907e(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14474875a(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 147f990d7 FUN_147f990d7 body=103 status=ok
// SIG undefined FUN_147f990d7(void)

bool FUN_147f990d7(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  
  if (param_3 == 0) {
    bVar5 = true;
  }
  else {
    lVar4 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar1 = *(longlong *)(param_2 + lVar4 * 8);
      if (((bVar2 & 1) != 0) && (lVar1 != 0)) {
        FUN_1456cec3c(lVar1);
        bVar2 = DAT_14c950c29;
      }
      bVar5 = *(longlong *)(param_1 + lVar4 * 8) == lVar1;
    } while ((bVar5) && (iVar3 = (int)lVar4, lVar4 = lVar4 + 1, param_3 + -1 != iVar3));
  }
  return bVar5;
}



// FUNCTION 147f9913e FUN_147f9913e body=103 status=ok
// SIG undefined FUN_147f9913e(void)

bool FUN_147f9913e(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  
  if (param_3 == 0) {
    bVar5 = true;
  }
  else {
    lVar4 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar1 = *(longlong *)(param_2 + lVar4 * 8);
      if (((bVar2 & 1) != 0) && (lVar1 != 0)) {
        FUN_1456cec3c(lVar1);
        bVar2 = DAT_14c950c29;
      }
      bVar5 = *(longlong *)(param_1 + lVar4 * 8) == lVar1;
    } while ((bVar5) && (iVar3 = (int)lVar4, lVar4 = lVar4 + 1, param_3 + -1 != iVar3));
  }
  return bVar5;
}



// FUNCTION 147f991a6 FUN_147f991a6 body=31 status=ok
// SIG undefined FUN_147f991a6(void)

undefined8 FUN_147f991a6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f991e2 FUN_147f991e2 body=93 status=ok
// SIG undefined FUN_147f991e2(void)

void FUN_147f991e2(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14acd0750;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147f99240 FUN_147f99240 body=123 status=ok
// SIG undefined FUN_147f99240(void)

void FUN_147f99240(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
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
  *(undefined ***)p_Var1 = &PTR_FUN_14acd0750;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147f992bc FUN_147f992bc body=21 status=ok
// SIG undefined FUN_147f992bc(void)

undefined8 FUN_147f992bc(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 147f992e6 FUN_147f992e6 body=31 status=ok
// SIG undefined FUN_147f992e6(void)

undefined8 FUN_147f992e6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f99322 FUN_147f99322 body=101 status=ok
// SIG undefined FUN_147f99322(void)

void FUN_147f99322(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a177500;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14acd08b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147f99388 FUN_147f99388 body=131 status=ok
// SIG undefined FUN_147f99388(void)

void FUN_147f99388(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a177500;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14acd08b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147f9941e FUN_147f9941e body=25 status=ok
// SIG undefined FUN_147f9941e(void)

undefined8 FUN_147f9941e(longlong param_1)

{
  (**(code **)(param_1 + 0x20))((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 147f99438 FUN_147f99438 body=48 status=ok
// SIG undefined FUN_147f99438(void)

void FUN_147f99438(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 147f99468 FUN_147f99468 body=382 status=ok
// SIG undefined FUN_147f99468(void)

void FUN_147f99468(longlong param_1,longlong *param_2)

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
    FUN_147f995e8(param_1,uVar4);
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
      FUN_147f99784(param_1);
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
      local_58 = *local_80 + (longlong)iStack_64 * 0x18;
      uStack_50 = (longlong *)(*local_80 + (longlong)iStack_64 * 0x18 + 8);
      FUN_147f99984(param_1,local_34);
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



// FUNCTION 147f995e8 FUN_147f995e8 body=411 status=ok
// SIG undefined FUN_147f995e8(void)

void FUN_147f995e8(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong *_Dst;
  undefined4 *puVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  iVar1 = (int)param_1[1];
  uVar7 = param_2 - iVar1;
  if (uVar7 != 0 && iVar1 <= (int)param_2) {
    iVar10 = *(int *)((longlong)param_1 + 0xc);
    iVar11 = iVar1;
    if (iVar10 < (int)param_2) {
      FUN_144727cd0(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar7;
    if ((uint)(iVar10 - iVar11) < uVar7) {
      FUN_14482b872(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      uVar9 = (ulonglong)param_2;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(lVar2 + uVar9 * 0x18 + -0x14);
      do {
        iVar8 = (int)uVar9;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x18) = iVar8 + -1;
        }
        puVar5[-1] = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (undefined4)param_1[6];
        }
        uVar9 = uVar9 - 1;
        *puVar5 = uVar3;
        *(int *)(param_1 + 6) = iVar8 + -1;
        iVar10 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar10;
        puVar5 = puVar5 + -6;
      } while ((longlong)iVar11 < (longlong)uVar9);
    }
    if (iVar1 == 0) {
      *(uint *)(param_1 + 5) = uVar7;
      if (param_2 != 0) {
        plVar6 = param_1 + 2;
        uVar12 = uVar7 + 0x1f >> 5;
        if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar12) {
          FUN_14499171c(plVar6,0,uVar12,4);
          *(uint *)((longlong)param_1 + 0x2c) = uVar7 + 0x1f & 0xffffffe0;
        }
        _Dst = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          _Dst = plVar6;
        }
        if (uVar7 < 0x101) {
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
            plVar6 = (longlong *)param_1[4];
          }
          bVar4 = -(char)(iVar1 % 0x20);
          *(uint *)((longlong)plVar6 + (longlong)(iVar10 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar6 + (longlong)(iVar10 >> 5) * 4) << (bVar4 & 0x1f)) >>
               (bVar4 & 0x1f);
        }
      }
    }
    else if (-1 < (int)uVar7) {
      uVar3 = FUN_144a54ea4(param_1 + 2,uVar7);
      FUN_1447c6044(param_1 + 2,uVar3,uVar7,0);
      return;
    }
  }
  return;
}



// FUNCTION 147f99784 FUN_147f99784 body=510 status=ok
// SIG undefined FUN_147f99784(void)

void FUN_147f99784(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
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
  uVar5 = *(uint *)(param_1 + 9);
  uVar3 = local_70;
  if (uVar5 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar5,4);
    if (0 < (int)uVar5) {
      do {
        plVar4 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar4 = plVar1;
        }
        *(undefined4 *)((longlong)plVar4 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar5 != uVar8);
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
    uVar3 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar9 = local_70._4_4_;
      local_70 = uVar3;
      do {
        lVar2 = *local_88;
        uVar7 = *(ulonglong *)(lVar2 + (longlong)iVar9 * 0x18);
        if ((DAT_14c950c29 == '\x01') && (uVar7 != 0)) {
          FUN_1456cec3c(uVar7);
        }
        lVar2 = lVar2 + (longlong)iVar9 * 0x18;
        uVar5 = ((uint)(uVar7 >> 0x14) & 0xffff ^ (uint)(uVar7 >> 4)) * -0x7a143595;
        uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
        uVar7 = (longlong)(int)(uVar5 >> 0x10 ^ uVar5) & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar2 + 0x14) = iVar6;
        plVar4 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar4 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x10) =
             *(undefined4 *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar4 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar4 = plVar1;
        }
        *(int *)((longlong)plVar4 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar9;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar9 = local_70._4_4_;
        uVar3 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar3;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147f99984 FUN_147f99984 body=351 status=ok
// SIG undefined FUN_147f99984(void)

undefined4 * FUN_147f99984(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147f99ae4(param_1,local_48);
  FUN_147f99c6e(local_40,*param_3,param_3[1]);
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar5 = *local_40;
  if ((uVar5 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(uVar5);
  }
  uVar3 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  cVar2 = FUN_147f99bca(param_1,uVar3,local_40,&local_4c);
  uVar1 = local_4c;
  if (cVar2 == '\0') {
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
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      *(uint *)((longlong)local_40 + 0x14) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_147f99784(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f99ae4 FUN_147f99ae4 body=230 status=ok
// SIG undefined FUN_147f99ae4(void)

int * FUN_147f99ae4(longlong *param_1,int *param_2)

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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x18) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 147f99bca FUN_147f99bca body=162 status=ok
// SIG undefined FUN_147f99bca(void)

undefined8 FUN_147f99bca(longlong *param_1,undefined4 param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_30 = *param_3;
    if ((local_30 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    iVar5 = FUN_147f99cc6(param_1,param_2,&local_30);
    if (iVar5 != -1) {
      uVar2 = *(undefined4 *)((longlong)param_3 + 4);
      lVar4 = param_3[1];
      uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
      puVar1 = (undefined4 *)(*param_1 + (longlong)iVar5 * 0x18);
      *puVar1 = (int)*param_3;
      puVar1[1] = uVar2;
      puVar1[2] = (int)lVar4;
      puVar1[3] = uVar3;
      FUN_147f99d96(param_1,*param_4);
      *param_4 = iVar5;
      uVar6 = 1;
      goto LAB_147f99bee;
    }
  }
  uVar6 = 0;
LAB_147f99bee:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f99c6e FUN_147f99c6e body=87 status=ok
// SIG undefined FUN_147f99c6e(void)

longlong * FUN_147f99c6e(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  byte bVar2;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar2 = DAT_14c950c29;
  lVar1 = *param_3;
  param_1[1] = lVar1;
  if ((lVar1 != 0 & bVar2) == 1) {
    FUN_1456cec3c();
  }
  return param_1;
}



// FUNCTION 147f99cc6 FUN_147f99cc6 body=207 status=ok
// SIG undefined FUN_147f99cc6(void)

int FUN_147f99cc6(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    bVar4 = DAT_14c950c29;
    for (iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
        iVar1 != -1; iVar1 = *(int *)(*param_1 + 0x10 + (longlong)iVar1 * 0x18)) {
      lVar2 = *param_3;
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      lVar3 = *(longlong *)(*param_1 + (longlong)iVar1 * 0x18);
      if (((bVar4 & 1) != 0) && (lVar3 != 0)) {
        FUN_1456cec3c(lVar3);
        bVar4 = DAT_14c950c29;
      }
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      if (lVar3 == lVar2) {
        return iVar1;
      }
    }
  }
  return -1;
}



// FUNCTION 147f99d96 FUN_147f99d96 body=114 status=ok
// SIG undefined FUN_147f99d96(void)

void FUN_147f99d96(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x18) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x18);
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



// FUNCTION 147f99e08 FUN_147f99e08 body=132 status=ok
// SIG undefined FUN_147f99e08(void)

void FUN_147f99e08(longlong param_1,int param_2)

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



// FUNCTION 147f99e8e FUN_147f99e8e body=141 status=ok
// SIG undefined FUN_147f99e8e(void)

longlong FUN_147f99e8e(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_147f99f1c();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1 * 0x50;
    if (lVar3 + lVar2 != 0) goto LAB_147f99ecb;
  }
  local_30 = param_3;
  FUN_147f99ff0(param_1,&local_24,param_2);
  lVar3 = *param_1;
  lVar2 = (longlong)local_24 * 0x50;
LAB_147f99ecb:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 + lVar3 + 8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f99f1c FUN_147f99f1c body=211 status=ok
// SIG undefined FUN_147f99f1c(void)

int FUN_147f99f1c(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    bVar4 = DAT_14c950c29;
    for (iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
        iVar1 != -1; iVar1 = *(int *)(*param_1 + 0x48 + (longlong)iVar1 * 0x50)) {
      lVar2 = *param_3;
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      lVar3 = *(longlong *)(*param_1 + (longlong)iVar1 * 0x50);
      if (((bVar4 & 1) != 0) && (lVar3 != 0)) {
        FUN_1456cec3c(lVar3);
        bVar4 = DAT_14c950c29;
      }
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      if (lVar3 == lVar2) {
        return iVar1;
      }
    }
  }
  return -1;
}



// FUNCTION 147f99ff0 FUN_147f99ff0 body=272 status=ok
// SIG undefined FUN_147f99ff0(void)

undefined4 * FUN_147f99ff0(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_147f9a102(param_1,local_48);
  FUN_147f9a2ca(param_4,local_40);
  *(undefined4 *)(local_40 + 0x48) = 0xffffffff;
  cVar1 = FUN_147f9a1f0(param_1,param_3,local_40,local_48);
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
      *(uint *)(local_40 + 0x4c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x48) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_147f9a3d8(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f9a102 FUN_147f9a102 body=238 status=ok
// SIG undefined FUN_147f9a102(void)

int * FUN_147f9a102(longlong *param_1,int *param_2)

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
      FUN_1406fba42(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x50);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x50) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x50 + *param_1;
  return param_2;
}



// FUNCTION 147f9a1f0 FUN_147f9a1f0 body=216 status=ok
// SIG undefined FUN_147f9a1f0(void)

undefined8 FUN_147f9a1f0(longlong *param_1,undefined4 param_2,longlong *param_3,int *param_4)

{
  void *_Dst;
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_38 = *param_3;
    if ((local_38 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    iVar1 = FUN_147f99f1c(param_1,param_2,&local_38);
    if (iVar1 != -1) {
      _Dst = (void *)(*param_1 + (longlong)iVar1 * 0x50);
      if (*(longlong *)(*param_1 + 0x38 + (longlong)iVar1 * 0x50) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)((longlong)_Dst + 0x28) != 0) {
        FUN_1400020a8();
      }
      memmove(_Dst,param_3,0x48);
      FUN_147f9a35e(param_1,*param_4);
      *param_4 = iVar1;
      uVar2 = 1;
      goto LAB_147f9a216;
    }
  }
  uVar2 = 0;
LAB_147f9a216:
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f9a2ca FUN_147f9a2ca body=147 status=ok
// SIG undefined FUN_147f9a2ca(void)

longlong * FUN_147f9a2ca(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = DAT_14c8464f0;
  local_28 = (undefined4)DAT_14c8464e0;
  uStack_24 = DAT_14c8464e0._4_4_;
  uStack_20 = (undefined4)DAT_14c8464e8;
  uStack_1c = DAT_14c8464e8._4_4_;
  lVar1 = *(longlong *)*param_1;
  *param_2 = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  param_2[3] = local_18;
  param_2[1] = CONCAT44(uStack_24,local_28);
  param_2[2] = CONCAT44(uStack_1c,uStack_20);
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f9a35e FUN_147f9a35e body=122 status=ok
// SIG undefined FUN_147f9a35e(void)

void FUN_147f9a35e(longlong *param_1,int param_2)

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



// FUNCTION 147f9a3d8 FUN_147f9a3d8 body=514 status=ok
// SIG undefined FUN_147f9a3d8(void)

void FUN_147f9a3d8(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
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
  uVar3 = *(uint *)(param_1 + 9);
  uVar2 = local_70;
  if (uVar3 != 0) {
    plVar1 = param_1 + 7;
    uVar7 = 0;
    FUN_144a1cbf0(plVar1,0,uVar3,4);
    if (0 < (int)uVar3) {
      do {
        plVar4 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar4 = plVar1;
        }
        *(undefined4 *)((longlong)plVar4 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
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
    uVar2 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar8 = local_70._4_4_;
      local_70 = uVar2;
      do {
        lVar9 = *local_88;
        uVar6 = *(ulonglong *)(lVar9 + (longlong)iVar8 * 0x50);
        if ((DAT_14c950c29 == '\x01') && (uVar6 != 0)) {
          FUN_1456cec3c(uVar6);
        }
        lVar9 = lVar9 + (longlong)iVar8 * 0x50;
        uVar3 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
        uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
        uVar6 = (longlong)(int)(uVar3 >> 0x10 ^ uVar3) & (longlong)(int)param_1[9] - 1U;
        iVar5 = (int)uVar6;
        *(int *)(lVar9 + 0x4c) = iVar5;
        plVar4 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar4 = plVar1;
        }
        *(undefined4 *)(lVar9 + 0x48) =
             *(undefined4 *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & uVar6) * 4);
        plVar4 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar4 = plVar1;
        }
        *(int *)((longlong)plVar4 + ((longlong)iVar5 & (longlong)(int)param_1[9] - 1U) * 4) = iVar8;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar8 = local_70._4_4_;
        uVar2 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar2;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147f9a5dc FUN_147f9a5dc body=95 status=ok
// SIG undefined FUN_147f9a5dc(void)

void FUN_147f9a5dc(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 147f9a63c FUN_147f9a63c body=315 status=ok
// SIG undefined FUN_147f9a63c(void)

void FUN_147f9a63c(longlong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  ulonglong *puVar8;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar6 = *param_2;
    if ((uVar6 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(uVar6);
    }
    uVar3 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    uVar6 = (longlong)(int)(uVar3 >> 0x10 ^ uVar3) & (longlong)(int)param_1[9] - 1U;
    iVar5 = *(int *)((longlong)plVar4 + uVar6 * 4);
    if (iVar5 != -1) {
      puVar8 = (ulonglong *)((longlong)plVar4 + uVar6 * 4);
      bVar2 = DAT_14c950c29;
      do {
        puVar7 = (ulonglong *)((longlong)iVar5 * 0x50 + *param_1);
        uVar6 = *param_2;
        if ((uVar6 != 0 & bVar2) == 1) {
          FUN_1456cec3c(uVar6);
          bVar2 = DAT_14c950c29;
        }
        uVar1 = *puVar7;
        if (((bVar2 & 1) != 0) && (uVar1 != 0)) {
          FUN_1456cec3c(uVar1);
          bVar2 = DAT_14c950c29;
        }
        if ((uVar6 != 0 & bVar2) == 1) {
          FUN_1456cec3c(uVar6);
          bVar2 = DAT_14c950c29;
        }
        if (uVar1 == uVar6) {
          FUN_147f9a778(param_1,(int)*puVar8);
          return;
        }
        iVar5 = (int)puVar7[9];
        puVar8 = puVar7 + 9;
      } while (iVar5 != -1);
    }
  }
  return;
}



// FUNCTION 147f9a778 FUN_147f9a778 body=95 status=ok
// SIG undefined FUN_147f9a778(void)

void FUN_147f9a778(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0x4c + (longlong)param_2 * 0x50);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x48 + lVar5 * 0x50);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x50 + 0x48);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x50 + 0x48);
  FUN_147f9a7d8();
  return;
}



// FUNCTION 147f9a7d8 FUN_147f9a7d8 body=76 status=ok
// SIG undefined FUN_147f9a7d8(void)

void FUN_147f9a7d8(longlong *param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (*(longlong *)(lVar1 + 0x38 + (longlong)param_2 * 0x50) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(lVar1 + (longlong)param_2 * 0x50 + 0x28) != 0) {
    FUN_1400020a8();
  }
  FUN_147f9a35e(param_1,param_2);
  return;
}



// FUNCTION 147f9a824 FUN_147f9a824 body=67 status=ok
// SIG undefined FUN_147f9a824(void)

void FUN_147f9a824(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_141078e44(param_1,0);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_140ffd204(param_1);
    return;
  }
  FUN_147f9a868(param_1);
  FUN_141078e44(param_1,0);
  return;
}



// FUNCTION 147f9a868 FUN_147f9a868 body=322 status=ok
// SIG undefined FUN_147f9a868(void)

void FUN_147f9a868(longlong *param_1)

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



// FUNCTION 147f9a9ac FUN_147f9a9ac body=95 status=ok
// SIG undefined FUN_147f9a9ac(void)

void FUN_147f9a9ac(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 147f9aa0c FUN_147f9aa0c body=132 status=ok
// SIG undefined FUN_147f9aa0c(void)

void FUN_147f9aa0c(longlong param_1,int param_2)

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



// FUNCTION 147f9aa92 FUN_147f9aa92 body=48 status=ok
// SIG undefined FUN_147f9aa92(void)

void FUN_147f9aa92(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x18,8);
  }
  return;
}



// FUNCTION 147f9aac2 FUN_147f9aac2 body=94 status=ok
// SIG undefined FUN_147f9aac2(void)

undefined1 * FUN_147f9aac2(undefined1 *param_1,undefined1 *param_2)

{
  longlong lVar1;
  byte bVar2;
  
  *param_1 = *param_2;
  lVar1 = *(longlong *)(param_2 + 8);
  *(longlong *)(param_1 + 8) = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar2 = DAT_14c950c29;
  lVar1 = *(longlong *)(param_2 + 0x10);
  *(longlong *)(param_1 + 0x10) = lVar1;
  if ((lVar1 != 0 & bVar2) == 1) {
    FUN_1456cec3c();
  }
  return param_1;
}



// FUNCTION 147f9ab20 FUN_147f9ab20 body=147 status=ok
// SIG undefined FUN_147f9ab20(void)

void FUN_147f9ab20(longlong param_1,int param_2)

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



// FUNCTION 147f9abb4 FUN_147f9abb4 body=94 status=ok
// SIG undefined FUN_147f9abb4(void)

undefined1 * FUN_147f9abb4(undefined1 *param_1,undefined1 *param_2)

{
  longlong lVar1;
  byte bVar2;
  
  *param_1 = *param_2;
  lVar1 = *(longlong *)(param_2 + 8);
  *(longlong *)(param_1 + 8) = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar2 = DAT_14c950c29;
  lVar1 = *(longlong *)(param_2 + 0x10);
  *(longlong *)(param_1 + 0x10) = lVar1;
  if ((lVar1 != 0 & bVar2) == 1) {
    FUN_1456cec3c();
  }
  return param_1;
}



// FUNCTION 147f9ac12 FUN_147f9ac12 body=322 status=ok
// SIG undefined FUN_147f9ac12(void)

void FUN_147f9ac12(longlong *param_1)

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



// FUNCTION 147f9ad56 FUN_147f9ad56 body=412 status=ok
// SIG undefined FUN_147f9ad56(void)

undefined4 *
FUN_147f9ad56(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  ulonglong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140ffd02e(param_1,local_50);
  puVar1 = (undefined4 *)param_3[1];
  uVar5 = *(ulonglong *)*param_3;
  *local_48 = uVar5;
  if ((uVar5 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(uVar5);
    uVar5 = *local_48;
  }
  bVar2 = DAT_14c950c29;
  *(undefined4 *)(local_48 + 1) = *puVar1;
  *(undefined4 *)(local_48 + 2) = 0xffffffff;
  local_54 = local_50[0];
  if (((bVar2 & 1) != 0) && (uVar5 != 0)) {
    FUN_1456cec3c(uVar5);
  }
  uVar4 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  local_68 = param_4;
  cVar3 = FUN_140ffcf6c(param_1,uVar4,local_48,&local_54);
  if (cVar3 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar6) {
      uVar5 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
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
      FUN_140ffd204(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f9aef4 FUN_147f9aef4 body=48 status=ok
// SIG undefined FUN_147f9aef4(void)

void FUN_147f9aef4(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 147f9af24 FUN_147f9af24 body=114 status=ok
// SIG undefined FUN_147f9af24(void)

void FUN_147f9af24(longlong *param_1,int param_2)

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



// FUNCTION 147f9af96 FUN_147f9af96 body=132 status=ok
// SIG undefined FUN_147f9af96(void)

void FUN_147f9af96(longlong param_1,int param_2)

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



// FUNCTION 147f9b01c FUN_147f9b01c body=132 status=ok
// SIG undefined FUN_147f9b01c(void)

void FUN_147f9b01c(longlong param_1,int param_2)

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



// FUNCTION 147f9b0a2 FUN_147f9b0a2 body=67 status=ok
// SIG undefined FUN_147f9b0a2(void)

void FUN_147f9b0a2(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_141079584(param_1,0);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_1402a6528(param_1);
    return;
  }
  FUN_147f9b0e6(param_1);
  FUN_141079584(param_1,0);
  return;
}



// FUNCTION 147f9b0e6 FUN_147f9b0e6 body=322 status=ok
// SIG undefined FUN_147f9b0e6(void)

void FUN_147f9b0e6(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x6c + (longlong)iVar4 * 0x70) * 4) =
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



// FUNCTION 147f9b22a FUN_147f9b22a body=324 status=ok
// SIG undefined FUN_147f9b22a(void)

undefined4 * FUN_147f9b22a(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char cVar10;
  uint uVar11;
  ulonglong uVar12;
  int iVar13;
  longlong lVar14;
  uint uVar15;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147f9b370(param_1,local_48);
  puVar1 = (undefined4 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = 0;
  FUN_14485c47a(local_40,uVar2);
  uVar3 = *puVar1;
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  uVar6 = puVar1[3];
  uVar7 = puVar1[5];
  uVar8 = puVar1[6];
  uVar9 = puVar1[7];
  *(undefined4 *)(local_40 + 3) = puVar1[4];
  *(undefined4 *)((longlong)local_40 + 0x1c) = uVar7;
  *(undefined4 *)(local_40 + 4) = uVar8;
  *(undefined4 *)((longlong)local_40 + 0x24) = uVar9;
  *(undefined4 *)(local_40 + 1) = uVar3;
  *(undefined4 *)((longlong)local_40 + 0xc) = uVar4;
  *(undefined4 *)(local_40 + 2) = uVar5;
  *(undefined4 *)((longlong)local_40 + 0x14) = uVar6;
  *(undefined4 *)(local_40 + 5) = 0xffffffff;
  local_4c = local_48[0];
  uVar15 = (uint)((ulonglong)*local_40 >> 0x20) ^ (uint)*local_40;
  cVar10 = FUN_147f9b45e(param_1,uVar15,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar10 == '\0') {
    uVar11 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar13 = 1;
    if (3 < uVar11) {
      uVar12 = (ulonglong)(uVar11 & 0xfffffffe) + 0xf;
      lVar14 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar13 = 1 << ((byte)lVar14 & 0x1f);
    }
    if (((int)uVar11 < 1) || (iVar13 <= *(int *)(param_1 + 0x48))) {
      uVar15 = *(int *)(param_1 + 0x48) - 1U & uVar15;
      *(uint *)((longlong)local_40 + 0x2c) = uVar15;
      lVar14 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar14 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 5) =
           *(undefined4 *)
            (lVar14 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar15) * 4);
      lVar14 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar14 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar14 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar15) * 4) = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar13;
      FUN_147f9b664(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f9b370 FUN_147f9b370 body=238 status=ok
// SIG undefined FUN_147f9b370(void)

int * FUN_147f9b370(longlong *param_1,int *param_2)

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
      FUN_140044672(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x30);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x30) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x30 + *param_1;
  return param_2;
}



// FUNCTION 147f9b45e FUN_147f9b45e body=154 status=ok
// SIG undefined FUN_147f9b45e(void)

undefined8 FUN_147f9b45e(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  undefined8 uVar12;
  longlong lVar13;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_30 = *param_3;
    iVar11 = FUN_147f9b4fa();
    if (iVar11 != -1) {
      lVar2 = *param_1;
      lVar13 = (longlong)iVar11 * 0x30;
      uVar3 = *(undefined4 *)param_3;
      uVar4 = *(undefined4 *)((longlong)param_3 + 4);
      uVar5 = *(undefined4 *)(param_3 + 1);
      uVar6 = *(undefined4 *)((longlong)param_3 + 0xc);
      uVar7 = *(undefined4 *)(param_3 + 2);
      uVar8 = *(undefined4 *)((longlong)param_3 + 0x14);
      uVar9 = *(undefined4 *)(param_3 + 3);
      uVar10 = *(undefined4 *)((longlong)param_3 + 0x1c);
      *(undefined8 *)(lVar2 + 0x20 + lVar13) = param_3[4];
      puVar1 = (undefined4 *)(lVar2 + 0x10 + lVar13);
      *puVar1 = uVar7;
      puVar1[1] = uVar8;
      puVar1[2] = uVar9;
      puVar1[3] = uVar10;
      puVar1 = (undefined4 *)(lVar2 + lVar13);
      *puVar1 = uVar3;
      puVar1[1] = uVar4;
      puVar1[2] = uVar5;
      puVar1[3] = uVar6;
      FUN_147f9b5b4(param_1,*param_4);
      *param_4 = iVar11;
      uVar12 = 1;
      goto LAB_147f9b482;
    }
  }
  uVar12 = 0;
LAB_147f9b482:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar12;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f9b4fa FUN_147f9b4fa body=184 status=ok
// SIG undefined FUN_147f9b4fa(void)

int FUN_147f9b4fa(longlong *param_1,uint param_2,undefined8 *param_3)

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
        local_40 = *(undefined8 *)(lVar3 + (longlong)iVar4 * 0x30);
        cVar1 = FUN_147f9b62e(&local_40,&local_48);
        if (cVar1 != '\0') goto LAB_147f9b58c;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0x28 + (longlong)iVar4 * 0x30);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_147f9b58c:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f9b5b4 FUN_147f9b5b4 body=122 status=ok
// SIG undefined FUN_147f9b5b4(void)

void FUN_147f9b5b4(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x30) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x30) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x30 + 4) = uVar4;
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



// FUNCTION 147f9b62e FUN_147f9b62e body=53 status=ok
// SIG undefined FUN_147f9b62e(void)

ulonglong FUN_147f9b62e(int *param_1,int *param_2)

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



// FUNCTION 147f9b664 FUN_147f9b664 body=440 status=ok
// SIG undefined FUN_147f9b664(void)

void FUN_147f9b664(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x30;
        uVar10 = (longlong)
                 (int)((uint)((ulonglong)*(undefined8 *)(lVar3 + lVar7) >> 0x20) ^
                      (uint)*(undefined8 *)(lVar3 + lVar7)) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x2c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x28 + lVar7) =
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



// FUNCTION 147f9b81e FUN_147f9b81e body=188 status=ok
// SIG undefined FUN_147f9b81e(void)

longlong FUN_147f9b81e(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
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
        lVar3 = *param_1 + (longlong)iVar1 * 0x60;
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x60) == *param_3) {
          if (lVar3 != 0) goto LAB_147f9b8bd;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x58);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_147f9b8dc(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x60 + *param_1;
LAB_147f9b8bd:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 0x18;
}



// FUNCTION 147f9b8dc FUN_147f9b8dc body=272 status=ok
// SIG undefined FUN_147f9b8dc(void)

undefined4 * FUN_147f9b8dc(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_147f9b9ee(param_1,local_48);
  FUN_147f9bb9e(param_4,local_40);
  *(undefined4 *)(local_40 + 0x58) = 0xffffffff;
  cVar1 = FUN_147f9badc(param_1,param_3,local_40,local_48);
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
      *(uint *)(local_40 + 0x5c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x58) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_147f9bce4(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f9b9ee FUN_147f9b9ee body=238 status=ok
// SIG undefined FUN_147f9b9ee(void)

int * FUN_147f9b9ee(longlong *param_1,int *param_2)

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



// FUNCTION 147f9badc FUN_147f9badc body=194 status=ok
// SIG undefined FUN_147f9badc(void)

undefined8 FUN_147f9badc(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  void *_Dst;
  longlong *plVar3;
  int iVar4;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      do {
        _Dst = (void *)(*param_1 + (longlong)iVar4 * 0x60);
        if (*(longlong *)(*param_1 + (longlong)iVar4 * 0x60) == *param_3) {
          plVar3 = *(longlong **)((longlong)_Dst + 0x10);
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
          memmove(_Dst,param_3,0x58);
          FUN_147f9bc6a(param_1,*param_4);
          *param_4 = iVar4;
          return 1;
        }
        iVar4 = *(int *)((longlong)_Dst + 0x58);
      } while (iVar4 != -1);
    }
  }
  return 0;
}



// FUNCTION 147f9bb9e FUN_147f9bb9e body=202 status=ok
// SIG undefined FUN_147f9bb9e(void)

undefined8 * FUN_147f9bb9e(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined3 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined7 uStack_18;
  undefined8 local_11;
  ulonglong local_8;
  
  uVar5 = DAT_14c8464f0;
  uVar4 = DAT_14c8464e8;
  uVar3 = DAT_14c8464e0;
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  local_30 = 0;
  uStack_2c = 0;
  local_48 = DAT_14c8464e0;
  uStack_40 = DAT_14c8464e8;
  local_38 = DAT_14c8464f0;
  uStack_24._3_1_ = (byte)DAT_14c8464e0;
  uStack_24 = (uint)uStack_24._3_1_ << 0x18;
  uStack_20 = (undefined4)((ulonglong)DAT_14c8464e0 >> 8);
  uStack_1c._0_3_ = (undefined3)((ulonglong)DAT_14c8464e0 >> 0x28);
  uStack_1c._3_1_ = (undefined1)DAT_14c8464e8;
  uStack_18 = (undefined7)((ulonglong)DAT_14c8464e8 >> 8);
  local_11 = DAT_14c8464f0;
  puVar1 = (undefined8 *)*param_1;
  *param_2 = *puVar1;
  param_2[1] = puVar1[1];
  lVar2 = puVar1[2];
  param_2[2] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  param_2[5] = uVar5;
  param_2[3] = uVar3;
  param_2[4] = uVar4;
  *(undefined1 *)(param_2 + 6) = 3;
  *(undefined4 *)((longlong)param_2 + 0x31) = 0;
  *(int *)((longlong)param_2 + 0x35) = uStack_24;
  *(undefined4 *)((longlong)param_2 + 0x39) = uStack_20;
  *(undefined4 *)((longlong)param_2 + 0x3d) = uStack_1c;
  param_2[8] = uVar4;
  param_2[9] = uVar5;
  *(undefined1 *)(param_2 + 10) = 3;
  *(undefined4 *)((longlong)param_2 + 0x51) = 0;
  *(undefined4 *)((longlong)param_2 + 0x54) = 0;
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f9bc6a FUN_147f9bc6a body=122 status=ok
// SIG undefined FUN_147f9bc6a(void)

void FUN_147f9bc6a(longlong *param_1,int param_2)

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



// FUNCTION 147f9bce4 FUN_147f9bce4 body=477 status=ok
// SIG undefined FUN_147f9bce4(void)

void FUN_147f9bce4(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x60;
        uVar4 = *(undefined8 *)(lVar3 + lVar7);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x5c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x58 + lVar7) =
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



// FUNCTION 147f9bec2 FUN_147f9bec2 body=262 status=ok
// SIG undefined FUN_147f9bec2(void)

void FUN_147f9bec2(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    lVar2 = (longlong)
            *(int *)((longlong)plVar3 +
                    ((longlong)(int)((uint)((ulonglong)param_2 >> 0x20) ^ (uint)param_2) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (lVar2 != -1) {
      lVar4 = *param_1;
      lVar2 = lVar2 * 0x30;
      local_40 = *(undefined8 *)(lVar4 + lVar2);
      local_48 = param_2;
      cVar1 = FUN_147f9b62e();
      if (cVar1 == '\0') {
        lVar4 = lVar4 + lVar2;
        do {
          if ((longlong)*(int *)(lVar4 + 0x28) == -1) goto LAB_147f9bf1b;
          lVar2 = (longlong)*(int *)(lVar4 + 0x28) * 0x30;
          lVar4 = *param_1 + lVar2;
          local_40 = *(undefined8 *)(*param_1 + lVar2);
          local_48 = param_2;
          cVar1 = FUN_147f9b62e(&local_40,&local_48);
        } while (cVar1 == '\0');
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
    }
  }
LAB_147f9bf1b:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147f9c040 FUN_147f9c040 body=137 status=ok
// SIG undefined FUN_147f9c040(void)

void FUN_147f9c040(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  longlong *plVar4;
  uint uVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar2 = *param_2;
    uVar3 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar5 = (uint)lVar2 & 0xffff;
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar4 +
                    ((longlong)
                     (int)(((uint)lVar2 << 0x10 | uVar5) + (int)((ulonglong)lVar2 >> 0x20) +
                           (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar5 >> 4)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x60) == lVar2) {
          FUN_147f9c0ca();
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x60 + *param_1 + 0x58);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 147f9c0ca FUN_147f9c0ca body=95 status=ok
// SIG undefined FUN_147f9c0ca(void)

void FUN_147f9c0ca(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0x5c + (longlong)param_2 * 0x60);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x58 + lVar5 * 0x60);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x60 + 0x58);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x60 + 0x58);
  FUN_147f9c12a();
  return;
}



// FUNCTION 147f9c12a FUN_147f9c12a body=82 status=ok
// SIG undefined FUN_147f9c12a(void)

void FUN_147f9c12a(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(*param_1 + 0x10 + (longlong)param_2 * 0x60);
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
  FUN_147f9bc6a(param_1,param_2);
  return;
}



// FUNCTION 147f9c17c FUN_147f9c17c body=181 status=ok
// SIG undefined FUN_147f9c17c(void)

longlong FUN_147f9c17c(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
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
        lVar3 = *param_1 + (longlong)iVar1 * 0x20;
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x20) == *param_3) {
          if (lVar3 != 0) goto LAB_147f9c214;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x18);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_147f9c232(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x20 + *param_1;
LAB_147f9c214:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 147f9c232 FUN_147f9c232 body=286 status=ok
// SIG undefined FUN_147f9c232(void)

undefined4 * FUN_147f9c232(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_147f9c352(param_1,local_48);
  *local_40 = *(undefined8 *)*param_4;
  local_40[1] = 0;
  local_40[2] = 0;
  FUN_140dde623(0,0);
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  cVar1 = FUN_147f9c438(param_1,param_3,local_40,local_48);
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
      *(uint *)((longlong)local_40 + 0x1c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_147f9c558(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f9c352 FUN_147f9c352 body=229 status=ok
// SIG undefined FUN_147f9c352(void)

int * FUN_147f9c352(longlong *param_1,int *param_2)

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



// FUNCTION 147f9c438 FUN_147f9c438 body=174 status=ok
// SIG undefined FUN_147f9c438(void)

undefined8 FUN_147f9c438(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
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
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar7 * 0x20);
        if (*(longlong *)(*param_1 + (longlong)iVar7 * 0x20) == *param_3) {
          FUN_140dde623(*(undefined8 *)(puVar1 + 2),puVar1[4]);
          if (*(longlong *)(puVar1 + 2) != 0) {
            FUN_1400020a8();
          }
          lVar4 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar5 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(longlong *)(puVar1 + 4) = param_3[2];
          *puVar1 = (int)lVar4;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar5;
          puVar1[3] = uVar3;
          FUN_147f9c4e6(param_1,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = puVar1[6];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 147f9c4e6 FUN_147f9c4e6 body=114 status=ok
// SIG undefined FUN_147f9c4e6(void)

void FUN_147f9c4e6(longlong *param_1,int param_2)

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



// FUNCTION 147f9c558 FUN_147f9c558 body=477 status=ok
// SIG undefined FUN_147f9c558(void)

void FUN_147f9c558(longlong *param_1)

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
        lVar6 = (longlong)iVar4 * 0x20;
        uVar8 = ((uint)(*(ulonglong *)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x1c + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x18 + lVar6) =
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



// FUNCTION 147f9c736 FUN_147f9c736 body=107 status=ok
// SIG undefined FUN_147f9c736(void)

void FUN_147f9c736(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  lVar2 = *param_1;
  iVar1 = (int)param_1[1];
  lVar4 = (longlong)iVar1;
  if (lVar4 != 0) {
    uVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + uVar3) == *param_2) {
        if ((int)(~uVar3 >> 3) != 0) {
          return;
        }
        break;
      }
      uVar3 = uVar3 + 8;
    } while (lVar4 * 8 - uVar3 != 0);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147f9c7a2(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(longlong *)(lVar2 + lVar4 * 8) = *param_2;
  return;
}



// FUNCTION 147f9c7a2 FUN_147f9c7a2 body=132 status=ok
// SIG undefined FUN_147f9c7a2(void)

void FUN_147f9c7a2(longlong param_1,int param_2)

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



// FUNCTION 147f9c827 FUN_147f9c827 body=745 status=ok
// SIG undefined FUN_147f9c827(void)

void FUN_147f9c827(longlong param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  uint uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  float fVar13;
  undefined1 auStack_398 [32];
  longlong *local_378;
  int local_36c;
  longlong *local_368;
  longlong *local_360;
  undefined8 local_358;
  undefined8 local_350;
  longlong local_348;
  longlong local_340;
  undefined4 local_338 [188];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_398;
  if (1 < (int)param_2) {
    memset(local_338,0,0x2f0);
    local_340 = param_1 + (ulonglong)param_2 * 8 + -8;
    local_348 = param_1;
    fVar13 = logf((float)(int)param_2);
    local_338[0] = (int)(longlong)(fVar13 + fVar13);
    plVar5 = &local_348;
    do {
      plVar6 = (longlong *)*plVar5;
      plVar10 = (longlong *)plVar5[1];
      local_36c = (int)plVar5[2];
      iVar2 = (int)((ulonglong)((longlong)plVar10 - (longlong)plVar6) >> 3);
      plVar8 = plVar6;
      plVar12 = plVar10;
      plVar9 = plVar6;
      local_378 = plVar5;
      if (local_36c != 0) {
LAB_147f9c8fa:
        plVar5 = local_378;
        if (8 < (int)(iVar2 + 1U)) {
          uVar4 = iVar2 + 1U >> 1;
          lVar1 = plVar9[uVar4];
          plVar9[uVar4] = *plVar9;
          *plVar9 = lVar1;
          plVar7 = plVar10 + 1;
          plVar6 = plVar9;
          local_368 = plVar8;
          local_360 = plVar12;
          do {
            plVar5 = plVar6 + 1;
            plVar8 = plVar6 + 1;
            do {
              plVar6 = plVar8;
              plVar3 = plVar5;
              if (plVar10 < plVar6) break;
              local_350 = *(undefined8 *)(*plVar6 + 0x18);
              local_358 = *(undefined8 *)(*plVar9 + 0x18);
              iVar2 = FUN_144a78538(&local_358,&local_350);
              plVar5 = plVar3 + 1;
              plVar8 = plVar6 + 1;
            } while (-1 < iVar2);
            plVar5 = plVar7 + -2;
            do {
              plVar11 = plVar7;
              plVar12 = plVar5;
              plVar7 = plVar11 + -1;
              if (plVar7 <= plVar9) break;
              local_350 = *(undefined8 *)(*plVar9 + 0x18);
              local_358 = *(undefined8 *)(*plVar7 + 0x18);
              iVar2 = FUN_144a78538(&local_358,&local_350);
              plVar5 = plVar12 + -1;
            } while (-1 < iVar2);
            if (plVar7 < plVar6) goto LAB_147f9c9c7;
            lVar1 = *plVar6;
            *plVar6 = *plVar7;
            *plVar7 = lVar1;
          } while( true );
        }
        for (; local_378 = plVar5, plVar8 = plVar9, plVar6 = plVar9, plVar9 < plVar10;
            plVar10 = plVar10 + -1) {
          while (plVar6 = plVar6 + 1, plVar6 <= plVar10) {
            local_350 = *(undefined8 *)(*plVar6 + 0x18);
            local_358 = *(undefined8 *)(*plVar8 + 0x18);
            iVar2 = FUN_144a78538(&local_358,&local_350);
            if (iVar2 < 0) {
              plVar8 = plVar6;
            }
          }
          lVar1 = *plVar8;
          *plVar8 = *plVar10;
          *plVar10 = lVar1;
          plVar5 = local_378;
        }
        goto LAB_147f9cae7;
      }
LAB_147f9cb01:
      FUN_147f9cb11(plVar6);
      plVar5 = local_378;
LAB_147f9cae7:
      plVar5 = plVar5 + -3;
    } while (&local_348 <= plVar5);
  }
  if ((local_48 ^ (ulonglong)auStack_398) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_147f9c9c7:
  lVar1 = *plVar9;
  *plVar9 = *plVar7;
  *plVar7 = lVar1;
  local_36c = local_36c + -1;
  plVar11 = plVar11 + -2;
  if ((longlong)plVar12 - (longlong)local_368 < (longlong)local_360 - (longlong)plVar3) {
    plVar5 = local_378;
    if (plVar6 < plVar10) {
      *local_378 = (longlong)plVar6;
      local_378[1] = (longlong)plVar10;
      *(int *)(local_378 + 2) = local_36c;
      plVar5 = local_378 + 3;
    }
    plVar6 = plVar9;
    if (plVar7 <= plVar9 + 1) goto LAB_147f9cae7;
  }
  else {
    if (plVar9 + 1 < plVar7) {
      *local_378 = (longlong)plVar9;
      local_378[1] = (longlong)plVar11;
      *(int *)(local_378 + 2) = local_36c;
      local_378 = local_378 + 3;
    }
    plVar5 = local_378;
    plVar9 = plVar3;
    plVar11 = plVar10;
    plVar12 = plVar10;
    if (plVar10 <= plVar6) goto LAB_147f9cae7;
  }
  local_378 = plVar5;
  iVar2 = (int)((ulonglong)((longlong)plVar12 - (longlong)plVar9) >> 3);
  plVar8 = plVar9;
  plVar10 = plVar11;
  plVar9 = plVar6;
  if (local_36c == 0) goto LAB_147f9cb01;
  goto LAB_147f9c8fa;
}



// FUNCTION 147f9cb11 FUN_147f9cb11 body=535 status=ok
// SIG undefined FUN_147f9cb11(void)

void FUN_147f9cb11(undefined8 *param_1,uint param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  bool bVar9;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 != 0) {
    iVar8 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar5 = iVar8;
joined_r0x000147f9cb62:
    do {
      iVar3 = iVar8 * 2 + 1;
      if (iVar3 < (int)param_2) {
        iVar4 = iVar8 * 2 + 2;
        if (iVar4 < (int)param_2) {
          local_50 = *(undefined8 *)(param_1[iVar4] + 0x18);
          local_58 = *(undefined8 *)(param_1[iVar3] + 0x18);
          iVar2 = FUN_144a78538(&local_50,&local_58);
          if (-1 < iVar2) {
            iVar3 = iVar4;
          }
        }
        local_50 = *(undefined8 *)(param_1[iVar8] + 0x18);
        local_58 = *(undefined8 *)(param_1[iVar3] + 0x18);
        iVar4 = FUN_144a78538(&local_50,&local_58);
        if (iVar4 < 0) {
          uVar1 = param_1[iVar8];
          param_1[iVar8] = param_1[iVar3];
          param_1[iVar3] = uVar1;
          iVar8 = iVar3;
          goto joined_r0x000147f9cb62;
        }
      }
      bVar9 = iVar5 != 0;
      iVar8 = iVar5 + -1;
      iVar5 = iVar8;
    } while (bVar9);
    if (1 < (int)param_2) {
      uVar6 = (ulonglong)param_2;
      uVar1 = *param_1;
      *param_1 = param_1[uVar6 - 1];
      param_1[uVar6 - 1] = uVar1;
      if (param_2 != 2) {
        do {
          uVar7 = uVar6 - 1;
          iVar8 = 0;
          iVar3 = 1;
          iVar5 = 0;
          do {
            iVar8 = iVar8 + 2;
            iVar4 = iVar3;
            if ((longlong)iVar8 < (longlong)uVar7) {
              local_50 = *(undefined8 *)(param_1[iVar8] + 0x18);
              local_58 = *(undefined8 *)(param_1[iVar3] + 0x18);
              iVar3 = FUN_144a78538(&local_50,&local_58);
              if (-1 < iVar3) {
                iVar4 = iVar8;
              }
            }
            local_50 = *(undefined8 *)(param_1[iVar5] + 0x18);
            local_58 = *(undefined8 *)(param_1[iVar4] + 0x18);
            iVar8 = FUN_144a78538(&local_50,&local_58);
            if (-1 < iVar8) break;
            uVar1 = param_1[iVar5];
            param_1[iVar5] = param_1[iVar4];
            param_1[iVar4] = uVar1;
            iVar8 = iVar4 * 2;
            iVar3 = iVar4 * 2 + 1;
            iVar5 = iVar4;
          } while ((longlong)iVar3 < (longlong)uVar7);
          uVar1 = *param_1;
          *param_1 = param_1[uVar6 - 2];
          param_1[uVar6 - 2] = uVar1;
          uVar6 = uVar7;
        } while (2 < uVar7);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147f9cd2a FUN_147f9cd2a body=364 status=ok
// SIG undefined FUN_147f9cd2a(void)

undefined4 * FUN_147f9cd2a(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1406e28c6(param_1,local_40);
  puVar1 = (undefined8 *)param_3[1];
  *local_38 = *(undefined8 *)*param_3;
  local_38[1] = *puVar1;
  *puVar1 = 0;
  *(undefined4 *)(local_38 + 2) = *(undefined4 *)(puVar1 + 1);
  *(undefined4 *)((longlong)local_38 + 0x14) = *(undefined4 *)((longlong)puVar1 + 0xc);
  puVar1[1] = 0;
  *(undefined4 *)(local_38 + 3) = 0xffffffff;
  local_44 = local_40[0];
  uVar2 = *local_38;
  uVar8 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar5 = (uint)uVar2 & 0xffff;
  uVar8 = ((uint)uVar2 << 0x10 | uVar5) + (int)((ulonglong)uVar2 >> 0x20) +
          (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar5 >> 4);
  local_58 = 0;
  cVar3 = FUN_1406e2804(param_1,uVar8,local_38);
  if (cVar3 == '\0') {
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
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)((longlong)local_38 + 0x1c) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_38 + 3) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_44;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_1406e2aa2(param_1);
    }
  }
  *param_2 = local_44;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f9ce98 FUN_147f9ce98 body=89 status=ok
// SIG undefined FUN_147f9ce98(void)

void FUN_147f9ce98(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 * 8,8);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 3)) {
    uVar3 = uVar1 >> 3 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,8,8);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 147f9cef2 FUN_147f9cef2 body=1 status=ok
// SIG undefined FUN_147f9cef2(void)

void FUN_147f9cef2(void)

{
  return;
}



// FUNCTION 147f9cef4 FUN_147f9cef4 body=29 status=ok
// SIG undefined FUN_147f9cef4(void)

undefined8 FUN_147f9cef4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f9cf12 FUN_147f9cf12 body=29 status=ok
// SIG undefined FUN_147f9cf12(void)

undefined8 FUN_147f9cf12(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f9cf38 FUN_147f9cf38 body=48 status=ok
// SIG undefined FUN_147f9cf38(void)

void FUN_147f9cf38(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,4);
  }
  return;
}



// FUNCTION 147f9cf68 FUN_147f9cf68 body=64 status=ok
// SIG undefined FUN_147f9cf68(void)

void FUN_147f9cf68(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong in_R9;
  
  FUN_147f9cfa8();
  plVar3 = *(longlong **)(in_R9 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x000147f9cf9d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147f9cfa8 FUN_147f9cfa8 body=649 status=ok
// SIG undefined FUN_147f9cfa8(void)

void FUN_147f9cfa8(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  longlong *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  ulonglong local_50;
  
  plVar6 = DAT_14c966e90;
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (DAT_14c966e90 != (longlong *)0x0) {
    LOCK();
    *(int *)(DAT_14c966e90 + 1) = (int)DAT_14c966e90[1] + 1;
    UNLOCK();
  }
  local_88 = DAT_14c964cc0;
  uStack_90 = DAT_14c964cb8;
  local_80 = 0xffffffff;
  uStack_78 = 0x3c88888900000000;
  local_70 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  _uStack_68 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  local_60 = DAT_14c8464f0;
  uStack_58 = 0;
  local_98 = DAT_14c964cb0;
  if (DAT_14c964cc0 != (longlong *)0x0) {
    LOCK();
    *(int *)(DAT_14c964cc0 + 1) = (int)DAT_14c964cc0[1] + 1;
    UNLOCK();
  }
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
  local_70 = *(undefined8 *)(param_1 + 0x10);
  uStack_78 = CONCAT44(param_2,*(undefined4 *)(param_1 + 8));
  plVar6 = (longlong *)FUN_144a81a0a();
  (**(code **)(*plVar6 + 0x50))(plVar6,&local_80);
  FUN_147f9d3ac(&local_98);
  plVar6 = local_88;
  if (local_88 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_88 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_88)(local_88);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  plVar6 = DAT_14c966e90;
  if (DAT_14c966e90 != (longlong *)0x0) {
    LOCK();
    *(int *)(DAT_14c966e90 + 1) = (int)DAT_14c966e90[1] + 1;
    UNLOCK();
  }
  local_88 = DAT_14c964cd8;
  uStack_90 = DAT_14c964cd0;
  local_80 = 0xffffffff;
  uStack_78 = 0x3c88888900000000;
  local_70 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  _uStack_68 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  local_60 = DAT_14c8464f0;
  uStack_58 = 0;
  local_98 = DAT_14c964cc8;
  if (DAT_14c964cd8 != (longlong *)0x0) {
    LOCK();
    *(int *)(DAT_14c964cd8 + 1) = (int)DAT_14c964cd8[1] + 1;
    UNLOCK();
  }
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
  local_70 = *(undefined8 *)(param_1 + 0x18);
  uStack_78 = CONCAT44(param_2,*(undefined4 *)(param_1 + 0xc));
  plVar6 = (longlong *)FUN_144a81a0a();
  (**(code **)(*plVar6 + 0x50))(plVar6,&local_80);
  FUN_147f9d3ac(&local_98);
  plVar6 = local_88;
  if (local_88 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_88 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_88)(local_88);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  *(undefined8 *)(param_1 + 8) = DAT_14c967818;
  uVar5 = DAT_14c8463f8._4_4_;
  uVar4 = (undefined4)DAT_14c8463f8;
  uVar3 = DAT_14c8463f0._4_4_;
  *(undefined4 *)(param_1 + 0x10) = (undefined4)DAT_14c8463f0;
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  *(undefined4 *)(param_1 + 0x18) = uVar4;
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  if ((local_50 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f9d232 FUN_147f9d232 body=376 status=ok
// SIG undefined FUN_147f9d232(void)

undefined8 FUN_147f9d232(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  byte bVar4;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong *local_58;
  ulonglong local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = DAT_14c966e80;
  uStack_60 = DAT_14c966e88;
  local_58 = DAT_14c966e90;
  if (DAT_14c966e90 != (longlong *)0x0) {
    LOCK();
    *(int *)(DAT_14c966e90 + 1) = (int)DAT_14c966e90[1] + 1;
    UNLOCK();
  }
  local_50 = 0xffffffff;
  uStack_48 = 0x3c88888900000000;
  local_40 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  _uStack_38 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  local_30 = DAT_14c8464f0;
  uStack_28 = 0;
  local_80 = *(undefined8 *)(param_3 + 0x20);
  local_78 = *(undefined8 *)(param_3 + 0x28);
  local_70 = *(longlong **)(param_3 + 0x30);
  if (local_70 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_70 + 1) = (int)local_70[1] + 1;
    UNLOCK();
  }
  FUN_1413a4742(&local_68,&local_80);
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
  local_50 = local_50 & 0xffffffff;
  local_40 = 0x3ff0000000000000;
  uStack_48._4_4_ = (float)(*(double *)(param_2 + 0x3e0) - *(double *)(param_2 + 1000));
  bVar4 = FUN_1449448d4(&local_68);
  uStack_48 = CONCAT44(uStack_48._4_4_,(uint)bVar4);
  local_50 = CONCAT44(local_50._4_4_,*(undefined4 *)(param_3 + 0x10));
  FUN_147f9d3ac(&local_68);
  plVar3 = local_58;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_58 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f9d3ac FUN_147f9d3ac body=231 status=ok
// SIG undefined FUN_147f9d3ac(void)

void FUN_147f9d3ac(undefined8 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auStack_58 [40];
  longlong local_30;
  int local_28;
  uint local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)FUN_14032f648();
  lVar2 = plVar1[0x22];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 1000))(plVar1);
    lVar2 = plVar1[0x22];
  }
  if ((*(byte *)(lVar2 + 0xe0) & 0x20) != 0) {
    FUN_147f8fb44(&local_30,0x10,1,0);
    uVar3 = (ulonglong)local_20;
    if ((-1 < (int)local_20) && ((int)local_20 < local_28)) {
      do {
        FUN_1438baab8(*(undefined8 *)(local_30 + (uVar3 & 0xffffffff) * 8),param_1);
        uVar3 = (longlong)(int)local_20;
        do {
          uVar4 = uVar3;
          uVar3 = uVar4 + 1;
          local_20 = (uint)uVar3;
          if ((longlong)local_28 <= (longlong)uVar3) break;
        } while (*(longlong *)(local_30 + uVar3 * 8) == 0);
      } while ((-2 < (longlong)uVar4) && ((int)local_20 < local_28));
    }
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f9d494 FUN_147f9d494 body=370 status=ok
// SIG undefined FUN_147f9d494(void)

undefined8 FUN_147f9d494(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  byte bVar4;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = DAT_14c966e80;
  uStack_60 = DAT_14c966e88;
  local_58 = DAT_14c966e90;
  if (DAT_14c966e90 != (longlong *)0x0) {
    LOCK();
    *(int *)(DAT_14c966e90 + 1) = (int)DAT_14c966e90[1] + 1;
    UNLOCK();
  }
  local_50 = 0xffffffff;
  uStack_48 = 0x3c88888900000000;
  local_40 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  _uStack_38 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  local_30 = DAT_14c8464f0;
  uStack_28 = 0;
  local_80 = *(undefined8 *)(param_3 + 0x20);
  local_78 = *(undefined8 *)(param_3 + 0x28);
  local_70 = *(longlong **)(param_3 + 0x30);
  if (local_70 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_70 + 1) = (int)local_70[1] + 1;
    UNLOCK();
  }
  FUN_1413a4742(&local_68,&local_80);
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
  local_50._4_4_ = 1;
  local_40 = 0;
  uStack_48._4_4_ = (float)(*(double *)(param_2 + 0x3e0) - *(double *)(param_2 + 1000));
  bVar4 = FUN_1449448d4(&local_68);
  uStack_48 = CONCAT44(uStack_48._4_4_,(uint)bVar4);
  local_50 = CONCAT44(local_50._4_4_,*(undefined4 *)(param_3 + 0x10));
  FUN_147f9d3ac(&local_68);
  plVar3 = local_58;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_58 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f9d608 FUN_147f9d608 body=368 status=ok
// SIG undefined FUN_147f9d608(void)

undefined8 FUN_147f9d608(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong *local_58;
  ulonglong local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = DAT_14c966e80;
  uStack_60 = DAT_14c966e88;
  local_58 = DAT_14c966e90;
  if (DAT_14c966e90 != (longlong *)0x0) {
    LOCK();
    *(int *)(DAT_14c966e90 + 1) = (int)DAT_14c966e90[1] + 1;
    UNLOCK();
  }
  local_50 = 0xffffffff;
  uStack_48 = 0x3c88888900000000;
  local_40 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  _uStack_38 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  local_30 = DAT_14c8464f0;
  uStack_28 = 0;
  local_80 = *(undefined8 *)(param_3 + 0x20);
  local_78 = *(undefined8 *)(param_3 + 0x28);
  local_70 = *(longlong **)(param_3 + 0x30);
  if (local_70 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_70 + 1) = (int)local_70[1] + 1;
    UNLOCK();
  }
  FUN_1413a4742(&local_68,&local_80);
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
  local_40 = (double)*(float *)(param_3 + 0x40);
  uStack_48 = CONCAT44((float)(*(double *)(param_2 + 0x3e0) - *(double *)(param_2 + 1000)),1);
  local_50 = (ulonglong)*(uint *)(param_3 + 0x10);
  FUN_147f9d3ac(&local_68);
  plVar3 = local_58;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_58 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f9d79a FUN_147f9d79a body=363 status=ok
// SIG undefined FUN_147f9d79a(void)

undefined8 FUN_147f9d79a(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong *local_58;
  ulonglong local_50;
  longlong lStack_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = DAT_14c966e80;
  uStack_60 = DAT_14c966e88;
  local_58 = DAT_14c966e90;
  if (DAT_14c966e90 != (longlong *)0x0) {
    LOCK();
    *(int *)(DAT_14c966e90 + 1) = (int)DAT_14c966e90[1] + 1;
    UNLOCK();
  }
  local_50 = 0xffffffff;
  lStack_48 = 0x3c88888900000000;
  local_40 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  _uStack_38 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  local_30 = DAT_14c8464f0;
  uStack_28 = 0;
  local_80 = *(undefined8 *)(param_3 + 0x40);
  local_78 = *(undefined8 *)(param_3 + 0x48);
  local_70 = *(longlong **)(param_3 + 0x50);
  if (local_70 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_70 + 1) = (int)local_70[1] + 1;
    UNLOCK();
  }
  FUN_1413a4742(&local_68,&local_80);
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
  local_40 = 0x3ff0000000000000;
  lStack_48 = (ulonglong)(uint)(float)(*(double *)(param_2 + 0x3e0) - *(double *)(param_2 + 1000))
              << 0x20;
  local_50 = (ulonglong)*(uint *)(param_3 + 0x10);
  FUN_147f9d3ac(&local_68);
  plVar3 = local_58;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_58 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f9d906 FUN_147f9d906 body=363 status=ok
// SIG undefined FUN_147f9d906(void)

undefined8 FUN_147f9d906(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong *local_58;
  undefined8 local_50;
  longlong lStack_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = DAT_14c966e80;
  uStack_60 = DAT_14c966e88;
  local_58 = DAT_14c966e90;
  if (DAT_14c966e90 != (longlong *)0x0) {
    LOCK();
    *(int *)(DAT_14c966e90 + 1) = (int)DAT_14c966e90[1] + 1;
    UNLOCK();
  }
  local_50 = 0xffffffff;
  lStack_48 = 0x3c88888900000000;
  local_40 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  _uStack_38 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  local_30 = DAT_14c8464f0;
  uStack_28 = 0;
  local_80 = *(undefined8 *)(param_3 + 0x40);
  local_78 = *(undefined8 *)(param_3 + 0x48);
  local_70 = *(longlong **)(param_3 + 0x50);
  if (local_70 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_70 + 1) = (int)local_70[1] + 1;
    UNLOCK();
  }
  FUN_1413a4742(&local_68,&local_80);
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
  local_40 = 0;
  lStack_48 = (ulonglong)(uint)(float)(*(double *)(param_2 + 0x3e0) - *(double *)(param_2 + 1000))
              << 0x20;
  local_50 = CONCAT44(1,*(undefined4 *)(param_3 + 0x10));
  FUN_147f9d3ac(&local_68);
  plVar3 = local_58;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_58 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f9da72 FUN_147f9da72 body=369 status=ok
// SIG undefined FUN_147f9da72(void)

undefined8 FUN_147f9da72(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong *local_58;
  undefined8 local_50;
  longlong lStack_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = DAT_14c966e80;
  uStack_60 = DAT_14c966e88;
  local_58 = DAT_14c966e90;
  if (DAT_14c966e90 != (longlong *)0x0) {
    LOCK();
    *(int *)(DAT_14c966e90 + 1) = (int)DAT_14c966e90[1] + 1;
    UNLOCK();
  }
  local_50 = 0xffffffff;
  lStack_48 = 0x3c88888900000000;
  local_40 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  _uStack_38 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  local_30 = DAT_14c8464f0;
  uStack_28 = 0;
  local_80 = *(undefined8 *)(param_3 + 0x40);
  local_78 = *(undefined8 *)(param_3 + 0x48);
  local_70 = *(longlong **)(param_3 + 0x50);
  if (local_70 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_70 + 1) = (int)local_70[1] + 1;
    UNLOCK();
  }
  FUN_1413a4742(&local_68,&local_80);
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
  local_40 = 0x3ff0000000000000;
  lStack_48 = (ulonglong)(uint)(float)(*(double *)(param_2 + 0x3e0) - *(double *)(param_2 + 1000))
              << 0x20;
  local_50 = CONCAT44(3,*(undefined4 *)(param_3 + 0x10));
  FUN_147f9d3ac(&local_68);
  plVar3 = local_58;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_58 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f9dbe4 FUN_147f9dbe4 body=949 status=ok
// SIG undefined FUN_147f9dbe4(void)

undefined8 FUN_147f9dbe4(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  bool bVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined1 auStack_f8 [40];
  undefined8 local_d0;
  undefined8 uStack_c8;
  longlong *local_c0;
  uint local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  float local_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 uStack_98;
  undefined4 uStack_97;
  uint uStack_93;
  undefined8 local_88;
  undefined8 uStack_80;
  longlong *local_78;
  ulonglong local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 local_50;
  undefined4 uStack_4f;
  uint uStack_4b;
  undefined7 uStack_47;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  bVar4 = *(float *)(param_3 + 0x6c) != 0.0;
  bVar5 = *(float *)(param_3 + 0x6c) <= 0.0;
  puVar6 = &DAT_14c964cf8;
  if (bVar5 && bVar4) {
    puVar6 = &DAT_14c964d10;
  }
  puVar7 = &DAT_14c964d00;
  if (bVar5 && bVar4) {
    puVar7 = &DAT_14c964d18;
  }
  plVar8 = &DAT_14c964d08;
  if (bVar5 && bVar4) {
    plVar8 = &DAT_14c964d20;
  }
  local_88 = *puVar6;
  uStack_80 = *puVar7;
  plVar8 = (longlong *)*plVar8;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  plVar3 = DAT_14c966e90;
  uStack_47 = 0;
  if (DAT_14c966e90 != (longlong *)0x0) {
    LOCK();
    *(int *)(DAT_14c966e90 + 1) = (int)DAT_14c966e90[1] + 1;
    UNLOCK();
  }
  local_70 = 0xffffffff;
  uStack_68 = 0x3c88888900000000;
  local_60 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  uStack_58 = (undefined4)DAT_14c8464e8;
  uStack_54 = DAT_14c8464e8._4_4_;
  local_50 = (undefined1)DAT_14c8464f0;
  uStack_4f = (undefined4)((ulonglong)DAT_14c8464f0 >> 8);
  uStack_4b._0_3_ = (uint3)((ulonglong)DAT_14c8464f0 >> 0x28);
  uStack_4b = (uint)(uint3)uStack_4b;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  local_78 = plVar8;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)();
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
  }
  local_60 = 1.0;
  local_ac = (float)(*(double *)(param_2 + 0x3e0) - *(double *)(param_2 + 1000));
  uStack_68 = (ulonglong)(uint)local_ac << 0x20;
  local_b8 = *(uint *)(param_3 + 0x10);
  local_70 = (ulonglong)local_b8;
  local_d0 = local_88;
  uStack_c8 = uStack_80;
  local_c0 = local_78;
  if (local_78 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_78 + 1) = (int)local_78[1] + 1;
    UNLOCK();
  }
  local_b0 = 0;
  uStack_98 = local_50;
  uStack_97 = uStack_4f;
  uStack_93 = uStack_4b;
  uStack_a8 = 0;
  uStack_a4 = 0x3ff00000;
  uStack_a0 = uStack_58;
  uStack_9c = uStack_54;
  local_b4 = 1;
  FUN_147f9d3ac(&local_88);
  FUN_147f9d3ac(&local_d0);
  plVar3 = local_c0;
  if (local_c0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_c0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_c0)(local_c0);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = local_78;
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
  plVar3 = DAT_14c966e90;
  uStack_47 = 0;
  if (DAT_14c966e90 != (longlong *)0x0) {
    LOCK();
    *(int *)(DAT_14c966e90 + 1) = (int)DAT_14c966e90[1] + 1;
    UNLOCK();
  }
  local_78 = DAT_14c964d38;
  uStack_80 = DAT_14c964d30;
  local_70 = 0xffffffff;
  uStack_68 = 0x3c88888900000000;
  local_60 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  uStack_58 = (undefined4)DAT_14c8464e8;
  uStack_54 = DAT_14c8464e8._4_4_;
  local_50 = (undefined1)DAT_14c8464f0;
  uStack_4f = (undefined4)((ulonglong)DAT_14c8464f0 >> 8);
  uStack_4b._0_3_ = (uint3)((ulonglong)DAT_14c8464f0 >> 0x28);
  uStack_4b = (uint)(uint3)uStack_4b;
  local_88 = DAT_14c964d28;
  if (DAT_14c964d38 != (longlong *)0x0) {
    LOCK();
    *(int *)(DAT_14c964d38 + 1) = (int)DAT_14c964d38[1] + 1;
    UNLOCK();
  }
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
  local_60 = (double)*(float *)(param_3 + 0x6c);
  uStack_68 = CONCAT44((float)(*(double *)(param_2 + 0x3e0) - *(double *)(param_2 + 1000)),1);
  local_70 = CONCAT44(local_70._4_4_,*(undefined4 *)(param_3 + 0x10));
  FUN_147f9d3ac(&local_88);
  plVar3 = local_78;
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
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar8 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f9dfc4 FUN_147f9dfc4 body=324 status=ok
// SIG undefined FUN_147f9dfc4(void)

void FUN_147f9dfc4(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [40];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  longlong *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  longlong *local_38;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_48 = 0;
  uStack_40 = 0;
  local_38 = (longlong *)0x0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_60 = (undefined4)local_48;
  uStack_5c = local_48._4_4_;
  uStack_58 = (undefined4)uStack_40;
  uStack_54 = uStack_40._4_4_;
  local_50 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
  }
  uVar4 = FUN_14181c380(param_1,local_28,&local_60);
  FUN_147f98174(param_3,uVar4);
  plVar3 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f9e10a FUN_147f9e10a body=156 status=ok
// SIG undefined FUN_147f9e10a(void)

void FUN_147f9e10a(undefined8 param_1,longlong param_2)

{
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
  FUN_14064b284(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f9e1be FUN_147f9e1be body=141 status=ok
// SIG undefined FUN_147f9e1be(void)

void FUN_147f9e1be(longlong param_1)

{
  longlong *plVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined1 local_28;
  code *local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(param_1 + 0x38) != 0) {
    FUN_140dde623(*(undefined8 *)(param_1 + 0x30));
    *(undefined4 *)(param_1 + 0x38) = 0;
    if (*(int *)(param_1 + 0x3c) != 0) {
      FUN_14181c28a(param_1 + 0x30,0);
    }
    plVar1 = (longlong *)FUN_14064b53c();
    (**(code **)(*plVar1 + 0x40))(plVar1);
    local_18 = &local_30;
    local_28 = 0;
    local_20 = FUN_1438bada8;
    local_30 = param_1;
    FUN_14032f414();
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f9e24c FUN_147f9e24c body=156 status=ok
// SIG undefined FUN_147f9e24c(void)

void FUN_147f9e24c(undefined8 param_1,longlong param_2)

{
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
  FUN_14064b284(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f9e2ea FUN_147f9e2ea body=308 status=ok
// SIG undefined FUN_147f9e2ea(void)

void FUN_147f9e2ea(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  longlong *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong *local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
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
  local_28 = (longlong *)0x0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_50 = (undefined4)local_38;
  uStack_4c = local_38._4_4_;
  uStack_48 = (undefined4)uStack_30;
  uStack_44 = uStack_30._4_4_;
  local_40 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
  }
  FUN_147f9e420(param_1,local_20,&local_50);
  plVar3 = local_28;
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
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f9e420 FUN_147f9e420 body=242 status=ok
// SIG undefined FUN_147f9e420(void)

void FUN_147f9e420(longlong param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  longlong *plVar4;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined1 local_38;
  code *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((longlong)*(int *)(param_1 + 0x38) != 0) {
    uVar3 = 0;
    do {
      if ((*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x20 + uVar3) == param_2) &&
         (*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x28 + uVar3) == *param_3)) {
        if ((int)(uVar3 >> 4) * -0x33333333 != -1) {
          FUN_14064b366(param_1 + 0x30);
          FUN_14064b420(param_1 + 0x30);
          plVar4 = (longlong *)FUN_14064b53c();
          (**(code **)(*plVar4 + 0x40))(plVar4);
          local_28 = &local_40;
          local_38 = 0;
          local_30 = FUN_1438bada8;
          local_40 = param_1;
          FUN_14032f414();
        }
        break;
      }
      uVar3 = uVar3 + 0x50;
    } while ((longlong)*(int *)(param_1 + 0x38) * 0x50 != uVar3);
  }
  puVar2 = (undefined8 *)param_3[2];
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
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f9e528 FUN_147f9e528 body=389 status=ok
// SIG undefined FUN_147f9e528(void)

void FUN_147f9e528(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  uint uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
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
  undefined8 local_58;
  undefined1 uStack_50;
  undefined7 uStack_4f;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  uint uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_38 = DAT_14c8464f0;
  local_48 = (undefined4)DAT_14c8464e0;
  uStack_44 = DAT_14c8464e0._4_4_;
  uStack_40 = (undefined4)DAT_14c8464e8;
  uStack_3c = DAT_14c8464e8._4_4_;
  uStack_30 = uStack_30 & 0xffffff00;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_58 = DAT_14c8464f0;
  local_68 = (undefined4)DAT_14c8464e0;
  uStack_64 = DAT_14c8464e0._4_4_;
  uStack_60 = (undefined4)DAT_14c8464e8;
  uStack_5c = DAT_14c8464e8._4_4_;
  uStack_50 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_98 = CONCAT44(uStack_64,local_68);
  uStack_90 = CONCAT44(uStack_5c,uStack_60);
  uStack_80 = CONCAT71(uStack_4f,uStack_50);
  local_88 = local_58;
  local_b8 = local_48;
  uStack_b4 = uStack_44;
  uStack_b0 = uStack_40;
  uStack_ac = uStack_3c;
  local_a8 = (undefined4)local_38;
  uStack_a4 = local_38._4_4_;
  uStack_a0 = uStack_30;
  uStack_9c = uStack_2c;
  (**(code **)(*param_1 + 0x2a8))(param_1,&local_78);
  *param_3 = local_78;
  param_3[1] = uStack_74;
  param_3[2] = uStack_70;
  param_3[3] = uStack_6c;
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f9e6ae FUN_147f9e6ae body=450 status=ok
// SIG undefined FUN_147f9e6ae(void)

void FUN_147f9e6ae(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  uint uStack_80;
  undefined4 uStack_7c;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  uint uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_38 = DAT_14c8464f0;
  local_48 = (undefined4)DAT_14c8464e0;
  uStack_44 = DAT_14c8464e0._4_4_;
  uStack_40 = (undefined4)DAT_14c8464e8;
  uStack_3c = DAT_14c8464e8._4_4_;
  uStack_30 = uStack_30 & 0xffffff00;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_4c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_98 = local_48;
  uStack_94 = uStack_44;
  uStack_90 = uStack_40;
  uStack_8c = uStack_3c;
  local_88 = (undefined4)local_38;
  uStack_84 = local_38._4_4_;
  uStack_80 = uStack_30;
  uStack_7c = uStack_2c;
  local_a8 = local_4c;
  (**(code **)(*param_1 + 0x2a0))(param_1,&local_70,local_28);
  param_3[4] = local_60;
  param_3[5] = uStack_5c;
  param_3[6] = uStack_58;
  param_3[7] = uStack_54;
  *param_3 = local_70;
  param_3[1] = uStack_6c;
  param_3[2] = uStack_68;
  param_3[3] = uStack_64;
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f9e8b2 FUN_147f9e8b2 body=1867 status=ok
// SIG undefined FUN_147f9e8b2(void)

undefined4 * FUN_147f9e8b2(longlong param_1,undefined4 *param_2,undefined8 param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  double local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(char *)(param_4 + 3) == '\0') {
    uVar14 = *(undefined4 *)param_4;
    uVar15 = *(undefined4 *)((longlong)param_4 + 4);
    uVar3 = *(undefined4 *)(param_4 + 1);
    uVar4 = *(undefined4 *)((longlong)param_4 + 0xc);
    uVar5 = *(undefined4 *)((longlong)param_4 + 0x14);
    uVar6 = *(undefined4 *)(param_4 + 3);
    uVar7 = *(undefined4 *)((longlong)param_4 + 0x1c);
    param_2[4] = *(undefined4 *)(param_4 + 2);
    param_2[5] = uVar5;
    param_2[6] = uVar6;
    param_2[7] = uVar7;
    *param_2 = uVar14;
    param_2[1] = uVar15;
    param_2[2] = uVar3;
    param_2[3] = uVar4;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_a8);
  }
  dVar10 = param_4[2];
  local_58 = dVar10 - *(double *)(param_1 + 0x48);
  dVar11 = param_4[1];
  uStack_60 = dVar11 - *(double *)(param_1 + 0x40);
  local_68 = *param_4 - *(double *)(param_1 + 0x38);
  dVar12 = local_58 * local_58 + local_68 * local_68 + uStack_60 * uStack_60;
  if ((dVar12 != 1.0) || (NAN(dVar12))) {
    if (9.99999993922529e-09 <= dVar12) {
      dVar12 = 1.0 / SQRT(dVar12);
      local_58 = local_58 * dVar12;
      uStack_60 = uStack_60 * dVar12;
      local_68 = local_68 * dVar12;
    }
    else {
      local_58 = DAT_14c8464f0;
      local_68 = DAT_14c8464e0;
      uStack_60 = DAT_14c8464e8;
    }
  }
  *(double *)(param_1 + 0x38) = *param_4;
  *(double *)(param_1 + 0x40) = dVar11;
  *(double *)(param_1 + 0x48) = dVar10;
  switch(*(undefined1 *)(param_1 + 0x28)) {
  case 1:
    dVar11 = (double)(1.0 - *(float *)(param_1 + 0x2c));
    dVar10 = (double)*(float *)(param_1 + 0x2c);
    *(double *)(param_1 + 0x50) = dVar10 * local_68 + dVar11 * *(double *)(param_1 + 0x50);
    *(double *)(param_1 + 0x58) = uStack_60 * dVar10 + *(double *)(param_1 + 0x58) * dVar11;
    *(double *)(param_1 + 0x60) = local_58 * dVar10 + *(double *)(param_1 + 0x60) * dVar11;
    goto LAB_147f9ee09;
  case 2:
    local_88 = *(undefined4 *)(param_1 + 0x2c);
    FUN_140b81d26(&local_80,param_1 + 0x50,&local_68);
    goto LAB_147f9ec80;
  case 3:
    local_88 = *(undefined4 *)(param_1 + 0x2c);
    FUN_1405a186c(&local_80,param_1 + 0x50,&local_68);
LAB_147f9ec80:
    *(undefined8 *)(param_1 + 0x60) = local_70;
LAB_147f9ec8c:
    *(undefined4 *)(param_1 + 0x50) = local_80;
    *(undefined4 *)(param_1 + 0x54) = uStack_7c;
    *(undefined4 *)(param_1 + 0x58) = uStack_78;
    *(undefined4 *)(param_1 + 0x5c) = uStack_74;
    goto LAB_147f9ee09;
  case 4:
    fVar8 = 1.0 - *(float *)(param_1 + 0x2c) * *(float *)(param_1 + 0x2c);
    if (fVar8 < 0.0) {
      fVar8 = sqrtf(fVar8);
    }
    else {
      fVar8 = SQRT(fVar8);
    }
    fVar8 = -(fVar8 + -1.0);
    break;
  case 5:
    fVar8 = *(float *)(param_1 + 0x2c) + -1.0;
    fVar8 = 1.0 - fVar8 * fVar8;
    if (fVar8 < 0.0) {
      fVar8 = sqrtf(fVar8);
    }
    else {
      fVar8 = SQRT(fVar8);
    }
    break;
  case 6:
    fVar8 = *(float *)(param_1 + 0x2c);
    if (0.5 <= fVar8) {
      fVar8 = fVar8 + fVar8 + -1.0 + -1.0;
      fVar8 = 1.0 - fVar8 * fVar8;
      if (fVar8 < 0.0) {
        fVar8 = sqrtf(fVar8);
      }
      else {
        fVar8 = SQRT(fVar8);
      }
      fVar8 = fVar8 + 0.0;
      goto LAB_147f9ef9e;
    }
    fVar8 = 1.0 - (fVar8 + fVar8) * (fVar8 + fVar8);
    if (fVar8 < 0.0) {
      fVar8 = sqrtf(fVar8);
    }
    else {
      fVar8 = SQRT(fVar8);
    }
    fVar8 = 0.0 - (fVar8 + -1.0);
LAB_147f9ef86:
    fVar8 = fVar8 * 0.5;
    goto LAB_147f9efa6;
  case 7:
    fVar8 = powf(*(float *)(param_1 + 0x2c),*(float *)(param_1 + 0x30));
    break;
  case 8:
    fVar8 = powf(1.0 - *(float *)(param_1 + 0x2c),*(float *)(param_1 + 0x30));
    fVar8 = 1.0 - fVar8;
    goto LAB_147f9efa6;
  case 9:
    fVar8 = *(float *)(param_1 + 0x2c);
    if (fVar8 < 0.5) {
      fVar8 = powf(fVar8 + fVar8,*(float *)(param_1 + 0x30));
      fVar8 = fVar8 + 0.0;
      goto LAB_147f9ef86;
    }
    fVar8 = powf(1.0 - (fVar8 + fVar8 + -1.0),*(float *)(param_1 + 0x30));
    fVar8 = 1.0 - fVar8;
LAB_147f9ef9e:
    fVar8 = fVar8 * 0.5 + 0.5;
LAB_147f9efa6:
    dVar11 = (double)fVar8;
    dVar10 = (local_58 - *(double *)(param_1 + 0x60)) * dVar11 + *(double *)(param_1 + 0x60);
    *(double *)(param_1 + 0x50) =
         (local_68 - *(double *)(param_1 + 0x50)) * dVar11 + *(double *)(param_1 + 0x50);
    *(double *)(param_1 + 0x58) =
         (uStack_60 - *(double *)(param_1 + 0x58)) * dVar11 + *(double *)(param_1 + 0x58);
LAB_147f9ee04:
    *(double *)(param_1 + 0x60) = dVar10;
    goto LAB_147f9ee09;
  case 10:
    fVar8 = *(float *)(param_1 + 0x2c);
    dVar1 = 0.0;
    if ((fVar8 != 0.0) || (NAN(fVar8))) {
      fVar8 = (float)exp2f((fVar8 + -1.0) * 10.0);
      dVar1 = (double)fVar8;
    }
    dVar10 = *(double *)(param_1 + 0x60);
    dVar13 = local_58 - dVar10;
    dVar11 = *(double *)(param_1 + 0x50);
    dVar12 = *(double *)(param_1 + 0x58);
    uVar14 = SUB84(dVar12,0);
    uVar15 = (undefined4)((ulonglong)dVar12 >> 0x20);
    dVar12 = uStack_60 - dVar12;
    dVar2 = local_68 - dVar11;
    goto LAB_147f9ede2;
  case 0xb:
    fVar8 = *(float *)(param_1 + 0x2c);
    if ((fVar8 != 1.0) || (NAN(fVar8))) {
      fVar8 = (float)exp2f(fVar8 * -10.0);
      dVar10 = (double)(1.0 - fVar8);
    }
    else {
      dVar10 = 1.0;
    }
    dVar11 = *(double *)(param_1 + 0x60);
    dVar1 = local_58 - dVar11;
    dVar12 = *(double *)(param_1 + 0x50);
    dVar13 = *(double *)(param_1 + 0x58);
    uVar14 = SUB84(dVar13,0);
    uVar15 = (undefined4)((ulonglong)dVar13 >> 0x20);
    dVar13 = uStack_60 - dVar13;
    dVar2 = local_68 - dVar12;
    goto LAB_147f9eec2;
  case 0xc:
    fVar9 = *(float *)(param_1 + 0x2c);
    if (0.5 <= fVar9) {
      fVar9 = fVar9 + fVar9 + -1.0;
      fVar8 = 1.0;
      if ((fVar9 != 1.0) || (NAN(fVar9))) {
        fVar8 = (float)exp2f(fVar9 * -10.0);
        fVar8 = 1.0 - fVar8;
      }
LAB_147f9eda9:
      fVar8 = fVar8 * 0.5 + 0.5;
    }
    else {
      fVar9 = fVar9 + fVar9;
      fVar8 = 0.0;
      if ((fVar9 != 0.0) || (NAN(fVar9))) {
        fVar8 = (float)exp2f((fVar9 + -1.0) * 10.0);
        goto LAB_147f9eace;
      }
    }
    goto LAB_147f9edb1;
  case 0xd:
    fVar8 = cosf(*(float *)(param_1 + 0x2c) * 1.5707964);
    fVar8 = 1.0 - fVar8;
    goto LAB_147f9edb1;
  case 0xe:
    fVar8 = sinf(*(float *)(param_1 + 0x2c) * 1.5707964);
    break;
  case 0xf:
    fVar8 = *(float *)(param_1 + 0x2c);
    if (0.5 <= fVar8) {
      fVar8 = sinf((fVar8 + fVar8 + -1.0) * 1.5707964);
      fVar8 = fVar8 + 0.0;
      goto LAB_147f9eda9;
    }
    fVar8 = cosf((fVar8 + fVar8) * 1.5707964);
    fVar8 = 1.0 - fVar8;
LAB_147f9eace:
    fVar8 = (fVar8 + 0.0) * 0.5;
LAB_147f9edb1:
    dVar10 = *(double *)(param_1 + 0x60);
    dVar13 = local_58 - dVar10;
    dVar11 = *(double *)(param_1 + 0x50);
    dVar12 = *(double *)(param_1 + 0x58);
    uVar14 = SUB84(dVar12,0);
    uVar15 = (undefined4)((ulonglong)dVar12 >> 0x20);
    dVar12 = uStack_60 - dVar12;
    dVar2 = local_68 - dVar11;
    dVar1 = (double)fVar8;
LAB_147f9ede2:
    dVar10 = dVar13 * dVar1 + dVar10;
    *(double *)(param_1 + 0x50) = dVar2 * dVar1 + dVar11;
    *(double *)(param_1 + 0x58) = dVar12 * dVar1 + (double)CONCAT44(uVar15,uVar14);
    goto LAB_147f9ee04;
  default:
    *(double *)(param_1 + 0x60) = local_58;
    local_80 = (undefined4)local_68;
    uStack_7c = local_68._4_4_;
    uStack_78 = (undefined4)uStack_60;
    uStack_74 = uStack_60._4_4_;
    goto LAB_147f9ec8c;
  }
  dVar11 = *(double *)(param_1 + 0x60);
  dVar1 = local_58 - dVar11;
  dVar12 = *(double *)(param_1 + 0x50);
  dVar13 = *(double *)(param_1 + 0x58);
  uVar14 = SUB84(dVar13,0);
  uVar15 = (undefined4)((ulonglong)dVar13 >> 0x20);
  dVar13 = uStack_60 - dVar13;
  dVar2 = local_68 - dVar12;
  dVar10 = (double)fVar8;
LAB_147f9eec2:
  *(double *)(param_1 + 0x50) = dVar2 * dVar10 + dVar12;
  *(double *)(param_1 + 0x58) = dVar13 * dVar10 + (double)CONCAT44(uVar15,uVar14);
  *(double *)(param_1 + 0x60) = dVar1 * dVar10 + dVar11;
LAB_147f9ee09:
  *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_1 + 0x60);
  uVar14 = *(undefined4 *)(param_1 + 0x54);
  uVar15 = *(undefined4 *)(param_1 + 0x58);
  uVar3 = *(undefined4 *)(param_1 + 0x5c);
  *param_2 = *(undefined4 *)(param_1 + 0x50);
  param_2[1] = uVar14;
  param_2[2] = uVar15;
  param_2[3] = uVar3;
  *(undefined1 *)(param_2 + 6) = 3;
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f9f0ca FUN_147f9f0ca body=563 status=ok
// SIG undefined FUN_147f9f0ca(void)

double * FUN_147f9f0ca(longlong param_1,double *param_2,undefined8 param_3,double *param_4,
                      float param_5)

{
  undefined8 *puVar1;
  double dVar2;
  byte bVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  double dVar12;
  float fVar13;
  
  puVar1 = (undefined8 *)(param_1 + 0x30);
  fVar7 = (float)FUN_14014127e(puVar1);
  if ((fVar7 != 0.0) || (NAN(fVar7))) {
    *(float *)(param_1 + 0x54) = *(float *)(param_1 + 0x54) + param_5;
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
  }
  if (0.25 <= param_5) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x40) = DAT_14c8464f0;
    uVar6 = DAT_14c8464e8;
    *puVar1 = DAT_14c8464e0;
    *(undefined8 *)(param_1 + 0x38) = uVar6;
    *(undefined8 *)(param_1 + 0x50) = 0x3c07fcb900000000;
    goto LAB_147f9f1f6;
  }
  if ((*(int *)(param_1 + 0x50) < 1) || (*(float *)(param_1 + 0x54) <= 0.0)) goto LAB_147f9f1f6;
  fVar13 = *(float *)(param_1 + 0x54) / (float)*(int *)(param_1 + 0x50);
  fVar7 = (float)FUN_14014127e(param_4);
  if ((fVar7 != 0.0) || (NAN(fVar7))) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    fVar7 = (float)FUN_14014127e(puVar1);
    dVar2 = *param_4;
    if (((fVar7 == 0.0) && (!NAN(fVar7))) || (fVar13 + fVar13 <= param_5)) {
      dVar12 = param_4[1];
      dVar5 = param_4[2];
    }
    else {
      dVar5 = (double)(param_5 / fVar13);
      dVar2 = dVar2 * dVar5;
      *param_4 = dVar2;
      dVar12 = param_4[1] * dVar5;
      param_4[1] = dVar12;
      dVar5 = dVar5 * param_4[2];
      param_4[2] = dVar5;
    }
    dVar4 = param_4[3];
    *(double *)(param_1 + 0x30) = dVar2;
    *(double *)(param_1 + 0x38) = dVar12;
    *(double *)(param_1 + 0x40) = dVar5;
    *(double *)(param_1 + 0x48) = dVar4;
    goto LAB_147f9f1f6;
  }
  if (fVar13 < *(float *)(param_1 + 0x28) || fVar13 == *(float *)(param_1 + 0x28)) {
    *(undefined8 *)(param_1 + 0x40) = DAT_14c8464f0;
    uVar6 = DAT_14c8464e8;
    *puVar1 = DAT_14c8464e0;
    *(undefined8 *)(param_1 + 0x38) = uVar6;
    *(undefined8 *)(param_1 + 0x50) = 0x3c07fcb900000000;
    fVar7 = 0.0;
  }
  else {
    bVar3 = *(byte *)(param_4 + 3);
    uVar8 = (undefined4)*(undefined8 *)(param_1 + 0x38);
    uVar9 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x38) >> 0x20);
    uVar10 = (undefined4)*(undefined8 *)(param_1 + 0x40);
    uVar11 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x40) >> 0x20);
    if (*(byte *)(param_1 + 0x48) != bVar3) {
      if (bVar3 < 2) {
        uVar8 = 0;
        uVar9 = 0;
LAB_147f9f254:
        uVar10 = 0;
        uVar11 = 0;
      }
      else if (bVar3 == 2) goto LAB_147f9f254;
      *(ulonglong *)(param_1 + 0x38) = CONCAT44(uVar9,uVar8);
      *(ulonglong *)(param_1 + 0x40) = CONCAT44(uVar11,uVar10);
      *(byte *)(param_1 + 0x48) = bVar3;
    }
    dVar2 = *(double *)(param_1 + 0x48);
    dVar12 = (double)(param_5 / fVar13);
    *param_4 = *(double *)(param_1 + 0x30) * dVar12;
    param_4[1] = (double)CONCAT44(uVar9,uVar8) * dVar12;
    param_4[2] = (double)CONCAT44(uVar11,uVar10) * dVar12;
    param_4[3] = dVar2;
    fVar7 = *(float *)(param_1 + 0x28);
  }
  *(float *)(param_1 + 0x28) = fVar7 + param_5;
LAB_147f9f1f6:
  dVar2 = *param_4;
  dVar12 = param_4[1];
  dVar5 = param_4[3];
  param_2[2] = param_4[2];
  param_2[3] = dVar5;
  *param_2 = dVar2;
  param_2[1] = dVar12;
  return param_2;
}



// FUNCTION 147f9f2fe FUN_147f9f2fe body=424 status=ok
// SIG undefined FUN_147f9f2fe(void)

double * FUN_147f9f2fe(longlong param_1,double *param_2,undefined8 param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  double dVar5;
  
  dVar1 = *param_4;
  dVar2 = param_4[1];
  dVar3 = param_4[2];
  cVar4 = *(char *)(param_4 + 3);
  if (cVar4 != '\x01') {
    if (cVar4 != '\x02') {
      if (cVar4 != '\x03') goto LAB_147f9f473;
      dVar5 = *(double *)(param_1 + 0x38);
      if ((dVar5 != 1.0) || (NAN(dVar5))) {
        dVar5 = pow(ABS(dVar3),dVar5);
        dVar3 = dVar5 * (double)(-(ulonglong)(0.0 < dVar3) & 0x3ff0000000000000 |
                                ~-(ulonglong)(0.0 < dVar3) &
                                -(ulonglong)(dVar3 < 0.0) & 0xbff0000000000000);
      }
    }
    dVar5 = *(double *)(param_1 + 0x30);
    if ((dVar5 != 1.0) || (NAN(dVar5))) {
      dVar5 = pow(ABS(dVar2),dVar5);
      dVar2 = dVar5 * (double)(-(ulonglong)(0.0 < dVar2) & 0x3ff0000000000000 |
                              ~-(ulonglong)(0.0 < dVar2) &
                              -(ulonglong)(dVar2 < 0.0) & 0xbff0000000000000);
    }
  }
  dVar5 = *(double *)(param_1 + 0x28);
  if ((dVar5 != 1.0) || (NAN(dVar5))) {
    dVar5 = pow(ABS(dVar1),dVar5);
    dVar1 = dVar5 * (double)(-(ulonglong)(0.0 < dVar1) & 0x3ff0000000000000 |
                            ~-(ulonglong)(0.0 < dVar1) &
                            -(ulonglong)(dVar1 < 0.0) & 0xbff0000000000000);
  }
LAB_147f9f473:
  *param_2 = dVar1;
  param_2[1] = dVar2;
  param_2[2] = dVar3;
  *(undefined1 *)(param_2 + 3) = 3;
  return param_2;
}



// FUNCTION 147f9f4a6 FUN_147f9f4a6 body=211 status=ok
// SIG undefined FUN_147f9f4a6(void)

double * FUN_147f9f4a6(longlong param_1,double *param_2,undefined8 param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  byte bVar4;
  float fVar5;
  
  dVar1 = *param_4;
  dVar2 = param_4[1];
  dVar3 = param_4[2];
  bVar4 = *(byte *)(param_4 + 3);
  if (1 < bVar4) {
    if (bVar4 != 2) {
      if (bVar4 != 3) goto LAB_147f9f53c;
      if (*(longlong *)(param_1 + 0x38) == 0) {
        dVar3 = 0.0;
      }
      else {
        fVar5 = (float)FUN_1449e6cbc(*(longlong *)(param_1 + 0x38),(float)dVar3);
        dVar3 = (double)fVar5;
      }
    }
    if (*(longlong *)(param_1 + 0x30) == 0) {
      dVar2 = 0.0;
    }
    else {
      fVar5 = (float)FUN_1449e6cbc(*(longlong *)(param_1 + 0x30),(float)dVar2);
      dVar2 = (double)fVar5;
    }
  }
  if (*(longlong *)(param_1 + 0x28) == 0) {
    dVar1 = 0.0;
  }
  else {
    fVar5 = (float)FUN_1449e6cbc(*(longlong *)(param_1 + 0x28),(float)dVar1);
    dVar1 = (double)fVar5;
  }
LAB_147f9f53c:
  *param_2 = dVar1;
  param_2[1] = dVar2;
  param_2[2] = dVar3;
  *(undefined1 *)(param_2 + 3) = 3;
  return param_2;
}



// FUNCTION 147f9f5e6 FUN_147f9f5e6 body=267 status=ok
// SIG undefined FUN_147f9f5e6(void)

void FUN_147f9f5e6(undefined8 param_1,undefined4 *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  dVar1 = *param_3;
  dVar2 = param_3[1];
  uVar3 = 0x3f800000;
  uVar4 = uVar3;
  if ((double)((float)(double)(-(ulonglong)(dVar1 < 0.800000011920929) &
                               -(ulonglong)(dVar1 <= -0.949999988079071) & 0xbfb99999a0000000 |
                              ~-(ulonglong)(dVar1 < 0.800000011920929) &
                              (ulonglong)(0.8999999761581421 - dVar1)) + 0.1) < ABS(dVar2)) {
    uVar4 = 0;
  }
  if ((double)((float)(double)(-(ulonglong)(-0.800000011920929 < dVar2) &
                               -(ulonglong)(0.949999988079071 <= dVar2) & 0xbfb99999a0000000 |
                              ~-(ulonglong)(-0.800000011920929 < dVar2) &
                              (ulonglong)(dVar2 + 0.8999999761581421)) + 0.1) < ABS(dVar1)) {
    uVar3 = 0;
  }
  *param_2 = uVar3;
  param_2[1] = uVar4;
  *(undefined8 *)(param_2 + 2) = 0x3f80000000000000;
  return;
}



// FUNCTION 147f9f732 FUN_147f9f732 body=41 status=ok
// SIG undefined FUN_147f9f732(void)

void FUN_147f9f732(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x2a0))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147f9f762 FUN_147f9f762 body=206 status=ok
// SIG undefined FUN_147f9f762(void)

void FUN_147f9f762(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  float fVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined1 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = DAT_14c8464f0;
  local_48 = DAT_14c8464e0;
  uStack_40 = DAT_14c8464e8;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar1 = &local_48;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  fVar2 = (float)FUN_14014127e(puVar1);
  *(bool *)param_3 = *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x28) <= fVar2;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f9f832 FUN_147f9f832 body=385 status=ok
// SIG undefined FUN_147f9f832(void)

void FUN_147f9f832(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  uint uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_38 = DAT_14c8464f0;
  local_48 = (undefined4)DAT_14c8464e0;
  uStack_44 = DAT_14c8464e0._4_4_;
  uStack_40 = (undefined4)DAT_14c8464e8;
  uStack_3c = DAT_14c8464e8._4_4_;
  uStack_30 = uStack_30 & 0xffffff00;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_4c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_78 = local_48;
  uStack_74 = uStack_44;
  uStack_70 = uStack_40;
  uStack_6c = uStack_3c;
  local_68 = (undefined4)local_38;
  uStack_64 = local_38._4_4_;
  uStack_60 = uStack_30;
  uStack_5c = uStack_2c;
  uVar1 = (**(code **)(*param_1 + 0x2a8))(param_1,local_28,&local_78,local_4c);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f9f9fc FUN_147f9f9fc body=704 status=ok
// SIG undefined FUN_147f9f9fc(void)

undefined8 FUN_147f9f9fc(undefined8 param_1,byte param_2)

{
  int iVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 == 0) {
    FUN_140056680(param_1,&DAT_149e01fe8);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
  }
  FUN_140056680(param_1,&DAT_149dfb77a);
  if ((param_2 & 1) != 0) {
    FUN_140056680(local_48,L"Triggered");
    FUN_144a882a8(&local_38,local_48,&DAT_149e06184);
    iVar1 = local_30 + -1;
    if (local_30 == 0) {
      iVar1 = 0;
    }
    FUN_1400020e8(param_1,local_38,iVar1);
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    if (local_48[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((param_2 & 2) != 0) {
    FUN_140056680(local_48,L"Started");
    FUN_144a882a8(&local_38,local_48,&DAT_149e06184);
    iVar1 = local_30 + -1;
    if (local_30 == 0) {
      iVar1 = 0;
    }
    FUN_1400020e8(param_1,local_38,iVar1);
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    if (local_48[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((param_2 & 4) != 0) {
    FUN_140056680(local_48,L"Ongoing");
    FUN_144a882a8(&local_38,local_48,&DAT_149e06184);
    iVar1 = local_30 + -1;
    if (local_30 == 0) {
      iVar1 = 0;
    }
    FUN_1400020e8(param_1,local_38,iVar1);
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    if (local_48[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((param_2 & 8) != 0) {
    FUN_140056680(local_48,L"Canceled");
    FUN_144a882a8(&local_38,local_48,&DAT_149e06184);
    iVar1 = local_30 + -1;
    if (local_30 == 0) {
      iVar1 = 0;
    }
    FUN_1400020e8(param_1,local_38,iVar1);
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    if (local_48[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((param_2 & 0x10) != 0) {
    FUN_140056680(local_48,L"Completed");
    FUN_144a882a8(&local_38,local_48,&DAT_149e06184);
    iVar1 = local_30 + -1;
    if (local_30 == 0) {
      iVar1 = 0;
    }
    FUN_1400020e8(param_1,local_38,iVar1);
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    if (local_48[0] != 0) {
      FUN_1400020a8();
    }
  }
  FUN_140b127b8(param_1,&DAT_149e06184,1,1);
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147f9fcbe FUN_147f9fcbe body=39 status=ok
// SIG undefined FUN_147f9fcbe(void)

char FUN_147f9fcbe(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  float fVar1;
  
  fVar1 = (float)FUN_14014127e(param_3);
  return (*(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x28) <= fVar1) * '\x02';
}



// FUNCTION 147f9fce6 FUN_147f9fce6 body=39 status=ok
// SIG undefined FUN_147f9fce6(void)

char FUN_147f9fce6(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  float fVar1;
  
  fVar1 = (float)FUN_14014127e(param_3);
  return (*(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x28) <= fVar1) * '\x02';
}



// FUNCTION 147f9fd0e FUN_147f9fd0e body=156 status=ok
// SIG undefined FUN_147f9fd0e(void)

ulonglong FUN_147f9fd0e(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  uint3 uVar2;
  char cVar3;
  int iVar4;
  ulonglong uVar5;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  local_28 = param_3[4];
  uStack_24 = param_3[5];
  uStack_20 = param_3[6];
  uStack_1c = param_3[7];
  cVar3 = FUN_140266042();
  if (cVar3 == '\0') {
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x58);
    if (iVar1 < *(int *)(param_1 + 100) || *(int *)(param_1 + 100) == 0) {
      iVar4 = (*(byte *)(param_1 + 0x5c) ^ 1) + iVar1;
      uVar2 = (uint3)((uint)iVar4 >> 8);
      uVar5 = CONCAT71((uint7)uVar2,1);
      if ((float)iVar4 * *(float *)(param_1 + 0x60) < *(float *)(param_1 + 0x50)) {
        *(int *)(param_1 + 0x58) = iVar1 + 1;
        uVar5 = (ulonglong)CONCAT31(uVar2,2);
      }
      goto LAB_147f9fd8e;
    }
  }
  uVar5 = 0;
LAB_147f9fd8e:
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f9fdc4 FUN_147f9fdc4 body=83 status=ok
// SIG undefined FUN_147f9fdc4(void)

void FUN_147f9fdc4(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar1 = *(longlong **)(param_1 + 0x38);
  plVar2 = (longlong *)*param_3;
  if (plVar2 != plVar1) {
    *param_3 = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(param_1 + 0x40);
  return;
}



// FUNCTION 147f9fe18 FUN_147f9fe18 body=238 status=ok
// SIG undefined FUN_147f9fe18(void)

void FUN_147f9fe18(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_78 [32];
  longlong local_58;
  ulonglong uStack_50;
  undefined8 local_48;
  code *local_40;
  undefined8 **local_38;
  longlong *local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = 0;
  uStack_50 = 0;
  local_38 = &local_30;
  local_28 = local_48;
  local_40 = FUN_1438c5c5e;
  local_30 = &local_58;
  FUN_147fa01da(param_1);
  FUN_147f907f4(param_3,&local_58);
  FUN_140dde623(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f9ff08 FUN_147f9ff08 body=194 status=ok
// SIG undefined FUN_147f9ff08(void)

void FUN_147f9ff08(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_98 [32];
  undefined1 local_78 [80];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147f9ffcc(param_1,local_78,local_28);
  FUN_14181bdaa(param_3,local_78);
  FUN_14181bc4c(local_78);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f9ffcc FUN_147f9ffcc body=271 status=ok
// SIG undefined FUN_147f9ffcc(void)

undefined8 FUN_147f9ffcc(undefined8 param_1,undefined8 param_2,code *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_98 [32];
  longlong local_78;
  ulonglong uStack_70;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  longlong local_50;
  code *local_48;
  longlong **local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_60 = (undefined4)DAT_14c966e80;
  uStack_5c = DAT_14c966e80._4_4_;
  uStack_58 = (undefined4)DAT_14c966e88;
  uStack_54 = DAT_14c966e88._4_4_;
  local_50 = DAT_14c966e90;
  if (DAT_14c966e90 != 0) {
    LOCK();
    *(int *)(DAT_14c966e90 + 8) = *(int *)(DAT_14c966e90 + 8) + 1;
    UNLOCK();
  }
  FUN_1409f7bea(param_2,0,&local_60);
  local_38 = &local_78;
  local_78 = 0;
  uStack_70 = 0;
  local_40 = &local_38;
  local_48 = FUN_1438c5c1e;
  FUN_147fa01da(param_1);
  if ((longlong)(int)uStack_70 != 0) {
    lVar2 = (longlong)(int)uStack_70 * 0x50;
    lVar1 = local_78;
    do {
      FUN_14022188c(lVar1,&local_48);
      if (local_48 == param_3) {
        if (lVar1 != 0) {
          FUN_147f98174(param_2,lVar1);
        }
        break;
      }
      lVar1 = lVar1 + 0x50;
      lVar2 = lVar2 + -0x50;
    } while (lVar2 != 0);
  }
  FUN_140dde623(local_78,uStack_70 & 0xffffffff);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147fa0110 FUN_147fa0110 body=147 status=ok
// SIG undefined FUN_147fa0110(void)

void FUN_147fa0110(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong uStack_40;
  code *local_30;
  undefined8 **local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = 0;
  uStack_40 = 0;
  local_28 = &local_20;
  local_30 = FUN_1438c5c1e;
  local_20 = &local_48;
  FUN_147fa01da();
  FUN_147f907f4(param_3,&local_48);
  FUN_140dde623(local_48,uStack_40 & 0xffffffff);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fa01da FUN_147fa01da body=323 status=ok
// SIG undefined FUN_147fa01da(void)

void FUN_147fa01da(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
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
  plVar1 = (longlong *)(param_1 + 0x58);
  lVar2 = param_1 + 0x68;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  uStack_48 = 0;
  uStack_58 = lVar2;
  if (*(int *)(param_1 + 0x80) == 0) {
    iVar5 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    iVar5 = *(int *)(param_1 + 0x80);
  }
  uStack_68 = CONCAT44(uStack_44,uStack_48);
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_80 = (undefined4)local_60;
  uStack_7c = local_60._4_4_;
  uStack_78 = (undefined4)uStack_58;
  uStack_74 = uStack_58._4_4_;
  local_88 = plVar1;
  if ((iStack_4c != iVar5) || (uStack_58 != lVar2)) {
    do {
      lVar6 = *(longlong *)(*local_88 + (longlong)iStack_6c * 0x18);
      if ((lVar6 != 0) && ((longlong)*(int *)(lVar6 + 0x38) != 0)) {
        lVar4 = *(longlong *)(lVar6 + 0x30);
        lVar6 = (longlong)*(int *)(lVar6 + 0x38) * 0x50;
        do {
          lVar3 = FUN_1402218d6(lVar4);
          if (lVar3 != 0) {
            (*(code *)*param_2)(param_2[1],lVar4);
          }
          lVar4 = lVar4 + 0x50;
          lVar6 = lVar6 + -0x50;
        } while (lVar6 != 0);
      }
      local_70 = local_70 & ~uStack_7c;
      FUN_1449c0562(&local_80);
    } while (local_88 != plVar1 || (CONCAT44(uStack_74,uStack_78) != lVar2 || iStack_6c != iVar5));
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fa032c FUN_147fa032c body=3 status=ok
// SIG undefined FUN_147fa032c(void)

undefined4 FUN_147fa032c(undefined4 *param_1)

{
  return *param_1;
}



// FUNCTION 147fa0330 FUN_147fa0330 body=75 status=ok
// SIG undefined FUN_147fa0330(void)

void FUN_147fa0330(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 7;
  param_1[2] = DAT_14c966e80;
  param_1[3] = DAT_14c966e88;
  lVar2 = DAT_14c966e90;
  param_1[4] = DAT_14c966e90;
  if (lVar2 != 0) {
    LOCK();
    piVar1 = (int *)(lVar2 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  param_1[5] = 0;
  param_1[6] = 0;
  *(byte *)(param_1 + 7) = (*(byte *)(param_1 + 7) & 0xfc) + 1;
  return;
}



// FUNCTION 147fa037c FUN_147fa037c body=524 status=ok
// SIG undefined FUN_147fa037c(void)

undefined8 FUN_147fa037c(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined1 auStack_108 [32];
  undefined2 *local_e8;
  undefined2 *local_e0;
  undefined2 *local_d8;
  wchar_t *local_d0;
  wchar_t *local_c0;
  undefined8 local_b8;
  undefined2 *local_b0;
  int local_a8;
  undefined2 *local_a0;
  int local_98;
  undefined2 *local_90;
  int local_88;
  undefined2 *local_80;
  int local_78;
  undefined2 *local_70;
  int local_68;
  undefined8 local_60;
  wchar_t *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  uVar2 = FUN_147f8c9ff();
  lVar1 = *(longlong *)(param_1 + 0x78);
  if (lVar1 == 0) {
    local_c0 = L"NULL INPUT ACTION";
  }
  else {
    local_60 = *(undefined8 *)(lVar1 + 0x18);
    FUN_1400021e4(&local_60,&local_58);
    local_c0 = local_58;
    if (local_50 == 0) {
      local_c0 = L"";
    }
  }
  local_b8 = param_2;
  FUN_147d9305e(param_1 + 0x60,&local_70);
  puVar4 = &DAT_149dfb77a;
  if (local_68 != 0) {
    puVar4 = local_70;
  }
  FUN_14171cb22(param_1 + 0x48,&local_80);
  puVar5 = &DAT_149dfb77a;
  if (local_78 != 0) {
    puVar5 = local_80;
  }
  FUN_14171cb22(param_1 + 0x30,&local_90);
  puVar6 = &DAT_149dfb77a;
  if (local_88 != 0) {
    puVar6 = local_90;
  }
  FUN_1401cfad2(uVar2,&local_a0,*(undefined1 *)(param_1 + 0x28));
  puVar3 = &DAT_149dfb77a;
  if (local_98 != 0) {
    puVar3 = local_a0;
  }
  FUN_1400021e4(param_1,&local_b0);
  uVar2 = local_b8;
  puVar7 = &DAT_149dfb77a;
  if (local_a8 != 0) {
    puVar7 = local_b0;
  }
  local_d0 = local_c0;
  local_e8 = puVar6;
  local_e0 = puVar5;
  local_d8 = puVar4;
  FUN_140002266(local_b8,
                L"Mapping Name: \'%s\'  Slot: \'%s\'  Default Key: \'%s\'  Player Mapped Key: \'%s\'  HardwareDevice:  \'%s\'   AssociatedInputAction: \'%s\'"
                ,puVar7,puVar3);
  if (local_b0 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_a0 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_90 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_80 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_70 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((lVar1 != 0) && (local_58 != (wchar_t *)0x0)) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 147fa058a FUN_147fa058a body=34 status=ok
// SIG undefined FUN_147fa058a(void)

undefined8 * FUN_147fa058a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  
  if (*(longlong *)(param_1 + 0x48) != *(longlong *)(param_1 + 0x30)) {
    *(byte *)(param_1 + 0x29) = *(byte *)(param_1 + 0x29) | 1;
    puVar6 = (undefined8 *)FUN_1413a517a();
    return puVar6;
  }
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  lVar4 = *(longlong *)(param_1 + 0x40);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x50) = uVar3;
  *(longlong *)(param_1 + 0x58) = lVar4;
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
  return (undefined8 *)(param_1 + 0x48);
}



// FUNCTION 147fa05ac FUN_147fa05ac body=16 status=ok
// SIG undefined FUN_147fa05ac(void)

void FUN_147fa05ac(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + 0x70) = param_2[2];
  uVar1 = param_2[1];
  *(undefined8 *)(param_1 + 0x60) = *param_2;
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  return;
}



// FUNCTION 147fa05bc FUN_147fa05bc body=345 status=ok
// SIG undefined FUN_147fa05bc(void)

void FUN_147fa05bc(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_58 [40];
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = FUN_1402218d6(param_2);
  if (lVar3 != 0) {
    FUN_14022188c(param_2,local_30);
  }
  lVar3 = FUN_1402218d6(param_2);
  if (lVar3 == 0) {
    plVar5 = (longlong *)FUN_140e82300();
  }
  else {
    plVar5 = (longlong *)(lVar3 + 0x48);
  }
  plVar1 = (longlong *)*plVar5;
  plVar2 = *(longlong **)(param_1 + 0x18);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x18) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 0x20) = (int)plVar5[1];
  lVar3 = FUN_1402218d6(param_2);
  if (lVar3 == 0) {
    plVar5 = (longlong *)FUN_140e82300();
  }
  else {
    plVar5 = (longlong *)(lVar3 + 0x38);
  }
  plVar1 = (longlong *)*plVar5;
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 8) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 0x10) = (int)plVar5[1];
  lVar3 = *(longlong *)(param_2 + 0x20);
  if (DAT_14c950c29 == '\x01') {
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar3 = *(longlong *)(param_2 + 0x20);
    }
  }
  *(longlong *)(param_1 + 0x78) = lVar3;
  lVar3 = FUN_1402218d6(param_2);
  if (lVar3 != 0) {
    lVar4 = *(longlong *)(lVar3 + 0x28);
    if (DAT_14c950c29 == '\x01') {
      if (lVar4 == 0) {
        lVar4 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar4 = *(longlong *)(lVar3 + 0x28);
      }
    }
    *(longlong *)(param_1 + 0x80) = lVar4;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fa0716 FUN_147fa0716 body=112 status=ok
// SIG undefined FUN_147fa0716(void)

void FUN_147fa0716(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = FUN_1402218d6(param_2);
  if (lVar1 != 0) {
    FUN_14022188c(param_2,local_20);
  }
  FUN_1413a517a(param_1 + 0x30,param_2 + 0x28);
  if (*(longlong *)(param_1 + 0x48) == *(longlong *)(param_1 + 0x30)) {
    *(byte *)(param_1 + 0x29) = *(byte *)(param_1 + 0x29) & 0xfe;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fa0788 FUN_147fa0788 body=78 status=ok
// SIG undefined FUN_147fa0788(void)

undefined8 FUN_147fa0788(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  
  if ((((*param_1 == *param_2) && ((char)param_1[5] == (char)param_2[5])) &&
      (param_2[0xc] == param_1[0xc])) &&
     (((param_2[0xd] == param_1[0xd] &&
       (*(int *)((longlong)param_2 + 0x74) == *(int *)((longlong)param_1 + 0x74))) &&
      (((char)param_2[0xe] == (char)param_1[0xe] && (param_1[9] == param_2[9])))))) {
    uVar1 = CONCAT71((int7)((ulonglong)param_1[6] >> 8),param_1[6] == param_2[6]);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 147fa07d6 FUN_147fa07d6 body=845 status=ok
// SIG undefined FUN_147fa07d6(void)

undefined4 FUN_147fa07d6(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined1 auStack_f8 [40];
  longlong *local_d0;
  longlong *local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  uint uStack_a0;
  uint uStack_9c;
  undefined4 local_98;
  undefined4 local_94;
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  uint uStack_70;
  uint uStack_6c;
  undefined8 local_68;
  longlong local_60;
  uint local_58;
  uint uStack_54;
  uint local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  *(undefined4 *)(param_3 + 1) = 0;
  if (*(int *)((longlong)param_3 + 0xc) < 0) {
    FUN_147fa3102(param_3,0);
  }
  local_d0 = (longlong *)(param_1 + 0x48);
  local_c0 = param_1 + 0x58;
  local_b8 = (longlong *)&DAT_100000000;
  local_a8 = 0xffffffff;
  uStack_a0 = 0;
  local_c8 = param_3;
  uStack_b0 = local_c0;
  if (*(int *)(param_1 + 0x70) == 0) {
    iVar8 = 0;
  }
  else {
    FUN_1449c0562(&local_b8);
    iVar8 = *(int *)(param_1 + 0x70);
  }
  local_78 = local_a8;
  lVar1 = local_78;
  uStack_70 = uStack_a0;
  uStack_6c = uStack_9c;
  local_88 = (undefined4)local_b8;
  uStack_84 = local_b8._4_4_;
  uStack_80 = (undefined4)uStack_b0;
  uStack_7c = uStack_b0._4_4_;
  local_90 = local_d0;
  local_78._4_4_ = (int)((ulonglong)local_a8 >> 0x20);
  if ((local_78._4_4_ != iVar8) || (uStack_b0 != local_c0)) {
    iVar4 = local_78._4_4_;
    local_78 = lVar1;
    do {
      lVar2 = *local_90;
      lVar1 = lVar2 + (longlong)iVar4 * 0x60;
      lVar9 = lVar1 + 0x18;
      local_68 = 0x100000000;
      local_58 = 0xffffffff;
      uStack_54 = 0;
      local_50 = 0;
      local_60 = lVar9;
      if (*(int *)(lVar1 + 0x30) != 0) {
        FUN_1449c0562(&local_68);
      }
      lVar2 = lVar2 + (longlong)iVar4 * 0x60;
      plVar10 = (longlong *)(lVar2 + 8);
      uStack_a0 = local_58;
      uStack_9c = uStack_54;
      local_98 = local_50;
      local_94 = local_4c;
      uStack_b0 = local_68;
      local_a8 = local_60;
      uVar7 = *(uint *)(lVar2 + 0x30);
      local_68 = CONCAT44(1 << ((byte)uVar7 & 0x1f),(int)uVar7 >> 5);
      _local_58 = CONCAT44(uVar7,-1 << ((byte)uVar7 & 0x1f));
      local_50 = uVar7 & 0xffffffe0;
      local_b8 = plVar10;
      local_60 = lVar9;
      if (*(uint *)(lVar2 + 0x30) != uVar7) {
        FUN_1449c0562(&local_68);
        uVar7 = uStack_54;
      }
      lVar1 = local_60;
      if ((local_b8 != plVar10 || local_a8 != local_60) || uStack_9c != uVar7) {
        do {
          plVar3 = local_c8;
          lVar2 = *local_b8;
          lVar9 = (longlong)(int)uStack_9c * 0x90;
          plVar6 = (longlong *)(lVar2 + lVar9 + 0x48);
          plVar5 = (longlong *)(lVar2 + lVar9 + 0x30);
          if (*plVar6 != *(longlong *)(lVar2 + lVar9 + 0x30)) {
            plVar5 = plVar6;
          }
          if (*plVar5 == *param_2) {
            iVar4 = (int)local_c8[1];
            *(uint *)(local_c8 + 1) = iVar4 + 1U;
            if (*(uint *)((longlong)local_c8 + 0xc) < iVar4 + 1U) {
              FUN_147fa3162(local_c8,iVar4);
            }
            *(longlong *)(*plVar3 + (longlong)iVar4 * 8) = lVar2 + lVar9;
            break;
          }
          uStack_a0 = uStack_a0 & ~uStack_b0._4_4_;
          FUN_1449c0562(&uStack_b0);
        } while (local_b8 != plVar10 || (local_a8 != lVar1 || uStack_9c != uVar7));
      }
      local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
      FUN_1449c0562(&local_88);
      iVar4 = local_78._4_4_;
      lVar1 = local_78;
    } while (local_90 != local_d0 ||
             (CONCAT44(uStack_7c,uStack_80) != local_c0 || local_78._4_4_ != iVar8));
  }
  local_78 = lVar1;
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (int)local_c8[1];
}



// FUNCTION 147fa0b24 FUN_147fa0b24 body=68 status=ok
// SIG undefined FUN_147fa0b24(void)

void FUN_147fa0b24(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)*param_2;
  plVar2 = *(longlong **)(param_1 + 0x38);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x38) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 0x40) = (int)param_2[1];
  return;
}



// FUNCTION 147fa0b68 FUN_147fa0b68 body=5 status=ok
// SIG undefined FUN_147fa0b68(void)

longlong FUN_147fa0b68(longlong param_1)

{
  return param_1 + 0x38;
}



// FUNCTION 147fa0b6e FUN_147fa0b6e body=294 status=ok
// SIG undefined FUN_147fa0b6e(void)

void FUN_147fa0b6e(void)

{
  longlong *plVar1;
  byte *pbVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined4 local_68;
  uint uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar6 = (longlong *)FUN_14107a796();
  if (plVar6 != (longlong *)0x0) {
    plVar1 = plVar6 + 2;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    uStack_30 = 0;
    uStack_40 = plVar1;
    if ((int)plVar6[5] == 0) {
      iVar8 = 0;
    }
    else {
      FUN_1449c0562(&local_48);
      iVar8 = (int)plVar6[5];
    }
    uStack_50 = CONCAT44(uStack_2c,uStack_30);
    local_58 = local_38;
    uVar4 = local_58;
    local_68 = (undefined4)local_48;
    uStack_64 = local_48._4_4_;
    uStack_60 = (undefined4)uStack_40;
    uStack_5c = uStack_40._4_4_;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    iVar5 = local_58._4_4_;
    local_70 = plVar6;
    if ((local_58._4_4_ != iVar8) || (local_58 = uVar4, uStack_40 != plVar1)) {
      do {
        local_58 = uVar4;
        lVar3 = *local_70;
        lVar7 = (longlong)iVar5 * 0x90;
        if (*(longlong *)(lVar3 + 0x48 + lVar7) != *(longlong *)(lVar3 + 0x30 + lVar7)) {
          pbVar2 = (byte *)(lVar3 + lVar7 + 0x29);
          *pbVar2 = *pbVar2 | 1;
        }
        FUN_1413a517a(lVar3 + lVar7 + 0x48,lVar3 + lVar7 + 0x30);
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~uStack_64);
        FUN_1449c0562(&local_68);
        iVar5 = local_58._4_4_;
        uVar4 = local_58;
      } while (local_70 != plVar6 ||
               ((longlong *)CONCAT44(uStack_5c,uStack_60) != plVar1 || local_58._4_4_ != iVar8));
    }
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fa0c96 FUN_147fa0c96 body=1018 status=ok
// SIG undefined FUN_147fa0c96(void)

undefined8 FUN_147fa0c96(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  undefined1 auStack_918 [40];
  longlong *local_8f0;
  longlong local_8e8;
  undefined8 local_8e0;
  undefined8 local_8d8;
  undefined8 uStack_8d0;
  longlong local_8c8;
  uint uStack_8c0;
  uint uStack_8bc;
  undefined4 local_8b8;
  undefined4 local_8b4;
  longlong *local_8b0;
  int local_8a8;
  uint uStack_8a4;
  undefined4 uStack_8a0;
  undefined4 uStack_89c;
  undefined8 local_898;
  uint uStack_890;
  uint uStack_88c;
  undefined8 local_888;
  longlong local_880;
  uint local_878;
  uint uStack_874;
  uint local_870;
  undefined4 local_86c;
  undefined2 *local_868;
  undefined2 *local_860;
  ulonglong *local_858;
  char local_850;
  undefined2 local_848 [1024];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_918;
  local_868 = local_848;
  local_850 = '\0';
  local_858 = &local_48;
  iVar6 = *(int *)(param_1 + 0x50);
  iVar3 = *(int *)(param_1 + 0x7c);
  local_860 = local_868;
  FUN_1400021e4(param_1 + 0x28,&local_8b0);
  plVar7 = local_8b0;
  if (local_8a8 == 0) {
    plVar7 = (longlong *)&DAT_149dfb77a;
  }
  FUN_140212e80(&local_868,L"Key Profile \'%s\' has %d key mappings\n",plVar7,iVar6 - iVar3);
  if (local_8b0 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  local_8f0 = (longlong *)(param_1 + 0x48);
  local_8e8 = param_1 + 0x58;
  local_8d8 = (longlong *)&DAT_100000000;
  local_8c8 = 0xffffffff;
  uStack_8c0 = 0;
  local_8e0 = param_2;
  uStack_8d0 = local_8e8;
  if (*(int *)(param_1 + 0x70) == 0) {
    iVar6 = 0;
  }
  else {
    FUN_1449c0562(&local_8d8);
    iVar6 = *(int *)(param_1 + 0x70);
  }
  local_898 = local_8c8;
  lVar5 = local_898;
  uStack_890 = uStack_8c0;
  uStack_88c = uStack_8bc;
  local_8a8 = (int)local_8d8;
  uStack_8a4 = local_8d8._4_4_;
  uStack_8a0 = (int)uStack_8d0;
  uStack_89c = uStack_8d0._4_4_;
  local_8b0 = local_8f0;
  local_898._4_4_ = (int)((ulonglong)local_8c8 >> 0x20);
  if ((local_898._4_4_ != iVar6) || (uStack_8d0 != local_8e8)) {
    iVar3 = local_898._4_4_;
    local_898 = lVar5;
    do {
      lVar5 = (longlong)iVar3 * 0x60 + *local_8b0;
      FUN_1400021e4(lVar5,&local_8d8);
      iVar3 = (int)uStack_8d0 + -1;
      if ((int)uStack_8d0 == 0) {
        iVar3 = 0;
      }
      FUN_1449668a2(&local_868,local_8d8,iVar3);
      if (local_8d8 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      lVar1 = lVar5 + 0x18;
      local_888 = 0x100000000;
      local_878 = 0xffffffff;
      uStack_874 = 0;
      local_870 = 0;
      local_880 = lVar1;
      if (*(int *)(lVar5 + 0x30) != 0) {
        FUN_1449c0562(&local_888);
      }
      plVar7 = (longlong *)(lVar5 + 8);
      uStack_8c0 = local_878;
      uStack_8bc = uStack_874;
      local_8b8 = local_870;
      local_8b4 = local_86c;
      uStack_8d0 = local_888;
      local_8c8 = local_880;
      uVar4 = *(uint *)(lVar5 + 0x30);
      local_888 = CONCAT44(1 << ((byte)uVar4 & 0x1f),(int)uVar4 >> 5);
      _local_878 = CONCAT44(uVar4,-1 << ((byte)uVar4 & 0x1f));
      local_870 = uVar4 & 0xffffffe0;
      local_8d8 = plVar7;
      local_880 = lVar1;
      if (*(uint *)(lVar5 + 0x30) != uVar4) {
        FUN_1449c0562(&local_888);
        uVar4 = uStack_874;
      }
      lVar5 = local_880;
      if ((local_8d8 != plVar7 || local_8c8 != local_880) || uStack_8bc != uVar4) {
        do {
          FUN_147fa037c((longlong)(int)uStack_8bc * 0x90 + *local_8d8,&local_888);
          iVar3 = (int)local_880 + -1;
          if ((int)local_880 == 0) {
            iVar3 = 0;
          }
          FUN_1449668a2(&local_868,local_888,iVar3);
          if (local_888 != 0) {
            FUN_1400020a8();
          }
          FUN_146923434(&local_868,&DAT_14acdc220);
          uStack_8c0 = uStack_8c0 & ~uStack_8d0._4_4_;
          FUN_1449c0562(&uStack_8d0);
        } while (local_8d8 != plVar7 || (local_8c8 != lVar5 || uStack_8bc != uVar4));
      }
      local_898 = CONCAT44(local_898._4_4_,(uint)local_898 & ~uStack_8a4);
      FUN_1449c0562(&local_8a8);
      iVar3 = local_898._4_4_;
      lVar5 = local_898;
    } while (local_8b0 != local_8f0 ||
             (CONCAT44(uStack_89c,uStack_8a0) != local_8e8 || local_898._4_4_ != iVar6));
  }
  local_898 = lVar5;
  uVar2 = local_8e0;
  *local_860 = 0;
  FUN_140056680(local_8e0,local_868);
  if (local_850 == '\x01') {
    FUN_1400020a8(local_868);
  }
  if ((local_48 ^ (ulonglong)auStack_918) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 147fa1092 FUN_147fa1092 body=802 status=ok
// SIG undefined FUN_147fa1092(void)

undefined4 FUN_147fa1092(longlong param_1,longlong *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined1 auStack_e8 [32];
  longlong *local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  uint uStack_a0;
  uint uStack_9c;
  undefined4 local_98;
  undefined4 local_94;
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  uint uStack_70;
  uint uStack_6c;
  undefined8 local_68;
  longlong local_60;
  uint local_58;
  uint uStack_54;
  uint local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  *(undefined4 *)(param_3 + 1) = 0;
  if (*(int *)((longlong)param_3 + 0xc) < 0) {
    FUN_1402191ca(param_3,0);
  }
  local_c8 = (longlong *)(param_1 + 0x48);
  local_c0 = param_1 + 0x58;
  local_b8 = (longlong *)&DAT_100000000;
  local_a8 = 0xffffffff;
  uStack_a0 = 0;
  uStack_b0 = local_c0;
  if (*(int *)(param_1 + 0x70) == 0) {
    iVar6 = 0;
  }
  else {
    FUN_1449c0562(&local_b8);
    iVar6 = *(int *)(param_1 + 0x70);
  }
  local_78 = local_a8;
  lVar2 = local_78;
  uStack_70 = uStack_a0;
  uStack_6c = uStack_9c;
  local_88 = (undefined4)local_b8;
  uStack_84 = local_b8._4_4_;
  uStack_80 = (undefined4)uStack_b0;
  uStack_7c = uStack_b0._4_4_;
  local_90 = local_c8;
  local_78._4_4_ = (int)((ulonglong)local_a8 >> 0x20);
  if ((local_78._4_4_ != iVar6) || (uStack_b0 != local_c0)) {
    iVar3 = local_78._4_4_;
    local_78 = lVar2;
    do {
      lVar2 = *local_90;
      lVar8 = (longlong)iVar3 * 0x60;
      lVar9 = lVar2 + lVar8 + 0x18;
      local_68 = 0x100000000;
      local_58 = 0xffffffff;
      uStack_54 = 0;
      local_50 = 0;
      local_60 = lVar9;
      if (*(int *)(lVar2 + lVar8 + 0x30) != 0) {
        FUN_1449c0562(&local_68);
      }
      puVar1 = (undefined8 *)(lVar2 + lVar8);
      plVar10 = (longlong *)(lVar2 + lVar8 + 8);
      uStack_a0 = local_58;
      uStack_9c = uStack_54;
      local_98 = local_50;
      local_94 = local_4c;
      uStack_b0 = local_68;
      local_a8 = local_60;
      uVar7 = *(uint *)(puVar1 + 6);
      local_68 = CONCAT44(1 << ((byte)uVar7 & 0x1f),(int)uVar7 >> 5);
      _local_58 = CONCAT44(uVar7,-1 << ((byte)uVar7 & 0x1f));
      local_50 = uVar7 & 0xffffffe0;
      local_b8 = plVar10;
      local_60 = lVar9;
      if (*(uint *)(puVar1 + 6) != uVar7) {
        FUN_1449c0562(&local_68);
        uVar7 = uStack_54;
      }
      lVar2 = local_60;
      if ((local_b8 != plVar10 || local_a8 != local_60) || uStack_9c != uVar7) {
        do {
          lVar8 = *local_b8 + (longlong)(int)uStack_9c * 0x90;
          plVar4 = (longlong *)(lVar8 + 0x48);
          plVar5 = (longlong *)(*local_b8 + (longlong)(int)uStack_9c * 0x90 + 0x30);
          if (*plVar4 != *(longlong *)(lVar8 + 0x30)) {
            plVar5 = plVar4;
          }
          if (*plVar5 == *param_2) {
            iVar3 = (int)param_3[1];
            *(uint *)(param_3 + 1) = iVar3 + 1U;
            if (*(uint *)((longlong)param_3 + 0xc) < iVar3 + 1U) {
              FUN_1446f84a2(param_3,iVar3);
            }
            *(undefined8 *)(*param_3 + (longlong)iVar3 * 8) = *puVar1;
            break;
          }
          uStack_a0 = uStack_a0 & ~uStack_b0._4_4_;
          FUN_1449c0562(&uStack_b0);
        } while (local_b8 != plVar10 || (local_a8 != lVar2 || uStack_9c != uVar7));
      }
      local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
      FUN_1449c0562(&local_88);
      iVar3 = local_78._4_4_;
      lVar2 = local_78;
    } while (local_90 != local_c8 ||
             (CONCAT44(uStack_7c,uStack_80) != local_c0 || local_78._4_4_ != iVar6));
  }
  local_78 = lVar2;
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (int)param_3[1];
}



// FUNCTION 147fa13b6 FUN_147fa13b6 body=99 status=ok
// SIG undefined FUN_147fa13b6(void)

void FUN_147fa13b6(undefined8 param_1,undefined8 param_2)

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



// FUNCTION 147fa141a FUN_147fa141a body=489 status=ok
// SIG undefined FUN_147fa141a(void)

longlong FUN_147fa141a(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
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
  uVar4 = local_60;
  if (*(int *)(param_1 + 0x50) != *(int *)(param_1 + 0x7c)) {
    lVar2 = *param_2;
    uVar3 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar8 = (uint)lVar2 & 0xffff;
    lVar5 = param_1 + 0x80;
    if (*(longlong *)(param_1 + 0x88) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x88);
    }
    iVar9 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x90) - 1U &
                             (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar8) +
                             (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar8 >> 4)) * 4);
    if (iVar9 != -1) {
      lVar5 = 0;
      do {
        lVar1 = *(longlong *)(param_1 + 0x48) + (longlong)iVar9 * 0x60;
        if (*(longlong *)(*(longlong *)(param_1 + 0x48) + (longlong)iVar9 * 0x60) == lVar2) {
          plVar7 = (longlong *)(lVar1 + 8);
          iVar9 = 0;
          if (plVar7 == (longlong *)0x0 || lVar1 == 0) goto LAB_147fa143c;
          lVar2 = lVar1 + 0x18;
          local_50 = 0x100000000;
          local_40 = 0xffffffff;
          local_38 = 0;
          local_48 = lVar2;
          if (*(int *)(lVar1 + 0x30) != 0) {
            FUN_1449c0562(&local_50);
            iVar9 = *(int *)(lVar1 + 0x30);
          }
          local_70 = local_50;
          local_68 = local_48;
          local_60 = local_40;
          uVar4 = local_60;
          local_58 = local_38;
          local_54 = local_34;
          local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
          local_78 = plVar7;
          if ((local_60._4_4_ == iVar9) && (local_48 == lVar2)) goto LAB_147fa143c;
          iVar6 = local_60._4_4_;
          local_60 = uVar4;
          goto LAB_147fa159c;
        }
        iVar9 = *(int *)(lVar1 + 0x58);
      } while (iVar9 != -1);
      goto LAB_147fa143e;
    }
  }
  goto LAB_147fa143c;
  while( true ) {
    local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
    FUN_1449c0562(&local_70);
    iVar6 = local_60._4_4_;
    uVar4 = local_60;
    if (local_78 == plVar7 && (local_68 == lVar2 && local_60._4_4_ == iVar9)) break;
LAB_147fa159c:
    if ((*(char *)(*local_78 + 0x28 + (longlong)iVar6 * 0x90) == (char)param_2[1]) &&
       (lVar5 = *local_78 + (longlong)iVar6 * 0x90, *(longlong *)(lVar5 + 0x68) == param_2[5]))
    goto LAB_147fa143e;
  }
LAB_147fa143c:
  local_60 = uVar4;
  lVar5 = 0;
LAB_147fa143e:
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar5;
}



// FUNCTION 147fa1604 FUN_147fa1604 body=47 status=ok
// SIG undefined FUN_147fa1604(void)

void FUN_147fa1604(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = (undefined *)(**(code **)(*param_1 + 0x2d8))(param_1,param_3);
  puVar2 = &DAT_14cb276f0;
  if (puVar1 != (undefined *)0x0) {
    puVar2 = puVar1;
  }
  FUN_147f9717c(param_2,puVar2);
  return;
}



// FUNCTION 147fa1642 FUN_147fa1642 body=62 status=ok
// SIG undefined FUN_147fa1642(void)

void FUN_147fa1642(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147fa1680 FUN_147fa1680 body=127 status=ok
// SIG undefined FUN_147fa1680(void)

void FUN_147fa1680(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined1 auStack_48 [40];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = (longlong *)(**(code **)(*param_1 + 800))();
  if (plVar1 == (longlong *)0x0) {
    local_20 = DAT_14cb276b8;
    FUN_140608954(param_3);
  }
  else {
    (**(code **)(*plVar1 + 0x2e0))(plVar1);
    local_20 = param_1;
    FUN_1447cd2ec(param_1 + 6);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fa1702 FUN_147fa1702 body=270 status=ok
// SIG undefined FUN_147fa1702(void)

longlong FUN_147fa1702(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  uint local_60;
  int iStack_5c;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  uint local_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x2f8))();
  plVar1 = plVar2 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  uStack_38 = 0;
  uStack_48 = plVar1;
  if ((int)plVar2[5] == 0) {
    iVar4 = 0;
  }
  else {
    FUN_1449c0562(&local_50);
    iVar4 = (int)plVar2[5];
  }
  uStack_58 = CONCAT44(uStack_34,uStack_38);
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_70 = (undefined4)local_50;
  uStack_6c = local_50._4_4_;
  uStack_68 = (undefined4)uStack_48;
  uStack_64 = uStack_48._4_4_;
  local_78 = plVar2;
  if ((iStack_3c != iVar4) || (uStack_48 != plVar1)) {
    do {
      lVar3 = *(longlong *)(*local_78 + 0x78 + (longlong)iStack_5c * 0x90);
      if (lVar3 != 0) goto LAB_147fa1796;
      local_60 = local_60 & ~uStack_6c;
      FUN_1449c0562(&local_70);
    } while (local_78 != plVar2 ||
             ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || iStack_5c != iVar4));
  }
  lVar3 = 0;
LAB_147fa1796:
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3;
}



// FUNCTION 147fa1818 FUN_147fa1818 body=261 status=ok
// SIG undefined FUN_147fa1818(void)

undefined8 FUN_147fa1818(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  uint local_60;
  int iStack_5c;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  uint local_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_2 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  uStack_38 = 0;
  uStack_48 = plVar1;
  if ((int)param_2[5] == 0) {
    iVar2 = 0;
  }
  else {
    FUN_1449c0562(&local_50);
    iVar2 = (int)param_2[5];
  }
  uStack_58 = CONCAT44(uStack_34,uStack_38);
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_70 = (undefined4)local_50;
  uStack_6c = local_50._4_4_;
  uStack_68 = (undefined4)uStack_48;
  uStack_64 = uStack_48._4_4_;
  local_78 = param_2;
  if ((iStack_3c != iVar2) || (uStack_48 != plVar1)) {
    do {
      (**(code **)(*param_1 + 0x328))
                (param_1,*(undefined8 *)(*local_78 + (longlong)iStack_5c * 0x10));
      local_60 = local_60 & ~uStack_6c;
      FUN_1449c0562(&local_70);
    } while (local_78 != param_2 ||
             ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || iStack_5c != iVar2));
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fa191e FUN_147fa191e body=100 status=ok
// SIG undefined FUN_147fa191e(void)

undefined8 FUN_147fa191e(longlong param_1,longlong param_2)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  FUN_147fa1984(param_1 + 0xd0,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fa1984 FUN_147fa1984 body=311 status=ok
// SIG undefined FUN_147fa1984(void)

void FUN_147fa1984(longlong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  ulonglong *puVar8;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar6 = *param_2;
    if ((uVar6 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(uVar6);
    }
    uVar3 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    uVar6 = (longlong)(int)(uVar3 >> 0x10 ^ uVar3) & (longlong)(int)param_1[9] - 1U;
    iVar5 = *(int *)((longlong)plVar4 + uVar6 * 4);
    if (iVar5 != -1) {
      puVar8 = (ulonglong *)((longlong)plVar4 + uVar6 * 4);
      bVar2 = DAT_14c950c29;
      do {
        puVar7 = (ulonglong *)((longlong)iVar5 * 0x10 + *param_1);
        uVar6 = *param_2;
        if ((uVar6 != 0 & bVar2) == 1) {
          FUN_1456cec3c(uVar6);
          bVar2 = DAT_14c950c29;
        }
        uVar1 = *puVar7;
        if (((bVar2 & 1) != 0) && (uVar1 != 0)) {
          FUN_1456cec3c(uVar1);
          bVar2 = DAT_14c950c29;
        }
        if ((uVar6 != 0 & bVar2) == 1) {
          FUN_1456cec3c(uVar6);
          bVar2 = DAT_14c950c29;
        }
        if (uVar1 == uVar6) {
          FUN_147fa412c(param_1,(int)*puVar8);
          return;
        }
        iVar5 = (int)puVar7[1];
        puVar8 = puVar7 + 1;
      } while (iVar5 != -1);
    }
  }
  return;
}



// FUNCTION 147fa1abc FUN_147fa1abc body=281 status=ok
// SIG undefined FUN_147fa1abc(void)

byte FUN_147fa1abc(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
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
  plVar1 = param_2 + 2;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  uStack_40 = 0;
  uStack_50 = plVar1;
  if ((int)param_2[5] == 0) {
    iVar4 = 0;
  }
  else {
    FUN_1449c0562(&local_58);
    iVar4 = (int)param_2[5];
  }
  uStack_60 = CONCAT44(uStack_3c,uStack_40);
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_78 = (undefined4)local_58;
  uStack_74 = local_58._4_4_;
  uStack_70 = (undefined4)uStack_50;
  uStack_6c = uStack_50._4_4_;
  local_80 = param_2;
  if ((iStack_44 == iVar4) && (uStack_50 == plVar1)) {
    bVar3 = 0;
  }
  else {
    bVar3 = 0;
    do {
      bVar2 = (**(code **)(*param_1 + 0x330))
                        (param_1,*(undefined8 *)(*local_80 + (longlong)iStack_64 * 0x10));
      bVar3 = bVar3 | bVar2;
      local_68 = local_68 & ~uStack_74;
      FUN_1449c0562(&local_78);
    } while (local_80 != param_2 ||
             ((longlong *)CONCAT44(uStack_6c,uStack_70) != plVar1 || iStack_64 != iVar4));
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return bVar3 & 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fa1bd6 FUN_147fa1bd6 body=180 status=ok
// SIG undefined FUN_147fa1bd6(void)

bool FUN_147fa1bd6(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  if (param_2 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(param_2);
  }
  if ((param_2 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(param_2);
  }
  uVar1 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  iVar2 = FUN_141422a5a(param_1 + 0xd0,uVar1 >> 0x10 ^ uVar1,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return iVar2 != -1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fa1ca2 FUN_147fa1ca2 body=58 status=ok
// SIG undefined FUN_147fa1ca2(void)

float * FUN_147fa1ca2(undefined8 param_1,float *param_2,undefined8 param_3,undefined8 param_4)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)FUN_147fa4186(param_4);
  fVar2 = 1.0;
  if (fVar1 <= 1.0) {
    fVar2 = fVar1;
  }
  *param_2 = fVar2;
  param_2[1] = fVar2;
  param_2[2] = fVar2;
  param_2[3] = 1.0;
  return param_2;
}



// FUNCTION 147fa1cee FUN_147fa1cee body=64 status=ok
// SIG undefined FUN_147fa1cee(void)

undefined8 * FUN_147fa1cee(longlong param_1,undefined8 *param_2)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0x50);
  if ((fVar1 != 0.0) || (NAN(fVar1))) {
    FUN_140002266(param_2,L"Held:%.2f",(double)fVar1);
  }
  else {
    *param_2 = 0;
    param_2[1] = 0;
  }
  return param_2;
}



// FUNCTION 147fa1d36 FUN_147fa1d36 body=68 status=ok
// SIG undefined FUN_147fa1d36(void)

undefined8 * FUN_147fa1d36(longlong param_1,undefined8 *param_2)

{
  float fVar1;
  
  fVar1 = (float)FUN_14014127e(param_1 + 0x30);
  if (*(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x28) <= fVar1) {
    FUN_140056680(param_2,L"Pressed:Held");
  }
  else {
    *param_2 = 0;
    param_2[1] = 0;
  }
  return param_2;
}



// FUNCTION 147fa1d7e FUN_147fa1d7e body=68 status=ok
// SIG undefined FUN_147fa1d7e(void)

undefined8 * FUN_147fa1d7e(longlong param_1,undefined8 *param_2)

{
  float fVar1;
  
  fVar1 = (float)FUN_14014127e(param_1 + 0x30);
  if (*(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x28) <= fVar1) {
    FUN_140056680(param_2,L"Released:Held");
  }
  else {
    *param_2 = 0;
    param_2[1] = 0;
  }
  return param_2;
}



// FUNCTION 147fa1dc6 FUN_147fa1dc6 body=74 status=ok
// SIG undefined FUN_147fa1dc6(void)

undefined8 * FUN_147fa1dc6(longlong param_1,undefined8 *param_2)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0x50);
  if ((fVar1 != 0.0) || (NAN(fVar1))) {
    FUN_140002266(param_2,L"Hold:%.2f/%.2f",(double)fVar1,(double)*(float *)(param_1 + 0x5c));
  }
  else {
    *param_2 = 0;
    param_2[1] = 0;
  }
  return param_2;
}



// FUNCTION 147fa1e14 FUN_147fa1e14 body=104 status=ok
// SIG undefined FUN_147fa1e14(void)

undefined8 * FUN_147fa1e14(longlong param_1,undefined8 *param_2)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0x50);
  if ((fVar1 != 0.0) || (NAN(fVar1))) {
    FUN_140002266(param_2,L"Triggers:%d/%d, Interval:%.2f/%.2f",*(int *)(param_1 + 0x58),
                  *(undefined4 *)(param_1 + 100),
                  (double)(fVar1 / ((float)(*(int *)(param_1 + 0x58) + 1) *
                                   *(float *)(param_1 + 0x60))),(double)*(float *)(param_1 + 0x60));
  }
  else {
    *param_2 = 0;
    param_2[1] = 0;
  }
  return param_2;
}



// FUNCTION 147fa1ee0 FUN_147fa1ee0 body=48 status=ok
// SIG undefined FUN_147fa1ee0(void)

void FUN_147fa1ee0(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x20) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147fa1f26 FUN_147fa1f26 body=104 status=ok
// SIG undefined FUN_147fa1f26(void)

undefined1 FUN_147fa1f26(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  
  if (param_4 != 0) {
    lVar10 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + lVar10);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      uVar7 = puVar1[5];
      uVar8 = puVar1[6];
      uVar9 = puVar1[7];
      puVar2 = (undefined4 *)(param_2 + lVar10);
      puVar2[4] = puVar1[4];
      puVar2[5] = uVar7;
      puVar2[6] = uVar8;
      puVar2[7] = uVar9;
      *puVar2 = uVar3;
      puVar2[1] = uVar4;
      puVar2[2] = uVar5;
      puVar2[3] = uVar6;
      FUN_147f981f8();
      FUN_147f98248(param_2 + lVar10 + 0x30,param_3 + lVar10 + 0x30);
      lVar10 = lVar10 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147fa1fb6 FUN_147fa1fb6 body=59 status=ok
// SIG undefined FUN_147fa1fb6(void)

undefined8 FUN_147fa1fb6(longlong *param_1)

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



// FUNCTION 147fa2054 FUN_147fa2054 body=52 status=ok
// SIG undefined FUN_147fa2054(void)

void FUN_147fa2054(longlong param_1)

{
  if (*(char *)(param_1 + 0x40) == '\x01') {
    if (*(longlong *)(param_1 + 0x30) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1 + 0x20) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x40) = 0;
  }
  return;
}



// FUNCTION 147fa20a4 FUN_147fa20a4 body=44 status=ok
// SIG undefined FUN_147fa20a4(void)

void FUN_147fa20a4(undefined8 param_1,longlong *param_2)

{
  FUN_144a65a1e(*param_2,(int)param_2[1]);
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}


