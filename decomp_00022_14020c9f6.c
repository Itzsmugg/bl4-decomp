// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14020c9f6 FUN_14020c9f6 body=29 status=ok
// SIG undefined FUN_14020c9f6(void)

undefined8 FUN_14020c9f6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14020ca14 FUN_14020ca14 body=2787 status=ok
// SIG undefined FUN_14020ca14(void)

void FUN_14020ca14(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  uint uVar2;
  double _X;
  double _X_00;
  double _X_01;
  double _X_02;
  double _X_03;
  double _X_04;
  double _X_05;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  DWORD DVar10;
  DWORD DVar11;
  longlong lVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined *puVar15;
  undefined4 *puVar16;
  uint *puVar17;
  longlong *plVar18;
  longlong lVar19;
  undefined ***pppuVar20;
  uint *puVar21;
  longlong lVar22;
  longlong **pplVar23;
  code **ppcVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  char cVar27;
  ulonglong *puVar28;
  ulonglong uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined1 auStack_308 [32];
  code **local_2e8;
  longlong *local_2e0;
  ulonglong *local_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  longlong local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 local_248 [12];
  longlong *local_1e8;
  longlong local_1e0;
  undefined8 uStack_1d8;
  code *local_168 [2];
  undefined ***local_158;
  undefined **local_148;
  longlong *local_140;
  longlong local_138;
  ulonglong uStack_130;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_308;
  local_298 = 0;
  uStack_290 = 0;
  iVar8 = (int)param_2[1];
  if (iVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar8);
  }
  if (iVar8 != 0) {
    FUN_1447bfcc0(&local_298);
    if ((longlong)(int)param_2[1] != 0) {
      puVar28 = (ulonglong *)*param_2;
      local_2d8 = puVar28 + (int)param_2[1];
      local_2e0 = param_1;
      do {
        plVar3 = (longlong *)*puVar28;
        (**(code **)(*param_1 + 0x3d0))(param_1);
        if (plVar3 + 0x76 == (longlong *)0x0) {
          lVar12 = plVar3[0x77];
        }
        else {
          lVar12 = (**(code **)(plVar3[0x76] + 0xb8))();
        }
        if (lVar12 != 0) {
          uVar13 = FUN_14001cc68(0x238,0x10);
          FUN_1448a965e(uVar13,plVar3,param_1);
          *(undefined8 *)(lVar12 + 0x218) = uVar13;
          (**(code **)(*plVar3 + 0x7a8))(plVar3,&local_1e8);
          plVar4 = plVar3;
          do {
            plVar18 = plVar4;
            plVar4 = (longlong *)plVar18[0x24];
            if (plVar4 == (longlong *)0x0) break;
          } while ((*(byte *)((longlong)plVar4 + 0x1fa) & 2) == 0);
          lVar22 = plVar18[0x15];
          if (lVar22 == 0) {
            uVar44 = 0;
            uVar45 = 0;
            uVar46 = 0;
            uVar47 = 0;
            uVar48 = 0;
            uVar49 = 0;
          }
          else {
            lVar22 = *(longlong *)(lVar22 + 0x1c8);
            if (lVar22 == 0) {
              uVar48 = (undefined4)DAT_14c8464f0;
              uVar49 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
              uVar44 = (undefined4)DAT_14c8464e0;
              uVar45 = DAT_14c8464e0._4_4_;
              uVar46 = (undefined4)DAT_14c8464e8;
              uVar47 = DAT_14c8464e8._4_4_;
            }
            else {
              uVar48 = (undefined4)*(undefined8 *)(lVar22 + 0x270);
              uVar49 = (undefined4)((ulonglong)*(undefined8 *)(lVar22 + 0x270) >> 0x20);
              uVar44 = *(undefined4 *)(lVar22 + 0x260);
              uVar45 = *(undefined4 *)(lVar22 + 0x264);
              uVar46 = *(undefined4 *)(lVar22 + 0x268);
              uVar47 = *(undefined4 *)(lVar22 + 0x26c);
            }
          }
          _X = (double)plVar3[0x2c];
          uVar42 = SUB84(_X,0);
          uVar43 = (undefined4)((ulonglong)_X >> 0x20);
          _X_00 = (double)plVar3[0x2d];
          uVar40 = SUB84(_X_00,0);
          uVar41 = (undefined4)((ulonglong)_X_00 >> 0x20);
          _X_01 = (double)plVar3[0x2e];
          uVar38 = SUB84(_X_01,0);
          uVar39 = (undefined4)((ulonglong)_X_01 >> 0x20);
          _X_02 = (double)plVar3[0x2f];
          uVar36 = SUB84(_X_02,0);
          uVar37 = (undefined4)((ulonglong)_X_02 >> 0x20);
          _X_03 = (double)plVar3[0x30];
          uVar34 = SUB84(_X_03,0);
          uVar35 = (undefined4)((ulonglong)_X_03 >> 0x20);
          _X_04 = (double)plVar3[0x31];
          uVar32 = SUB84(_X_04,0);
          uVar33 = (undefined4)((ulonglong)_X_04 >> 0x20);
          _X_05 = (double)plVar3[0x32];
          uVar30 = SUB84(_X_05,0);
          uVar31 = (undefined4)((ulonglong)_X_05 >> 0x20);
          iVar8 = _finite(_X);
          if (((((iVar8 == 0) || (iVar8 = _finite(_X_00), iVar8 == 0)) ||
               (iVar8 = _finite(_X_01), iVar8 == 0)) ||
              ((iVar8 = _finite(_X_02), iVar8 == 0 || (iVar8 = _finite(_X_03), iVar8 == 0)))) ||
             ((iVar8 = _finite(_X_04), iVar8 == 0 || (iVar8 = _finite(_X_05), iVar8 == 0)))) {
            uVar30 = 0;
            uVar31 = 0;
            uVar32 = 0;
            uVar33 = 0;
            uVar34 = 0;
            uVar35 = 0;
            uVar36 = 0;
            uVar37 = 0;
            uVar38 = 0;
            uVar39 = 0;
            uVar40 = 0;
            uVar41 = 0;
            uVar42 = 0;
            uVar43 = 0;
          }
          FUN_14487e4ca(plVar3,&local_2d0);
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14caff428) && (FUN_144b3d300(&DAT_14caff428), DAT_14caff428 == -1)) {
            FUN_145f8e32a(&DAT_14caff3a0);
            atexit((_func_5014 *)&LAB_1436691a2);
            _Init_thread_footer(&DAT_14caff428);
          }
          if (DAT_14caff38c == 0) {
            cVar27 = '\0';
          }
          else {
            EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14caff3b0);
            if (DAT_14caff3e0 != DAT_14caff40c) {
              uVar9 = ((uint)((ulonglong)plVar3 >> 0x14) & 0xffff ^ (uint)((ulonglong)plVar3 >> 4))
                      * -0x7a143595;
              uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
              puVar15 = DAT_14caff418;
              if (DAT_14caff418 == (undefined *)0x0) {
                puVar15 = &DAT_14caff410;
              }
              iVar8 = *(int *)(puVar15 +
                              (ulonglong)(DAT_14caff420 - 1U & (uVar9 >> 0x10 ^ uVar9)) * 4);
              if (iVar8 != -1) {
LAB_14020cec1:
                lVar22 = DAT_14caff3d8 + (longlong)iVar8 * 0x90;
                if (*(longlong **)(DAT_14caff3d8 + (longlong)iVar8 * 0x90) != plVar3)
                goto code_r0x00014020ced6;
                if (((undefined8 *)(lVar22 + 0x10) != (undefined8 *)0x0 && lVar22 != 0) &&
                   (*(longlong *)(lVar22 + 0x70) == DAT_14c872be0)) {
                  puVar14 = (undefined8 *)(lVar22 + 0x10);
                  puVar26 = local_248;
                  for (lVar19 = 0xc; lVar19 != 0; lVar19 = lVar19 + -1) {
                    *puVar26 = *puVar14;
                    puVar14 = puVar14 + 1;
                    puVar26 = puVar26 + 1;
                  }
                  cVar27 = '\x01';
                  goto LAB_14020cf1c;
                }
              }
            }
LAB_14020cf19:
            cVar27 = '\0';
LAB_14020cf1c:
            LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14caff3b0);
          }
          uVar29 = uStack_290;
          lVar22 = (longlong)(int)uStack_290;
          uVar9 = (int)uStack_290 + 1;
          uStack_290 = CONCAT44(uStack_290._4_4_,uVar9);
          if (uStack_290._4_4_ < uVar9) {
            FUN_1472d33b4(&local_298,uVar29 & 0xffffffff);
          }
          puVar14 = (undefined8 *)(lVar22 * 400 + local_298);
          local_288 = local_2d0;
          uVar5 = local_288;
          uStack_280 = uStack_2c8;
          uVar6 = uStack_280;
          local_278 = local_2c0;
          uStack_270 = uStack_2b8;
          local_268 = local_2b0;
          uStack_260 = uStack_2a8;
          local_258 = local_2a0;
          pplVar23 = &local_1e8;
          ppcVar24 = local_168;
          for (lVar22 = 0x10; lVar22 != 0; lVar22 = lVar22 + -1) {
            *ppcVar24 = (code *)*pplVar23;
            pplVar23 = pplVar23 + 1;
            ppcVar24 = ppcVar24 + 1;
          }
          if (cVar27 != '\0') {
            puVar26 = local_248;
            puVar25 = puVar14 + 2;
            for (lVar22 = 0xc; lVar22 != 0; lVar22 = lVar22 + -1) {
              *puVar25 = *puVar26;
              puVar26 = puVar26 + 1;
              puVar25 = puVar25 + 1;
            }
          }
          *puVar14 = uVar13;
          puVar14[1] = lVar12;
          *(char *)(puVar14 + 0xe) = cVar27;
          ppcVar24 = local_168;
          puVar26 = puVar14 + 0x10;
          for (lVar12 = 0x10; lVar12 != 0; lVar12 = lVar12 + -1) {
            *puVar26 = *ppcVar24;
            ppcVar24 = ppcVar24 + 1;
            puVar26 = puVar26 + 1;
          }
          puVar14[0x20] = CONCAT44(uVar43,uVar42);
          puVar14[0x21] = CONCAT44(uVar41,uVar40);
          puVar14[0x22] = CONCAT44(uVar39,uVar38);
          puVar14[0x23] = CONCAT44(uVar37,uVar36);
          puVar14[0x24] = CONCAT44(uVar35,uVar34);
          puVar14[0x25] = CONCAT44(uVar33,uVar32);
          puVar14[0x26] = CONCAT44(uVar31,uVar30);
          *(undefined4 *)(puVar14 + 0x27) = uVar44;
          *(undefined4 *)((longlong)puVar14 + 0x13c) = uVar45;
          *(undefined4 *)(puVar14 + 0x28) = uVar46;
          *(undefined4 *)((longlong)puVar14 + 0x144) = uVar47;
          puVar14[0x29] = CONCAT44(uVar49,uVar48);
          local_288._0_4_ = (undefined4)local_2d0;
          local_288._4_4_ = (undefined4)((ulonglong)local_2d0 >> 0x20);
          uStack_280._0_4_ = (undefined4)uStack_2c8;
          uStack_280._4_4_ = (undefined4)((ulonglong)uStack_2c8 >> 0x20);
          *(undefined4 *)(puVar14 + 0x2a) = (undefined4)local_288;
          *(undefined4 *)((longlong)puVar14 + 0x154) = local_288._4_4_;
          *(undefined4 *)(puVar14 + 0x2b) = (undefined4)uStack_280;
          *(undefined4 *)((longlong)puVar14 + 0x15c) = uStack_280._4_4_;
          puVar14[0x2c] = local_2c0;
          puVar14[0x2d] = uStack_2b8;
          puVar14[0x2e] = local_2b0;
          puVar14[0x2f] = uStack_2a8;
          puVar14[0x30] = local_2a0;
          LOCK();
          *(int *)((longlong)plVar3 + 0x3ccU) = *(int *)((longlong)plVar3 + 0x3ccU) + 1;
          UNLOCK();
          param_1 = local_2e0;
          local_288 = uVar5;
          uStack_280 = uVar6;
        }
        puVar28 = puVar28 + 1;
      } while (puVar28 != local_2d8);
    }
  }
  uVar29 = uStack_290;
  if ((int)uStack_290 == 0) {
    uVar29 = 0;
    goto LAB_14020d09f;
  }
  local_1e0 = local_298;
  local_298 = 0;
  uStack_290 = 0;
  uStack_1d8 = uVar29;
  lVar12 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar8 = *(int *)(lVar12 + 0xc60);
  local_1e8 = param_1;
  if (DAT_14c86a9fc == 0) {
    if (iVar8 != 2) {
      if (iVar8 != 1) goto LAB_14020cf7e;
      DVar10 = FUN_140ad26c0();
      DVar11 = GetCurrentThreadId();
      if (DVar10 == DVar11) goto LAB_14020cf83;
      goto LAB_14020cfbe;
    }
LAB_14020cf83:
    FUN_1472d340a(&local_1e8,&DAT_14ca85100);
  }
  else {
LAB_14020cf7e:
    if (iVar8 == 0x10) goto LAB_14020cf83;
LAB_14020cfbe:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (iVar8 = *(int *)(lVar12 + 0xc60), iVar8 == 2))
      goto LAB_14020cf83;
      if (iVar8 == 1) {
        DVar10 = FUN_140ad26c0();
        DVar11 = GetCurrentThreadId();
        if (DVar10 == DVar11) goto LAB_14020cf83;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar14 = (undefined8 *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x308);
      puVar17 = (uint *)*puVar14;
      if (puVar17 != (uint *)0x0) goto LAB_14020d1cb;
      while( true ) {
        uVar9 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar9 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar9 | 1;
          __tlregdtor(&LAB_142fb49ae);
        }
        lVar12 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar16 = *(undefined4 **)(lVar12 + 0x310);
        *(undefined8 *)(lVar12 + 0x310) = 0;
        if (puVar16 == (undefined4 *)0x0) {
          puVar16 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar16 = 0xffffffff;
        *(undefined4 **)(puVar16 + 0x10) = puVar16 + 0x16;
        puVar16[0x12] = 0;
        *puVar14 = puVar16;
        FUN_140217a48(puVar14);
        puVar17 = (uint *)*puVar14;
LAB_14020d1cb:
        puVar26 = (undefined8 *)(*(longlong *)(puVar17 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar21 = (uint *)(puVar26 + 0x18);
        uVar9 = puVar17[0x12];
        if (puVar21 <= puVar17 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar17 + 0x10) = puVar17 + 0x4000;
          LOCK();
          uVar2 = *puVar17;
          *puVar17 = *puVar17 + uVar9 + 1;
          UNLOCK();
          if ((uVar2 ^ uVar9) != 0xffffffff) break;
          puVar17 = (uint *)*puVar14;
          *puVar17 = 0xffffffff;
          *(uint **)(puVar17 + 0x10) = puVar17 + 0x16;
          puVar17[0x12] = 0;
          *puVar14 = puVar17;
          puVar26 = (undefined8 *)((longlong)puVar17 + 0x5fU & 0xfffffffffffffff8);
          puVar21 = (uint *)(puVar26 + 0x18);
          uVar9 = 0;
          if (puVar21 <= puVar17 + 0x4000) {
            uVar9 = 1;
            goto LAB_14020d24b;
          }
        }
      }
      uVar9 = uVar9 + 1;
LAB_14020d24b:
      *(uint **)(puVar17 + 0x10) = puVar21;
      puVar17[0x12] = uVar9;
      iVar8 = 0;
      FUN_1447247dc(puVar26,0);
      *puVar26 = &PTR_FUN_14a2e8088;
      puVar26[0x15] = local_1e8;
      puVar26[0x16] = local_1e0;
      local_1e0 = 0;
      *(undefined4 *)(puVar26 + 0x17) = (undefined4)uStack_1d8;
      *(undefined4 *)((longlong)puVar26 + 0xbc) = uStack_1d8._4_4_;
      uStack_1d8 = 0;
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar9 = DAT_14c7585c8 >> 10 & 3;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar9 < 2) {
          uVar29 = (ulonglong)(byte)(&DAT_149e38edc)[uVar9];
        }
        else {
          uVar29 = 2;
        }
      }
      else {
        iVar8 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
        uVar29 = 5;
      }
      if (*(code **)(puVar26[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar26[0xe] + 0x18))(puVar26 + 0xe,puVar26 + 9);
      }
      puVar26[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar26[9] = puVar26;
      puVar26[10] = puVar26;
      lVar12 = *(longlong *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x2b8);
      if (lVar12 == 0) {
        uVar7 = 1;
        if ((char)uVar29 != '\x06') {
          uVar7 = uVar29;
        }
        uVar29 = uVar7;
        uVar13 = 0;
      }
      else {
        if ((char)uVar29 == '\x06') {
          uVar29 = *(ulonglong *)(lVar12 + 0x38) >> 0x3b;
        }
        uVar13 = *(undefined8 *)(lVar12 + 0x30);
      }
      puVar26[0xf] = uVar13;
      puVar26[0x10] = uVar29 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar26 + 0x1c) = iVar8;
      if (puVar26 == (undefined8 *)0x0) {
        local_168[0] = (code *)CONCAT71(local_168[0]._1_7_,1);
        FUN_1447439e4(0);
      }
      else {
        LOCK();
        *(int *)(puVar26 + 1) = *(int *)(puVar26 + 1) + 1;
        UNLOCK();
        local_168[0] = (code *)CONCAT71(local_168[0]._1_7_,1);
        FUN_1447439e4(puVar26);
        LOCK();
        piVar1 = (int *)(puVar26 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar26)(puVar26,1);
        }
      }
    }
    else {
      local_2e8 = local_168;
      local_158 = (undefined ***)0x0;
      local_148 = &PTR_LAB_14a2e8040;
      local_140 = local_1e8;
      local_138 = local_1e0;
      uStack_130 = uStack_1d8;
      local_1e0 = 0;
      uStack_1d8 = 0;
      local_168[0] = FUN_14486ed82;
      FUN_14005a792(&DAT_14ca9a440,L"AddPrimitiveCommand",&DAT_14ca44c2c);
      if (local_168[0] != (code *)0x0) {
        pppuVar20 = local_158;
        if (local_158 == (undefined ***)0x0) {
          pppuVar20 = &local_148;
        }
        (*(code *)(*pppuVar20)[2])();
      }
    }
  }
  FUN_144746569(local_1e0,uStack_1d8 & 0xffffffff);
  FUN_140058982(&local_1e0);
  uVar29 = uStack_290 & 0xffffffff;
LAB_14020d09f:
  FUN_144746569(local_298,uVar29);
  FUN_140058982(&local_298);
  if ((local_e0 ^ (ulonglong)auStack_308) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
code_r0x00014020ced6:
  iVar8 = *(int *)(lVar22 + 0x80);
  if (iVar8 == -1) goto LAB_14020cf19;
  goto LAB_14020cec1;
}



// FUNCTION 14020d4f8 FUN_14020d4f8 body=746 status=ok
// SIG undefined FUN_14020d4f8(void)

void FUN_14020d4f8(longlong param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  void *pvVar5;
  void *pvVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  void *pvVar13;
  size_t _Size;
  int iVar14;
  longlong lVar15;
  int iVar16;
  longlong lVar17;
  
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  uVar2 = *(uint *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x50) = uVar2;
  iVar16 = DAT_14c75f0e0;
  if ((int)uVar2 < 1) {
LAB_14020d7cb:
    *(undefined4 *)(param_1 + 0x50) = 0;
    return;
  }
  uVar11 = 0;
  iVar9 = 0;
  do {
    iVar14 = 4;
    if ((*(char *)(*(longlong *)(param_1 + 0x10) + 0x139) == '\0') &&
       (lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x18) + uVar11 * 8),
       (*(byte *)(lVar15 + 0x374) & 8) == 0)) {
      iVar14 = *(int *)(lVar15 + 0x5b0);
    }
    iVar14 = iVar14 + iVar9;
    if ((-1 < iVar16) && (iVar16 < iVar14)) {
      *(int *)(param_1 + 0x50) = (int)uVar11;
      goto LAB_14020d58c;
    }
    *(int *)(param_1 + 100) = iVar14;
    uVar11 = uVar11 + 1;
    iVar9 = iVar14;
  } while (uVar2 != uVar11);
  uVar11 = (ulonglong)uVar2;
LAB_14020d58c:
  if (iVar9 == 0) goto LAB_14020d7cb;
  uVar12 = (longlong)iVar9 * 0x10c + (longlong)(int)uVar11 * 0x60;
  pvVar5 = *(void **)(param_1 + 0x38);
  pvVar6 = *(void **)(param_1 + 0x40);
  uVar10 = (longlong)pvVar6 - (longlong)pvVar5;
  uVar11 = 0;
  if (uVar10 < uVar12) {
    uVar11 = uVar12 >> 2;
  }
  puVar1 = (ulonglong *)(param_1 + 0x30);
  if (uVar10 < uVar11 + uVar12) {
    iVar16 = (int)(uVar11 + uVar12);
    uVar11 = (ulonglong)iVar16;
    if (uVar10 != uVar11) {
      if (pvVar5 != (void *)0x0) {
        FUN_1400020a8(pvVar5);
      }
      *puVar1 = 0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined8 *)(param_1 + 0x40) = 0;
      if (iVar16 < 1) goto LAB_14020d69f;
      pvVar5 = (void *)FUN_14001cc68(uVar11 + 8,0x10);
      *(void **)(param_1 + 0x38) = pvVar5;
      if (pvVar5 == (void *)0x0) {
        pvVar6 = *(void **)(param_1 + 0x40);
        pvVar5 = (void *)0x0;
      }
      else {
        pvVar6 = (void *)((longlong)pvVar5 + uVar11);
        *(void **)(param_1 + 0x40) = pvVar6;
        *(undefined8 *)((longlong)pvVar5 + uVar11) = 0xa1b2c3d4a1b2c3d4;
      }
    }
  }
  *puVar1 = (ulonglong)pvVar5;
  if (pvVar6 != pvVar5) {
    iVar16 = *(int *)(param_1 + 0x50);
    uVar11 = (longlong)pvVar5 + 7U & 0xfffffffffffffff8;
    pvVar13 = (void *)((longlong)iVar16 * 0x60 + uVar11);
    if (pvVar6 < pvVar13) {
      uVar11 = 0;
      pvVar13 = pvVar5;
    }
    else {
      *puVar1 = (ulonglong)pvVar13;
      if (uVar11 == 0) {
        uVar11 = 0;
      }
      else if (0 < iVar16) {
        lVar15 = 0;
        do {
          *(undefined8 *)(uVar11 + 0x18 + lVar15) = 0;
          *(undefined8 *)(uVar11 + 0x30 + lVar15) = 0;
          lVar15 = lVar15 + 0x60;
        } while ((longlong)iVar16 * 0x60 != lVar15);
        pvVar13 = *(void **)(param_1 + 0x30);
        pvVar6 = *(void **)(param_1 + 0x40);
      }
    }
    *(ulonglong *)(param_1 + 0x48) = uVar11;
    _Size = (longlong)*(int *)(param_1 + 100) * 0x10c;
    pvVar13 = (void *)((longlong)pvVar13 + 3U & 0xfffffffffffffffc);
    pvVar5 = (void *)((longlong)pvVar13 + _Size);
    if ((pvVar5 <= pvVar6) && (*puVar1 = (ulonglong)pvVar5, pvVar13 != (void *)0x0)) {
      if (0 < *(int *)(param_1 + 100)) {
        memset(pvVar13,0,_Size);
        uVar11 = *(ulonglong *)(param_1 + 0x48);
      }
      *(void **)(param_1 + 0x58) = pvVar13;
      if (uVar11 != 0) {
        iVar16 = *(int *)(param_1 + 0x50);
        if ((longlong)iVar16 < 1) {
          return;
        }
        lVar17 = 0x5c;
        lVar15 = 0;
        do {
          lVar3 = *(longlong *)(param_1 + 0x48);
          lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x18) + lVar15 * 8);
          uVar7 = FUN_1448f7274(param_2,*(undefined8 *)(lVar4 + 0xe0));
          uVar8 = FUN_1448f7274(param_2,*(undefined8 *)(lVar4 + 0xe8));
          iVar9 = 4;
          if ((*(char *)(*(longlong *)(param_1 + 0x10) + 0x139) == '\0') &&
             (lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x18) + lVar15 * 8),
             (*(byte *)(lVar4 + 0x374) & 8) == 0)) {
            iVar9 = *(int *)(lVar4 + 0x5b0);
          }
          *(longlong *)(lVar3 + -0xc + lVar17) =
               (longlong)*(int *)(param_1 + 0x60) * 0x10c + *(longlong *)(param_1 + 0x58);
          *(undefined4 *)(lVar3 + -4 + lVar17) = 0;
          *(int *)(lVar3 + lVar17) = iVar9;
          *(undefined8 *)(lVar3 + -0x44 + lVar17) = uVar7;
          *(undefined8 *)(lVar3 + -0x2c + lVar17) = uVar8;
          *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + iVar9;
          lVar15 = lVar15 + 1;
          lVar17 = lVar17 + 0x60;
        } while (iVar16 != lVar15);
        return;
      }
    }
    *(undefined4 *)(param_1 + 100) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
    return;
  }
LAB_14020d69f:
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  return;
}



// FUNCTION 14020d7e2 FUN_14020d7e2 body=77 status=ok
// SIG undefined FUN_14020d7e2(void)

int FUN_14020d7e2(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  FUN_14020d830(param_1,1);
  iVar1 = *(int *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar1 + 1U) {
    FUN_140125d6e((longlong *)(param_1 + 0x18),iVar1);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar1 * 8) = param_2;
  return iVar1;
}



// FUNCTION 14020d830 FUN_14020d830 body=176 status=ok
// SIG undefined FUN_14020d830(void)

int FUN_14020d830(longlong *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  
  iVar5 = (int)param_1[1];
  iVar1 = (int)param_1[2];
  iVar3 = iVar1 + param_2 + 0xff;
  iVar2 = iVar1 + param_2 + 0x1fe;
  if (-1 < iVar3) {
    iVar2 = iVar3;
  }
  *(int *)(param_1 + 2) = iVar1 + param_2;
  if (iVar5 < iVar2 >> 8) {
    do {
      lVar4 = FUN_14001cc68(0x16000);
      lVar6 = 0x40;
      do {
        memset((void *)(lVar4 + lVar6),0,0xa0);
        lVar6 = lVar6 + 0x160;
      } while (lVar6 != 0x16040);
      iVar3 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
        FUN_1456bd870(param_1,iVar3);
      }
      *(longlong *)(*param_1 + (longlong)iVar3 * 8) = lVar4;
      iVar5 = iVar5 + 1;
    } while (iVar5 != iVar2 >> 8);
  }
  return iVar1;
}



// FUNCTION 14020d8e0 FUN_14020d8e0 body=1031 status=ok
// SIG undefined FUN_14020d8e0(void)

int * FUN_14020d8e0(longlong *param_1,int *param_2,undefined8 *param_3,char *param_4)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  byte bVar12;
  uint uVar13;
  int iVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  int iVar17;
  longlong *plVar18;
  longlong *plVar19;
  ulonglong uVar20;
  int iVar21;
  ulonglong uVar22;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar17 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar17 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar17) {
      FUN_14482b872(param_1,iVar17);
    }
    iVar7 = (int)param_1[5];
    if (iVar7 == 0) {
      iVar6 = -1;
    }
    else {
      iVar6 = iVar7 + 0x1e;
      if (-1 < iVar7 + -1) {
        iVar6 = iVar7 + -1;
      }
      iVar6 = iVar6 >> 5;
    }
    plVar18 = param_1 + 2;
    iVar14 = iVar7 + 1;
    iVar21 = iVar7 + 0x1f;
    if (-1 < iVar7) {
      iVar21 = iVar7;
    }
    if (iVar21 >> 5 == iVar6) {
      *(int *)(param_1 + 5) = iVar14;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar7) {
        iVar6 = iVar7;
        if (iVar7 + 0x20U < 0xa0) {
          iVar14 = 0x80;
        }
        else {
          uVar13 = iVar7 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar8 = 4;
            if (4 < uVar13) {
              uVar8 = uVar13;
            }
          }
          else {
            uVar8 = uVar13 + (uVar13 * 3 >> 3) + 0x10;
          }
          uVar15 = (ulonglong)(uVar8 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar9 = (uint)(uVar15 + 0xf);
              if (uVar8 < 0x1ffd) {
                uVar15 = (ulonglong)
                         (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar15 + 0xf >> 4]];
              }
              else {
                uVar16 = (ulonglong)(uVar9 & 0xfffffff0);
                if (uVar16 < 0x7ff1) {
                  bVar12 = (&DAT_14c841e00)[uVar9 >> 4];
                  uVar20 = 0x32;
                  if (0x32 < bVar12) {
                    uVar20 = (ulonglong)bVar12;
                  }
                  uVar22 = 0x32 - (ulonglong)bVar12;
                  do {
                    uVar15 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar22 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar22 & 0xffffffff] & 0xf) == 0) goto LAB_14020db7c;
                    lVar11 = uVar20 + 1 + uVar22;
                    uVar22 = uVar22 - 1;
                  } while (lVar11 != 0x33);
                }
                uVar15 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar15 = (ulonglong)DAT_14c841df8;
                }
                uVar15 = -uVar15 & (uVar16 + uVar15) - 1;
              }
            }
            else {
              uVar15 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar15,0);
              iVar6 = (int)param_1[5];
            }
          }
LAB_14020db7c:
          iVar10 = (int)(uVar15 >> 2);
          iVar14 = -0x20;
          if ((int)uVar13 <= iVar10) {
            iVar14 = iVar10 << 5;
          }
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar14;
        FUN_1446efbd8(plVar18,iVar6);
        iVar14 = (int)param_1[5] + 1;
      }
      iVar6 = iVar14 + 0x1f;
      if (-1 < iVar14) {
        iVar6 = iVar14;
      }
      *(int *)(param_1 + 5) = iVar14;
      if (iVar14 % 0x20 != 0) {
        plVar19 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar19 = plVar18;
        }
        bVar12 = -(char)(iVar14 % 0x20);
        *(uint *)((longlong)plVar19 + (longlong)(iVar6 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar19 + (longlong)(iVar6 >> 5) * 4) << (bVar12 & 0x1f)) >>
             (bVar12 & 0x1f);
      }
    }
    lVar11 = (longlong)iVar17;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar18 = (longlong *)param_1[4];
    }
    bVar12 = (byte)iVar7 & 0x1f;
    puVar1 = (uint *)((longlong)plVar18 + (longlong)(iVar21 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar12 | 0xfffffffeU >> 0x20 - bVar12);
  }
  else {
    iVar17 = (int)param_1[6];
    lVar11 = (longlong)iVar17;
    iVar7 = *(int *)(*param_1 + 4 + lVar11 * 0x18);
    *(int *)(param_1 + 6) = iVar7;
    iVar6 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar7 * 0x18) = 0xffffffff;
    }
  }
  plVar18 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar18 = (longlong *)param_1[4];
  }
  iVar7 = iVar17 + 0x1f;
  if (-1 < iVar17) {
    iVar7 = iVar17;
  }
  puVar1 = (uint *)((longlong)plVar18 + (longlong)(iVar7 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar17 & 0x1f);
  plVar18 = (longlong *)(*param_1 + lVar11 * 0x18);
  puVar2 = (undefined4 *)param_3[1];
  plVar19 = *(longlong **)*param_3;
  *plVar18 = (longlong)plVar19;
  *(undefined4 *)(plVar18 + 1) = *puVar2;
  *(undefined4 *)(plVar18 + 2) = 0xffffffff;
  uVar13 = *(uint *)(*(longlong *)(*plVar19 + 0x260) + (longlong)(int)plVar19[1] * 8);
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) == 1) ||
     (iVar7 = FUN_1448f73d2(param_1,uVar13,plVar18), iVar7 == -1)) {
    cVar5 = '\0';
    iVar7 = iVar17;
  }
  else {
    uVar3 = *(undefined4 *)((longlong)plVar18 + 4);
    lVar11 = plVar18[1];
    uVar4 = *(undefined4 *)((longlong)plVar18 + 0xc);
    puVar2 = (undefined4 *)(*param_1 + (longlong)iVar7 * 0x18);
    *puVar2 = (int)*plVar18;
    puVar2[1] = uVar3;
    puVar2[2] = (int)lVar11;
    puVar2[3] = uVar4;
    FUN_146d981d4(param_1,iVar17);
    cVar5 = '\x01';
  }
  if (param_4 != (char *)0x0) {
    *param_4 = cVar5;
  }
  if (cVar5 == '\0') {
    uVar8 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
    iVar17 = 1;
    if (3 < uVar8) {
      uVar15 = (ulonglong)(uVar8 & 0xfffffffe) + 0xf;
      lVar11 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar17 = 1 << ((byte)lVar11 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar17 <= (int)param_1[9])) {
      uVar13 = (int)param_1[9] - 1U & uVar13;
      *(uint *)((longlong)plVar18 + 0x14) = uVar13;
      plVar19 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar19 = param_1 + 7;
      }
      *(undefined4 *)(plVar18 + 2) =
           *(undefined4 *)
            ((longlong)plVar19 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4);
      plVar18 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar18 = param_1 + 7;
      }
      *(int *)((longlong)plVar18 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4) =
           iVar7;
    }
    else {
      *(int *)(param_1 + 9) = iVar17;
      FUN_14020dce8(param_1);
    }
  }
  *param_2 = iVar7;
  return param_2;
}



// FUNCTION 14020dce8 FUN_14020dce8 body=567 status=ok
// SIG undefined FUN_14020dce8(void)

void FUN_14020dce8(longlong *param_1)

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
        plVar7 = *(longlong **)(lVar11 + lVar10 * 0x18);
        uVar13 = (longlong)(int)param_1[9] - 1U &
                 (longlong)*(int *)(*(longlong *)(*plVar7 + 0x260) + (longlong)(int)plVar7[1] * 8);
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
            if (iVar2 - lVar11 == lVar10) goto LAB_14020debd;
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
LAB_14020debd:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14020df20 FUN_14020df20 body=1226 status=ok
// SIG undefined FUN_14020df20(void)

ulonglong FUN_14020df20(longlong *param_1,undefined8 param_2,undefined4 param_3,longlong param_4,
                       ulonglong param_5,undefined1 param_6)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  longlong *plVar10;
  undefined1 *puVar11;
  bool bVar12;
  float fVar13;
  undefined1 auStack_168 [40];
  undefined1 local_140;
  undefined1 local_13f;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  longlong *local_110;
  ulonglong local_108;
  longlong local_100;
  float local_f8;
  undefined4 local_f4;
  undefined1 local_f0;
  char local_ef;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined1 local_bc;
  longlong local_b8;
  longlong *plStack_b0;
  longlong local_a8;
  longlong lStack_a0;
  longlong local_98;
  longlong lStack_90;
  longlong local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_14020e3ec(param_4);
  local_128 = DAT_14c84635c;
  plVar3 = param_1 + 0x73;
  local_b8 = param_1[(ulonglong)(-(uint)(*(float *)(param_1 + 0x73) != 0.0) & 1) + 0x72];
  local_e8 = param_1[0x70];
  FUN_14020e8f6(param_1[0xa4],&local_e8,&local_b8,&local_128);
  local_d8 = param_1[0x70];
  local_e8 = param_1[0xa4];
  local_d0 = 0;
  local_bc = 1;
  local_118 = 0;
  local_108 = param_5;
  local_f0 = param_6;
  local_100 = param_4;
  local_e0 = local_e8;
  local_c8 = param_2;
  local_c0 = param_3;
  local_ef = (**(code **)(*param_1 + 0x208))(param_1);
  local_f8 = (float)(**(code **)(*DAT_14c968098 + 0x58))();
  if ((longlong *)param_1[0xa2] == (longlong *)0x0) {
    fVar13 = 1.0;
  }
  else {
    fVar13 = (float)(**(code **)(*(longlong *)param_1[0xa2] + 0xf8))();
  }
  local_f8 = local_f8 * fVar13;
  local_f4 = 0;
  fVar13 = *(float *)(param_1 + 0x73);
  plVar10 = param_1 + 0x72;
  if (fVar13 != 0.0) {
    plVar10 = plVar3;
  }
  if (NAN(fVar13)) {
    plVar10 = plVar3;
  }
  local_120 = (undefined4)param_1[(ulonglong)(-(uint)(fVar13 != 0.0) & 1) + 0x72];
  local_11c = *(undefined4 *)((longlong)plVar10 + 4);
  local_128 = 0;
  local_110 = &local_e8;
  FUN_1401e2e48(param_1,&local_b8);
  if (param_1 + 0x13 != &local_b8) {
    param_1[0x19] = local_88;
    param_1[0x17] = local_98;
    param_1[0x18] = lStack_90;
    param_1[0x15] = local_a8;
    param_1[0x16] = lStack_a0;
    param_1[0x13] = local_b8;
    param_1[0x14] = (longlong)plStack_b0;
  }
  fVar13 = *(float *)(param_1 + 0x73);
  plVar10 = param_1 + 0x72;
  if (fVar13 != 0.0) {
    plVar10 = plVar3;
  }
  if (NAN(fVar13)) {
    plVar10 = plVar3;
  }
  lVar4 = param_1[(ulonglong)(-(uint)(fVar13 != 0.0) & 1) + 0x72];
  uVar9 = *(undefined4 *)((longlong)plVar10 + 4);
  param_1[0x21] = 0;
  *(int *)(param_1 + 0x22) = (int)lVar4;
  *(undefined4 *)((longlong)param_1 + 0x114) = uVar9;
  FUN_14020e58a(param_1,&local_b8);
  plVar3 = plStack_b0;
  if (plStack_b0 != (longlong *)0x0) {
    iVar7 = (int)plStack_b0[1];
    do {
      if (iVar7 == 0) {
        bVar12 = false;
        goto LAB_14020e1c1;
      }
      LOCK();
      iVar5 = (int)plStack_b0[1];
      bVar12 = iVar7 == iVar5;
      if (bVar12) {
        *(int *)(plStack_b0 + 1) = iVar7 + 1;
        iVar5 = iVar7;
      }
      iVar7 = iVar5;
      UNLOCK();
    } while (!bVar12);
    bVar12 = local_b8 != 0;
    if (bVar12) {
      uVar8 = FUN_14020e432(local_a8,local_b8,0);
      param_5 = (ulonglong)uVar8;
    }
    LOCK();
    plVar10 = plVar3 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
LAB_14020e1c1:
    if (plStack_b0 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plStack_b0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plStack_b0 + 0x10))();
      }
    }
    if (((byte)param_5 & bVar12) != 0) goto LAB_14020e212;
  }
  cVar6 = FUN_14020e49e(param_1);
  plVar3 = DAT_14c968098;
  if (cVar6 == '\0') {
    plVar10 = (longlong *)param_1[2];
    if (plVar10 == (longlong *)0x0) {
LAB_14020e378:
      local_b8 = 0;
      plStack_b0 = (longlong *)0x0;
    }
    else {
      iVar7 = (int)plVar10[1];
      do {
        if (iVar7 == 0) goto LAB_14020e378;
        LOCK();
        iVar5 = (int)plVar10[1];
        bVar12 = iVar7 == iVar5;
        if (bVar12) {
          *(int *)(plVar10 + 1) = iVar7 + 1;
          iVar5 = iVar7;
        }
        iVar7 = iVar5;
        UNLOCK();
      } while (!bVar12);
      local_b8 = param_1[1];
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
      LOCK();
      plVar2 = plVar10 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      plStack_b0 = plVar10;
      if ((int)*plVar2 == 0) {
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
    cVar6 = (**(code **)(*plVar3 + 0x118))(plVar3,&local_b8);
    plVar3 = plStack_b0;
    puVar11 = &DAT_14c96b23a;
    if (cVar6 != '\0') {
      puVar11 = &DAT_14c96b238;
    }
    local_140 = *puVar11;
    if (plStack_b0 != (longlong *)0x0) {
      LOCK();
      plVar10 = plStack_b0 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
        (**(code **)*plStack_b0)(plStack_b0);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
  }
  else {
    local_140 = DAT_14c96b238;
  }
  local_13f = 1;
  local_138 = 0;
  uStack_130 = 0;
  FUN_14020e622(param_1);
LAB_14020e212:
  FUN_14020eb82(param_1 + 0x4d,&local_b8,&local_128);
  *(undefined1 *)(param_4 + 0x168) = 1;
  if ((local_ef != '\x01') ||
     (FUN_1469537a6(param_4,param_1[0x56]), (*(byte *)(param_4 + 0x168) & 1) != 0)) {
    uVar9 = FUN_14020e732(param_4,(ulonglong)plStack_b0 & 0xffffffff,&local_128);
    plStack_b0 = (longlong *)CONCAT44(plStack_b0._4_4_,uVar9);
  }
  if (local_ef == '\x01') {
    FUN_146953838(param_4);
  }
  if ((local_80 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)plStack_b0 & 0xffffffff;
}



// FUNCTION 14020e3ec FUN_14020e3ec body=70 status=ok
// SIG undefined FUN_14020e3ec(void)

void FUN_14020e3ec(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 0x160);
  iVar2 = *(int *)(param_1 + 0x178);
  *(uint *)(param_1 + 0x178) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x17c) < iVar2 + 1U) {
    FUN_1446f48e2((longlong *)(param_1 + 0x170),iVar2);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x170) + (longlong)iVar2 * 4) = uVar1;
  return;
}



// FUNCTION 14020e432 FUN_14020e432 body=107 status=ok
// SIG undefined FUN_14020e432(void)

undefined8 FUN_14020e432(longlong param_1,longlong param_2,byte param_3)

{
  longlong lVar1;
  byte bVar2;
  undefined7 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  if (((*(byte *)(param_2 + 0x31) & 1) == 0) ||
     (lVar1 = **(longlong **)(param_2 + 0x1b0), lVar1 == 0)) {
    bVar2 = 0;
    uVar3 = 0;
  }
  else {
    lVar4 = lVar1 + 8;
    if (*(longlong *)(lVar1 + 0x88) != 0) {
      lVar4 = *(longlong *)(lVar1 + 0x88);
    }
    uVar3 = (undefined7)((ulonglong)lVar1 >> 8);
    bVar2 = 1;
    if ((longlong)*(int *)(lVar1 + 0x90) == 0) {
      param_3 = 0;
    }
    else {
      uVar5 = 0;
      param_3 = 0;
      do {
        if (*(longlong *)(lVar4 + uVar5) == param_1) {
          param_3 = (int)(~uVar5 >> 5) != 0;
          break;
        }
        uVar5 = uVar5 + 0x20;
      } while ((longlong)*(int *)(lVar1 + 0x90) * 0x20 != uVar5);
    }
  }
  return CONCAT71(uVar3,bVar2 & param_3);
}



// FUNCTION 14020e49e FUN_14020e49e body=234 status=ok
// SIG undefined FUN_14020e49e(void)

ulonglong FUN_14020e49e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined8 unaff_RSI;
  ulonglong uVar8;
  bool bVar9;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  plVar4 = DAT_14c968098;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(param_1 + 0x304) == 4) {
    uVar8 = 0;
  }
  else if (*(int *)(param_1 + 0x304) == 2) {
    plVar3 = *(longlong **)(param_1 + 0x10);
    if (plVar3 == (longlong *)0x0) {
LAB_14020e53c:
      local_28 = 0;
      plStack_20 = (longlong *)0x0;
    }
    else {
      iVar6 = (int)plVar3[1];
      do {
        if (iVar6 == 0) goto LAB_14020e53c;
        LOCK();
        iVar5 = (int)plVar3[1];
        bVar9 = iVar6 == iVar5;
        if (bVar9) {
          *(int *)(plVar3 + 1) = iVar6 + 1;
          iVar5 = iVar6;
        }
        iVar6 = iVar5;
        UNLOCK();
      } while (!bVar9);
      local_28 = *(undefined8 *)(param_1 + 8);
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar3 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      plStack_20 = plVar3;
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
    uVar7 = (**(code **)(*plVar4 + 0x118))(plVar4,&local_28);
    plVar4 = plStack_20;
    if (plStack_20 != (longlong *)0x0) {
      LOCK();
      plVar3 = plStack_20 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plStack_20)(plStack_20);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
    uVar8 = (ulonglong)uVar7 ^ 1;
  }
  else {
    uVar8 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 14020e58a FUN_14020e58a body=152 status=ok
// SIG undefined FUN_14020e58a(void)

undefined8 * FUN_14020e58a(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x10);
  if (plVar3 == (longlong *)0x0) {
LAB_14020e5e4:
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = param_1 + 0x39;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_14020e5e4;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar7 = iVar6 == iVar5;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar7);
    uVar4 = *(undefined8 *)(param_1 + 8);
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
    *param_2 = uVar4;
    param_2[1] = plVar3;
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
    param_2[2] = param_1 + 0x39;
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



// FUNCTION 14020e622 FUN_14020e622 body=166 status=ok
// SIG undefined FUN_14020e622(void)

void FUN_14020e622(undefined8 param_1,undefined2 *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [40];
  undefined2 local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_2;
  plVar1 = (longlong *)(param_2 + 4);
  local_28 = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_2 + 4) = 0;
  local_20 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_2 + 8) = 0;
  FUN_14020e6ca();
  if (*(int *)(param_2 + 8) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_14020e679;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_2 + 8) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_14020e679:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14020e6ca FUN_14020e6ca body=103 status=ok
// SIG undefined FUN_14020e6ca(void)

void FUN_14020e6ca(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  FUN_14020e9d2(param_1 + 0x39,param_1,param_2);
  plVar1 = (longlong *)(param_2 + 8);
  if (*(int *)(param_2 + 0x10) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_2 + 0x10) = 0;
  }
  if (*plVar1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14020e732 FUN_14020e732 body=174 status=ok
// SIG undefined FUN_14020e732(void)

undefined4 FUN_14020e732(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  *(undefined1 *)(param_1 + 0x168) = 0;
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x170) + -4 + (longlong)*(int *)(param_1 + 0x178) * 4);
  lVar5 = (longlong)iVar1;
  *(int *)(param_1 + 0x178) = *(int *)(param_1 + 0x178) + -1;
  uVar4 = (ulonglong)*(uint *)(param_1 + 0x160);
  if (iVar1 < (int)*(uint *)(param_1 + 0x160)) {
    lVar2 = lVar5 << 4;
    do {
      param_2 = FUN_14020e870(*(undefined8 *)(*(longlong *)(param_1 + 0x158) + lVar2),param_2,
                              param_1,param_3);
      lVar5 = lVar5 + 1;
      uVar4 = (ulonglong)*(int *)(param_1 + 0x160);
      lVar2 = lVar2 + 0x10;
    } while (lVar5 < (longlong)uVar4);
  }
  if (iVar1 < (int)uVar4) {
    do {
      uVar3 = (int)uVar4 - 1;
      uVar4 = (ulonglong)uVar3;
      FUN_14020e7e0(param_1 + 0x158,uVar4);
    } while (iVar1 < (int)uVar3);
  }
  return param_2;
}



// FUNCTION 14020e7e0 FUN_14020e7e0 body=120 status=ok
// SIG undefined FUN_14020e7e0(void)

void FUN_14020e7e0(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  void *_Dst;
  
  lVar3 = *param_1;
  plVar4 = *(longlong **)(lVar3 + 8 + (longlong)(int)param_2 * 0x10);
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
  iVar5 = (int)param_1[1];
  if (~param_2 + iVar5 != 0) {
    _Dst = (void *)(lVar3 + (longlong)(int)param_2 * 0x10);
    memmove(_Dst,(void *)((longlong)_Dst + 0x10),(longlong)(int)(~param_2 + iVar5) << 4);
    iVar5 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar5 + -1;
  return;
}



// FUNCTION 14020e858 FUN_14020e858 body=23 status=ok
// SIG undefined FUN_14020e858(void)

void FUN_14020e858(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x18);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014020e86b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 14020e870 FUN_14020e870 body=133 status=ok
// SIG undefined FUN_14020e870(void)

undefined4 FUN_14020e870(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = (longlong *)param_1[1];
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return param_2;
      }
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
    if (*param_1 != 0) {
      param_2 = FUN_14016eaf2(*param_1,param_1 + 2,param_1 + 8,param_4,param_3,param_2,param_1 + 0xf
                              ,(char)param_1[0x15]);
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
  return param_2;
}



// FUNCTION 14020e8f6 FUN_14020e8f6 body=219 status=ok
// SIG undefined FUN_14020e8f6(void)

undefined8 FUN_14020e8f6(longlong param_1,undefined8 *param_2,float *param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  float fVar4;
  
  if ((((*(float *)(param_1 + 0xd8) != *param_3) ||
       (NAN(*(float *)(param_1 + 0xd8)) || NAN(*param_3))) ||
      (*(float *)(param_1 + 0xdc) != param_3[1])) ||
     (NAN(*(float *)(param_1 + 0xdc)) || NAN(param_3[1]))) {
    uVar2 = *(undefined8 *)param_3;
    *(undefined8 *)(param_1 + 0xd8) = uVar2;
    fVar4 = (float)((ulonglong)uVar2 >> 0x20) / DAT_14c96b0bc;
    iVar1 = (int)ROUND(-0.5 - (fVar4 + fVar4)) >> 1;
    fVar4 = (float)uVar2 / DAT_14c96b0b8;
    iVar3 = (int)ROUND(-0.5 - (fVar4 + fVar4)) >> 1;
    *(ulonglong *)(param_1 + 0xc0) = CONCAT44(-iVar1,-iVar3);
    if (iVar3 * iVar1 < 0) {
      *(undefined8 *)(param_1 + 0xd8) = 0;
      *(undefined8 *)(param_1 + 0xc0) = 0;
    }
    FUN_1448e9c5c(param_1);
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  *(undefined8 *)(param_1 + 200) = *param_2;
  *(undefined8 *)(param_1 + 0xd0) = *param_4;
  return uVar2;
}



// FUNCTION 14020e9d2 FUN_14020e9d2 body=428 status=ok
// SIG undefined FUN_14020e9d2(void)

ulonglong FUN_14020e9d2(char *param_1,undefined8 param_2,byte *param_3)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  ulonglong local_48;
  undefined4 local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong **)(param_3 + 8) != (longlong *)0x0 && *(int *)(param_3 + 0x10) != 0) {
    cVar1 = (**(code **)(**(longlong **)(param_3 + 8) + 0x30))();
    if (cVar1 != '\0') {
      param_3[1] = 0;
      if (*(longlong **)(param_3 + 8) == (longlong *)0x0 || *(int *)(param_3 + 0x10) == 0) {
LAB_14020eb47:
        local_48 = CONCAT71(local_48._1_7_,*param_3);
        local_38 = 0;
      }
      else {
        cVar1 = (**(code **)(**(longlong **)(param_3 + 8) + 0x30))();
        if (cVar1 == '\0') goto LAB_14020eb47;
        local_48 = *(ulonglong *)(param_3 + 8);
        param_3[8] = 0;
        param_3[9] = 0;
        param_3[10] = 0;
        param_3[0xb] = 0;
        param_3[0xc] = 0;
        param_3[0xd] = 0;
        param_3[0xe] = 0;
        param_3[0xf] = 0;
        local_40 = *(undefined4 *)(param_3 + 0x10);
        param_3[0x10] = 0;
        param_3[0x11] = 0;
        param_3[0x12] = 0;
        param_3[0x13] = 0;
        local_38 = 1;
      }
      uVar2 = FUN_146984c98(param_1,param_2,&local_48);
      uVar3 = (ulonglong)uVar2;
      (*(code *)(&PTR_FUN_149ef1510)[local_38])(&local_48);
      goto LAB_14020ea69;
    }
  }
  if (param_3[1] != 1) {
    FUN_1400b73c8(param_2,param_1);
    uVar3 = 0;
    goto LAB_14020ea69;
  }
  param_3[1] = 0;
  if (*(longlong **)(param_3 + 8) == (longlong *)0x0 || *(int *)(param_3 + 0x10) == 0) {
LAB_14020ea36:
    uVar3 = (ulonglong)*param_3;
    local_48 = CONCAT71(local_48._1_7_,*param_3);
    local_38 = 0;
    lVar4 = 0;
  }
  else {
    cVar1 = (**(code **)(**(longlong **)(param_3 + 8) + 0x30))();
    if (cVar1 == '\0') goto LAB_14020ea36;
    uVar3 = *(ulonglong *)(param_3 + 8);
    param_3[8] = 0;
    param_3[9] = 0;
    param_3[10] = 0;
    param_3[0xb] = 0;
    param_3[0xc] = 0;
    param_3[0xd] = 0;
    param_3[0xe] = 0;
    param_3[0xf] = 0;
    local_40 = *(undefined4 *)(param_3 + 0x10);
    param_3[0x10] = 0;
    param_3[0x11] = 0;
    param_3[0x12] = 0;
    param_3[0x13] = 0;
    local_38 = 1;
    lVar4 = 1;
    local_48 = uVar3;
  }
  FUN_1400b73c8(param_2,param_1);
  cVar1 = (char)uVar3;
  uVar3 = CONCAT71((int7)((ulonglong)param_3 >> 8),*param_1 != cVar1);
  if (*param_1 != cVar1) {
    *param_1 = cVar1;
    FUN_14094e0ca(param_2,param_1,0,0);
  }
  (*(code *)(&PTR_FUN_149ef1510)[lVar4])(&local_48);
LAB_14020ea69:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14020eb80 FUN_14020eb80 body=1 status=ok
// SIG undefined FUN_14020eb80(void)

void FUN_14020eb80(void)

{
  return;
}



// FUNCTION 14020eb82 FUN_14020eb82 body=1381 status=ok
// SIG undefined FUN_14020eb82(void)

undefined8 * FUN_14020eb82(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  undefined1 uVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  uint *puVar14;
  ulonglong uVar15;
  longlong lVar16;
  bool bVar17;
  uint uVar18;
  longlong *plVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  bool bVar22;
  undefined1 auStack_118 [47];
  undefined1 local_e9;
  longlong local_e8;
  longlong *local_e0;
  uint local_d8 [32];
  uint *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  *(undefined8 *)((longlong)param_2 + 5) = 0;
  *param_2 = 0;
  if (*(char *)(param_3 + 0x39) == '\x01') {
    FUN_1469537a6(*(undefined8 *)(param_3 + 0x28),param_1[9]);
  }
  plVar19 = &local_e8;
  (**(code **)(*param_1 + 0x20))(param_1,plVar19);
  if (*(char *)((longlong)param_1 + 0x79) == '\x01') {
    plVar19 = *(longlong **)(*(longlong *)(param_3 + 0x18) + 0x10);
    FUN_146930256(param_1,plVar19);
    *(undefined1 *)((longlong)param_1 + 0x79) = 0;
  }
  uVar6 = DAT_14c96b1e0;
  uVar20 = DAT_14c96b1e0;
  if ((*(char *)(local_e8 + 0x37) == '\0') && (DAT_14c96b1bc != 0)) {
    uVar6 = FUN_146949058();
    uVar20 = DAT_14c96b1e0;
  }
  uVar21 = DAT_14c979cd0;
  DAT_14c96b1e0 = uVar6;
  if (((*(char *)(param_3 + 0x39) == '\x01') && ((char)param_1[0xf] == '\0')) &&
     (DAT_14c979c54 != '\x01')) {
    uVar2 = *(uint *)(param_1[2] + 0x58);
    if ((longlong)(int)uVar2 != -1) {
      lVar16 = *(longlong *)(param_1[2] + 0x10);
      lVar13 = (longlong)(int)uVar2 * 0x40;
      if (*(int *)(lVar16 + 0x18 + lVar13) != 0) {
        DAT_14c979cd0 = 1;
        local_58 = (uint *)0x0;
        local_50 = 0x1000000000;
        uVar11 = (uint)*(ushort *)(lVar16 + 0xc + lVar13);
        if (((short)uVar2 != (short)DAT_14c967f78) || (DAT_14c967f78 >> 0x10 != uVar11)) {
          uVar18 = uVar2 & 0xffff;
          plVar19 = param_1 + 6;
          if (((((int)param_1[7] == 0) ||
               ((uVar3 = *(uint *)(*plVar19 + (longlong)((int)param_1[7] + -1) * 8),
                (short)uVar3 != (short)uVar2 || (uVar3 >> 0x10 != uVar11)))) &&
              (lVar16 = *(longlong *)
                         ((ulonglong)(uVar11 * 0x18) +
                         *(longlong *)(lVar16 + 0x10 + (ulonglong)(uVar18 << 6))), lVar16 != 0)) &&
             (*(int *)(lVar16 + 0x158) < *(int *)(param_3 + 0x34))) {
            local_e9 = uVar21;
            *(int *)(lVar16 + 0x158) = *(int *)(param_3 + 0x34) + 100;
            *(byte *)(lVar16 + 0x38) = *(byte *)(lVar16 + 0x38) | 0x10;
            iVar12 = *(int *)(*(longlong *)(param_1[2] + 0x10) + 8 + (ulonglong)(uVar18 << 6));
            iVar4 = (int)param_1[7];
            *(uint *)(param_1 + 7) = iVar4 + 1U;
            if (*(uint *)((longlong)param_1 + 0x3c) < iVar4 + 1U) {
              FUN_146934e96(plVar19,iVar4);
            }
            lVar16 = *plVar19;
            *(uint *)(lVar16 + (longlong)iVar4 * 8) = uVar11 << 0x10 | uVar18;
            *(uint *)(lVar16 + 4 + (longlong)iVar4 * 8) = iVar12 * 0x400 + uVar11;
            uVar21 = local_e9;
          }
        }
        iVar12 = (int)param_1[7];
        if (iVar12 < 1) {
          bVar7 = 0;
        }
        else {
          bVar22 = true;
          bVar17 = false;
          local_e9 = uVar21;
          bVar9 = 0;
          do {
            bVar7 = bVar9;
            if (bVar22 || bVar17) {
              if (iVar12 < 1) {
                puVar14 = local_58;
                if (local_58 == (uint *)0x0) {
                  puVar14 = local_d8;
                }
                uVar15 = (ulonglong)(*puVar14 >> 0x10);
                lVar13 = *(longlong *)
                          (*(longlong *)(param_1[2] + 0x10) + 0x10 +
                          (ulonglong)((*puVar14 & 0xffff) << 6));
                FUN_146933982(local_d8);
                lVar16 = *(longlong *)(lVar13 + uVar15 * 0x18);
                if ((lVar16 != 0) && ((*(byte *)(lVar13 + 0x15 + uVar15 * 0x18) & 3) == 3)) {
                  plVar19 = (longlong *)(lVar13 + uVar15 * 0x18);
LAB_14020efb7:
                  FUN_1469309f4(param_1,local_d8,plVar19,*(undefined4 *)(lVar16 + 0x15c));
                }
              }
              else {
                bVar7 = FUN_146930d8c(param_1,param_3,local_d8);
                bVar7 = bVar7 & 1 | bVar9;
                uVar21 = local_e9;
                if ((char)param_1[0xf] != '\0') break;
              }
            }
            else {
              puVar14 = local_58;
              if (local_58 == (uint *)0x0) {
                puVar14 = local_d8;
              }
              uVar15 = (ulonglong)(*puVar14 >> 0x10);
              lVar16 = *(longlong *)(param_1[2] + 0x10);
              lVar13 = *(longlong *)(lVar16 + 0x10 + (ulonglong)((*puVar14 & 0xffff) << 6));
              uVar2 = *(uint *)(lVar13 + 8 + uVar15 * 0x18);
              uVar11 = *(uint *)(param_1[6] + -4 + (longlong)iVar12 * 8);
              if ((uVar11 < *(int *)(lVar16 + 8 + (ulonglong)((uVar2 & 0xffff) << 6)) * 0x400 +
                            (uVar2 >> 0x10)) ||
                 (uVar2 = *(uint *)(lVar13 + 0x10 + uVar15 * 0x18),
                 *(int *)(lVar16 + 8 + (ulonglong)((uVar2 & 0xffff) << 6)) * 0x400 + (uVar2 >> 0x10)
                 < uVar11)) {
                plVar19 = (longlong *)(lVar13 + uVar15 * 0x18);
                FUN_146933982(local_d8);
                lVar16 = *plVar19;
                if ((lVar16 != 0) && ((*(byte *)((longlong)plVar19 + 0x15) & 3) == 3))
                goto LAB_14020efb7;
              }
              else {
                bVar8 = FUN_146930d8c(param_1,param_3,local_d8);
                bVar7 = bVar8 | bVar9;
                uVar21 = local_e9;
                if ((char)param_1[0xf] != '\0') break;
                bVar7 = bVar8 & 1 | bVar9;
              }
            }
            iVar12 = (int)param_1[7];
            bVar17 = iVar12 < 1;
            bVar22 = (int)local_50 == 0;
            uVar21 = local_e9;
            bVar9 = bVar7;
          } while (!bVar17 || !bVar22);
        }
        *(undefined4 *)(param_1 + 7) = 0;
        if (*(int *)((longlong)param_1 + 0x3c) < 0) {
          FUN_146934f1c(param_1 + 6,0);
        }
        if (local_58 != (uint *)0x0) {
          FUN_1400020a8();
        }
        bVar9 = *(byte *)(param_1 + 0xf);
        DAT_14c979cd0 = uVar21;
        if (bVar9 == 1) {
          uVar10 = (**(code **)(*param_1 + 0x28))(param_1,param_3);
          *(undefined4 *)(param_1 + 0xc) = uVar10;
          bVar9 = *(byte *)(param_1 + 0xf);
        }
        *(byte *)((longlong)param_2 + 0xc) = bVar7 & 1;
        if (((bVar9 & 1) == 0) && (0 < *(int *)(param_1[3] + 0x108))) {
          FUN_1469304f0(param_1);
        }
      }
    }
  }
  else {
    FUN_14032abc4(param_1,CONCAT71((int7)((ulonglong)plVar19 >> 8),*(char *)(param_3 + 0x39)) ^ 1);
    DAT_14c979cd0 = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
    param_1[8] = *(longlong *)(param_3 + 0x10);
    cVar5 = DAT_14c979c54;
    if (*(char *)(param_3 + 0x39) == '\x01') {
      DAT_14c979c54 = 1;
      FUN_146930422(param_1,&local_e8);
    }
    DAT_14c979c54 = cVar5;
    uVar10 = (**(code **)(*param_1 + 0x28))(param_1,param_3);
    *(undefined4 *)(param_1 + 0xc) = uVar10;
    *(undefined1 *)((longlong)param_2 + 0xc) = 1;
  }
  if (*(char *)(param_3 + 0x39) == '\x01') {
    lVar16 = *(longlong *)(param_3 + 0x28);
    piVar1 = (int *)(lVar16 + 0x8f8);
    *piVar1 = *piVar1 + -1;
    FUN_146968f00(lVar16 + 0x8e0);
  }
  if (*(int *)((longlong)param_1 + 0x3c) < 0) {
    *(undefined4 *)(param_1 + 7) = 0;
    FUN_146934f1c(param_1 + 6,0);
  }
  else {
    *(undefined4 *)(param_1 + 7) = 0;
  }
  *(int *)param_2 = (int)param_1[8];
  *(undefined4 *)((longlong)param_2 + 4) = *(undefined4 *)((longlong)param_1 + 0x44);
  *(int *)(param_2 + 1) = (int)param_1[0xc];
  DAT_14c96b1e0 = uVar20;
  if (local_e0 != (longlong *)0x0) {
    LOCK();
    plVar19 = local_e0 + 1;
    *(int *)plVar19 = (int)*plVar19 + -1;
    UNLOCK();
    if ((int)*plVar19 == 0) {
      (**(code **)*local_e0)(local_e0);
      LOCK();
      piVar1 = (int *)((longlong)local_e0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_e0 + 0x10))(local_e0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14020f0e8 FUN_14020f0e8 body=194 status=ok
// SIG undefined FUN_14020f0e8(void)

void FUN_14020f0e8(undefined8 param_1,longlong param_2)

{
  float fVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  double local_60 [3];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(char *)(param_2 + 0x70) == '\x01') && (*(char *)(param_2 + 8) == '\x01')) {
    local_38 = *(undefined8 *)(param_2 + 0x48);
    local_48 = *(undefined4 *)(param_2 + 0x38);
    uStack_44 = *(undefined4 *)(param_2 + 0x3c);
    uStack_40 = *(undefined4 *)(param_2 + 0x40);
    uStack_3c = *(undefined4 *)(param_2 + 0x44);
    local_30 = 1;
    FUN_1448052ee((undefined4 *)(param_2 + 0x50),local_60);
    fVar1 = (float)FUN_14020f1ac(param_1,&local_48);
    if (0.0 < fVar1) {
      local_60[0] = (double)fVar1;
      FUN_144a7484c(local_60,&local_88);
      *(undefined4 *)(param_2 + 0x60) = local_78;
      *(undefined4 *)(param_2 + 100) = uStack_74;
      *(undefined4 *)(param_2 + 0x68) = uStack_70;
      *(undefined4 *)(param_2 + 0x6c) = uStack_6c;
      *(undefined4 *)(param_2 + 0x50) = local_88;
      *(undefined4 *)(param_2 + 0x54) = uStack_84;
      *(undefined4 *)(param_2 + 0x58) = uStack_80;
      *(undefined4 *)(param_2 + 0x5c) = uStack_7c;
      *(undefined1 *)(param_2 + 0x70) = 1;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14020f1ac FUN_14020f1ac body=405 status=ok
// SIG undefined FUN_14020f1ac(void)

void FUN_14020f1ac(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined4 uVar9;
  float fVar10;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined1 local_58 [36];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar9 = 0;
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = *(uint *)(param_1 + 0x18);
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      plVar8 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((plVar8 != (longlong *)0x0) &&
         ((((int)plVar8[2] == *(int *)(param_1 + 0x1c) &&
           ((*(uint *)(plVar8 + 1) & 0x10200000) == 0)) && (lVar2 = *plVar8, lVar2 != 0)))) {
        if ((*(uint *)(plVar8 + 1) & 0x10200000) == 0) {
          uVar5 = (ulonglong)*(byte *)(lVar2 + 0xbd8);
        }
        else {
          uVar5 = 0;
        }
        lVar3 = *(longlong *)(param_1 + 0x20);
        fVar10 = *(float *)(lVar3 + 0x10 + uVar5 * 0x18);
        if ((fVar10 != 0.0) || (NAN(fVar10))) {
          FUN_142b41328(local_58);
          lVar6 = FUN_14479d2ce((uint *)(param_1 + 0x18));
          if (lVar6 == 0) {
            bVar4 = 0;
          }
          else {
            bVar4 = *(byte *)(lVar6 + 0xbd8);
          }
          local_68 = DAT_14c8464f0;
          local_78 = (undefined4)DAT_14c8464e0;
          uStack_74 = DAT_14c8464e0._4_4_;
          uStack_70 = (undefined4)DAT_14c8464e8;
          uStack_6c = DAT_14c8464e8._4_4_;
          if (((int)(uint)bVar4 < *(int *)(lVar2 + 0xbf0)) &&
             (plVar8 = *(longlong **)
                        (*(longlong *)(lVar2 + 0xbe8) + 8 +
                        (ulonglong)bVar4 * 0x80 + (ulonglong)bVar4 * 8), plVar8 != (longlong *)0x0))
          {
            (**(code **)(*plVar8 + 0x2c0))(plVar8,&local_78);
          }
          lVar3 = lVar3 + uVar5 * 0x18;
          lVar6 = FUN_1447210f0(lVar2);
          if (lVar6 == 0) {
            fVar10 = 0.0;
          }
          else {
            uVar7 = FUN_1447210f0(lVar2);
            fVar10 = (float)FUN_144a7c670(uVar7);
          }
          local_88 = *(undefined4 *)(lVar3 + 0xc);
          local_80 = 0xbf800000;
          FUN_14080f864(local_58,&local_78,param_2,fVar10 * *(float *)(lVar3 + 0x10));
          uVar9 = local_34;
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(uVar9);
}



// FUNCTION 14020f342 FUN_14020f342 body=156 status=ok
// SIG undefined FUN_14020f342(void)

void FUN_14020f342(longlong *param_1,undefined4 param_2)

{
  longlong *plVar1;
  undefined1 auStack_78 [40];
  undefined1 local_50 [24];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = param_1[0xc4];
  local_38 = (undefined4)param_1[0xc2];
  uStack_34 = *(undefined4 *)((longlong)param_1 + 0x614);
  uStack_30 = (undefined4)param_1[0xc3];
  uStack_2c = *(undefined4 *)((longlong)param_1 + 0x61c);
  (**(code **)(*param_1 + 0x680))(local_38,local_50);
  plVar1 = (longlong *)param_1[0x89];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x788))(plVar1,param_2,local_50,&local_38);
  }
  (**(code **)(*param_1 + 0x688))(param_1,local_50,0);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14020f3e0 FUN_14020f3e0 body=59 status=ok
// SIG undefined FUN_14020f3e0(void)

void FUN_14020f3e0(longlong *param_1,undefined8 param_2,char param_3)

{
  FUN_14020f440();
  if (param_3 == '\0') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014020f418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x790))(param_1,param_2);
  return;
}



// FUNCTION 14020f440 FUN_14020f440 body=559 status=ok
// SIG undefined FUN_14020f440(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14020f440(longlong *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  longlong *plVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined1 local_68 [24];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  dVar1 = *param_2;
  dVar2 = param_2[1];
  dVar21 = param_2[2];
  plVar7 = param_1;
  iVar4 = _finite(dVar1);
  uVar5 = SUB84(plVar7,0);
  if (iVar4 != 0) {
    iVar4 = _finite(dVar2);
    if (iVar4 != 0) {
      iVar4 = _finite(dVar21);
      if (iVar4 != 0) {
        dVar14 = (double)_DAT_14c761468;
        if (((ABS(dVar1) < dVar14) && (ABS(dVar2) < dVar14)) && (ABS(dVar21) < dVar14)) {
          dVar1 = (double)DAT_1499387d0;
          dVar2 = DAT_1499387d0._8_8_;
          auVar15._8_8_ = (double)param_1[0x82] - param_2[1];
          auVar15._0_8_ = (double)param_1[0x81] - *param_2;
          auVar16 = divpd(auVar15,_DAT_1499387d0);
          auVar8._0_8_ = ((double)param_1[0x83] - param_2[2]) / 360.0;
          auVar8._8_8_ = 0;
          auVar17 = roundpd(auVar16,auVar16,3);
          auVar16 = roundpd(auVar8,auVar8,3);
          auVar22._0_8_ = ((double)param_1[0x83] - param_2[2]) - auVar16._0_8_ * dVar1;
          auVar22._8_8_ = 0.0 - auVar16._8_8_ * dVar2;
          dVar21 = ((double)param_1[0x81] - *param_2) - auVar17._0_8_ * dVar1;
          dVar14 = ((double)param_1[0x82] - param_2[1]) - auVar17._8_8_ * dVar2;
          auVar20._0_8_ = dVar21 + dVar1;
          auVar20._8_8_ = dVar14 + dVar2;
          auVar19._0_8_ = dVar1 + auVar22._0_8_;
          auVar19._8_8_ = dVar2 + auVar22._8_8_;
          auVar9._8_8_ = -(ulonglong)(0.0 <= dVar14);
          auVar9._0_8_ = -(ulonglong)(0.0 <= dVar21);
          auVar16._8_8_ = dVar14;
          auVar16._0_8_ = dVar21;
          auVar17 = blendvpd(auVar20,auVar16,auVar9);
          auVar10._8_8_ = -(ulonglong)(0.0 <= auVar22._8_8_);
          auVar10._0_8_ = -(ulonglong)(0.0 <= auVar22._0_8_);
          auVar16 = blendvpd(auVar19,auVar22,auVar10);
          auVar23._0_8_ = auVar17._0_8_ + -360.0;
          auVar23._8_8_ = auVar17._8_8_ + -360.0;
          auVar11._8_8_ = -(ulonglong)(180.0 < auVar17._8_8_);
          auVar11._0_8_ = -(ulonglong)(180.0 < auVar17._0_8_);
          auVar8 = blendvpd(auVar17,auVar23,auVar11);
          auVar12._8_8_ = -(ulonglong)(180.0 < auVar16._8_8_);
          auVar12._0_8_ = -(ulonglong)(180.0 < auVar16._0_8_);
          auVar17._8_8_ = auVar16._8_8_ + -360.0;
          auVar17._0_8_ = auVar16._0_8_ + -360.0;
          auVar16 = blendvpd(auVar16,auVar17,auVar12);
          auVar18._8_8_ = -(ulonglong)(0.0010000000474974513 < ABS(auVar8._8_8_));
          auVar18._0_8_ = -(ulonglong)(0.0010000000474974513 < ABS(auVar8._0_8_));
          iVar4 = movmskpd(iVar4,auVar18);
          auVar13._8_8_ = -(ulonglong)(0.0010000000474974513 < ABS(auVar16._8_8_));
          auVar13._0_8_ = -(ulonglong)(0.0010000000474974513 < ABS(auVar16._0_8_));
          uVar6 = movmskpd(uVar5,auVar13);
          if ((uVar6 & 0x3fffffff) != 0 || iVar4 != 0) {
            param_1[0x83] = (longlong)param_2[2];
            dVar1 = param_2[1];
            param_1[0x81] = (longlong)*param_2;
            param_1[0x82] = (longlong)dVar1;
            lVar3 = param_1[0x39];
            if ((lVar3 != 0) && ((*(byte *)(lVar3 + 0x1f8) & 8) != 0)) {
              (**(code **)(*param_1 + 0x680))(param_1,local_68);
              local_78 = 0;
              FUN_14020f670(lVar3,local_68,0,0);
            }
          }
        }
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14020f670 FUN_14020f670 body=235 status=ok
// SIG undefined FUN_14020f670(void)

void FUN_14020f670(longlong param_1,undefined4 *param_2,undefined4 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined1 local_c0;
  undefined1 local_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined1 local_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*(longlong *)(param_1 + 0x120) == 0) {
    local_88 = *(undefined8 *)(param_2 + 4);
    local_98 = *param_2;
    uStack_94 = param_2[1];
    uStack_90 = param_2[2];
    uStack_8c = param_2[3];
    local_c8 = CONCAT71(local_c8._1_7_,param_5);
    FUN_14020f75c(param_1,&local_98,param_3,param_4);
  }
  else {
    FUN_144a7484c(param_2,local_b8);
    FUN_140e1cfe8(param_1,local_78,local_b8);
    local_48 = *(undefined8 *)(param_1 + 0x1a8);
    local_58 = *(undefined4 *)(param_1 + 0x198);
    uStack_54 = *(undefined4 *)(param_1 + 0x19c);
    uStack_50 = *(undefined4 *)(param_1 + 0x1a0);
    uStack_4c = *(undefined4 *)(param_1 + 0x1a4);
    local_c0 = param_5;
    local_c8 = param_4;
    FUN_144927ad4(param_1,&local_58,local_78,param_3);
  }
  if ((local_38 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14020f75c FUN_14020f75c body=830 status=ok
// SIG undefined FUN_14020f75c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14020f75c(longlong param_1,undefined1 (*param_2) [16],undefined4 param_3,undefined8 param_4
                  ,undefined1 param_5)

{
  undefined1 auVar1 [16];
  int iVar2;
  uint uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
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
  double dVar18;
  double dVar19;
  double dVar23;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double _X;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined1 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  double local_d8;
  double dStack_d0;
  undefined1 local_c8 [16];
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  auVar1 = *param_2;
  dVar19 = *(double *)param_2[1];
  dVar18 = auVar1._0_8_ - *(double *)(param_1 + 0x1b0);
  dVar23 = auVar1._8_8_ - *(double *)(param_1 + 0x1b8);
  dVar4 = dVar19 - *(double *)(param_1 + 0x1c0);
  dVar5 = (double)DAT_1499387d0;
  dVar6 = DAT_1499387d0._8_8_;
  auVar13._8_8_ = dVar23;
  auVar13._0_8_ = dVar18;
  auVar8._0_8_ = dVar4 / 360.0;
  auVar14 = divpd(auVar13,_DAT_1499387d0);
  auVar8._8_8_ = 0;
  auVar14 = roundpd(auVar14,auVar14,3);
  auVar8 = roundpd(auVar8,auVar8,3);
  auVar24._0_8_ = dVar4 - auVar8._0_8_ * dVar5;
  auVar24._8_8_ = 0.0 - auVar8._8_8_ * dVar6;
  auVar20._0_8_ = dVar18 - auVar14._0_8_ * dVar5;
  auVar20._8_8_ = dVar23 - auVar14._8_8_ * dVar6;
  auVar17._0_8_ = auVar20._0_8_ + dVar5;
  auVar17._8_8_ = auVar20._8_8_ + dVar6;
  auVar16._0_8_ = auVar24._0_8_ + dVar5;
  auVar16._8_8_ = auVar24._8_8_ + dVar6;
  auVar14._8_8_ = -(ulonglong)(0.0 <= auVar20._8_8_);
  auVar14._0_8_ = -(ulonglong)(0.0 <= auVar20._0_8_);
  auVar14 = blendvpd(auVar17,auVar20,auVar14);
  auVar9._8_8_ = -(ulonglong)(0.0 <= auVar24._8_8_);
  auVar9._0_8_ = -(ulonglong)(0.0 <= auVar24._0_8_);
  auVar8 = blendvpd(auVar16,auVar24,auVar9);
  auVar25._0_8_ = auVar14._0_8_ + -360.0;
  auVar25._8_8_ = auVar14._8_8_ + -360.0;
  auVar21._0_8_ = auVar8._0_8_ + -360.0;
  auVar21._8_8_ = auVar8._8_8_ + -360.0;
  auVar10._8_8_ = -(ulonglong)(180.0 < auVar14._8_8_);
  auVar10._0_8_ = -(ulonglong)(180.0 < auVar14._0_8_);
  auVar14 = blendvpd(auVar14,auVar25,auVar10);
  auVar11._8_8_ = -(ulonglong)(180.0 < auVar8._8_8_);
  auVar11._0_8_ = -(ulonglong)(180.0 < auVar8._0_8_);
  auVar8 = blendvpd(auVar8,auVar21,auVar11);
  auVar15._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar14._8_8_));
  auVar15._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar14._0_8_));
  iVar2 = movmskpd((int)local_b0,auVar15);
  auVar12._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar8._8_8_));
  auVar12._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar8._0_8_));
  uVar3 = movmskpd((int)param_1,auVar12);
  if ((uVar3 & 0x3fffffff) != 0 || iVar2 != 0) {
    auVar22._8_8_ = 0;
    auVar22._0_8_ = dVar19;
    auVar8 = divpd(auVar1,_DAT_1499387d0);
    auVar14 = divpd(auVar22,_DAT_1499387d0);
    auVar8 = roundpd(auVar8,auVar8,3);
    auVar14 = roundpd(auVar14,auVar14,3);
    dVar4 = (auVar1._0_8_ - auVar8._0_8_ * dVar5) * 0.008726646259971648;
    dVar18 = (auVar1._8_8_ - auVar8._8_8_ * dVar6) * 0.008726646259971648;
    dVar19 = (dVar19 - auVar14._0_8_ * dVar5) * 0.008726646259971648;
    _X = (0.0 - auVar14._8_8_ * dVar6) * 0.008726646259971648;
    dVar5 = sin(dVar4);
    dVar6 = sin(dVar18);
    dVar23 = sin(dVar19);
    sin(_X);
    dVar4 = cos(dVar4);
    dVar18 = cos(dVar18);
    dVar7 = cos(dVar19);
    cos(_X);
    dVar19 = dVar6 * dVar5 * dVar23 + dVar18 * dVar4 * dVar7;
    local_d8 = dVar5 * dVar6 * dVar7 - dVar4 * dVar18 * dVar23;
    dStack_d0 = -(dVar5 * dVar18 * dVar7) - dVar4 * dVar6 * dVar23;
    local_c8._8_4_ = SUB84(dVar19,0);
    local_c8._0_8_ = -(dVar18 * dVar5 * dVar23) + dVar6 * dVar4 * dVar7;
    local_c8._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
    local_f8 = *(undefined8 *)(param_1 + 0x198);
    uStack_f0 = *(undefined8 *)(param_1 + 0x1a0);
    local_e8 = *(undefined8 *)(param_1 + 0x1a8);
    local_100 = param_5;
    local_108 = param_4;
    FUN_144927ad4(param_1,&local_f8,&local_d8,param_3);
  }
  if ((local_b0 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14020fa9c FUN_14020fa9c body=57 status=ok
// SIG undefined FUN_14020fa9c(void)

void FUN_14020fa9c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb3998 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb3998 = FUN_140002ddd(FUN_1465f9174,uVar1,L"OakUIDisplayDataDef_ActionSkill");
  }
  return;
}



// FUNCTION 14020fad6 FUN_14020fad6 body=159 status=ok
// SIG undefined FUN_14020fad6(void)

longlong * FUN_14020fad6(longlong *param_1,wchar_t *param_2)

{
  uint uVar1;
  size_t sVar2;
  uint uVar3;
  int iVar4;
  
  if ((wchar_t *)*param_1 != param_2) {
    iVar4 = 0;
    uVar3 = 0;
    if ((param_2 != (wchar_t *)0x0) && (uVar3 = 0, *param_2 != L'\0')) {
      sVar2 = wcslen(param_2);
      uVar3 = (int)sVar2 + 1;
      if ((int)sVar2 < -1) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(uVar3);
      }
    }
    *(undefined4 *)(param_1 + 1) = 0;
    uVar1 = uVar3;
    if (*(uint *)((longlong)param_1 + 0xc) != uVar3) {
      FUN_1446f8c06(param_1,uVar3);
      iVar4 = (int)param_1[1];
      uVar1 = *(uint *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar4 + uVar3;
    if (uVar1 - iVar4 < uVar3) {
      FUN_144a2dbb8(param_1,iVar4);
    }
    else if (uVar3 == 0) {
      return param_1;
    }
    memcpy((void *)*param_1,param_2,(ulonglong)(uVar3 * 2));
  }
  return param_1;
}



// FUNCTION 14020fb76 FUN_14020fb76 body=228 status=ok
// SIG undefined FUN_14020fb76(void)

longlong FUN_14020fb76(void)

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
  if (DAT_14cbb6070 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14656c522;
    local_38 = &LAB_148c659e3;
    local_40 = &LAB_145adf66f;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 0x10;
    local_68 = 0x600;
    FUN_14081cfa3(L"/Script/OakGame",L"OakUIView",&DAT_14cbb6070,&DAT_148c659e2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbb6070;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14020fc5c FUN_14020fc5c body=462 status=ok
// SIG undefined FUN_14020fc5c(void)

void FUN_14020fc5c(longlong *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  
  iVar3 = DAT_14c9647dc;
  if (((ushort *)param_1[0x2b] == (ushort *)0x0) ||
     ((*(ushort *)param_1[0x2b] >> (*(uint *)(param_1 + 0x2a) & 0x1f) & 1) == 0)) {
    return;
  }
  iVar1 = *(int *)((longlong)param_1 + 0x34);
  if (((iVar1 == 0) || (uVar2 = *(uint *)(param_1 + 6), (int)uVar2 < 0)) ||
     (DAT_14c9647dc <= (int)uVar2)) {
    lVar9 = 0;
    cVar4 = FUN_140432338(0);
    if (cVar4 == '\0') {
      return;
    }
  }
  else {
    puVar5 = (undefined8 *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if (((puVar5 == (undefined8 *)0x0) || (*(int *)(puVar5 + 2) != iVar1)) ||
       ((*(uint *)(puVar5 + 1) & 0x10200000) != 0)) {
      uVar8 = 0;
    }
    else {
      uVar8 = *puVar5;
    }
    cVar4 = FUN_140432338(uVar8);
    if (cVar4 == '\0') {
      return;
    }
    if ((((int)uVar2 < iVar3) &&
        (plVar6 = (longlong *)
                  ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
        plVar6 != (longlong *)0x0)) &&
       (((int)plVar6[2] == iVar1 && ((*(uint *)(plVar6 + 1) & 0x10200000) == 0)))) {
      lVar9 = *plVar6;
    }
    else {
      lVar9 = 0;
    }
  }
  if (*(int *)(lVar9 + 0x388) == 0) {
LAB_14020fe11:
    lVar7 = 0;
  }
  else {
    uVar2 = *(uint *)(lVar9 + 900);
    lVar7 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      plVar6 = (longlong *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((plVar6 == (longlong *)0x0) ||
         (((int)plVar6[2] != *(int *)(lVar9 + 0x388) || ((*(uint *)(plVar6 + 1) & 0x10200000) != 0))
         )) goto LAB_14020fe11;
      lVar7 = *plVar6;
    }
  }
  if (*(int *)(lVar7 + 0x84) != 0) {
    uVar2 = *(uint *)(lVar7 + 0x80);
    lVar9 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14020fddb;
    plVar6 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar6 != (longlong *)0x0) &&
       (((int)plVar6[2] == *(int *)(lVar7 + 0x84) && ((*(uint *)(plVar6 + 1) & 0x10200000) == 0))))
    {
      lVar9 = *plVar6;
      goto LAB_14020fddb;
    }
  }
  lVar9 = 0;
LAB_14020fddb:
                    /* WARNING: Could not recover jumptable at 0x00014020fdf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xd0))(param_1,lVar9 + 0x40);
  return;
}



// FUNCTION 14020fe2a FUN_14020fe2a body=148 status=ok
// SIG undefined FUN_14020fe2a(void)

undefined8 * FUN_14020fe2a(undefined8 *param_1,undefined8 *param_2)

{
  undefined2 uVar1;
  void *_Src;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  uint uVar5;
  undefined2 *puVar6;
  
  *param_2 = 0;
  iVar4 = *(int *)(param_1 + 1);
  _Src = (void *)*param_1;
  *(int *)(param_2 + 1) = iVar4;
  if ((longlong)iVar4 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    iVar4 = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar4,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar4 * 2);
    iVar4 = *(int *)(param_2 + 1);
  }
  uVar5 = iVar4 - 1;
  if (iVar4 == 0) {
    uVar5 = 0;
  }
  if (0 < (int)uVar5) {
    puVar6 = (undefined2 *)*param_2 + ((ulonglong)uVar5 - 1);
    puVar2 = (undefined2 *)*param_2;
    do {
      puVar3 = puVar2 + 1;
      uVar1 = *puVar2;
      *puVar2 = *puVar6;
      *puVar6 = uVar1;
      puVar6 = puVar6 + -1;
      puVar2 = puVar3;
    } while (puVar3 < puVar6);
  }
  return param_2;
}



// FUNCTION 14020febe FUN_14020febe body=1473 status=ok
// SIG undefined FUN_14020febe(void)

ulonglong FUN_14020febe(double *param_1,double *param_2,double *param_3,double *param_4,
                       float *param_5,byte *param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 unaff_RDI;
  ulonglong uVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  float fVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_208 [32];
  undefined1 local_1e8 [64];
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_168;
  double dStack_160;
  double local_150;
  double local_148;
  double dStack_140;
  double local_130;
  double local_128;
  double dStack_120;
  double local_110;
  double local_108;
  double dStack_100;
  double local_f0;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_208;
  if (param_1 == (double *)0x0) {
    uVar8 = 0;
  }
  else {
    FUN_14012d55c(param_1,&local_168);
    dVar1 = *param_2;
    dVar11 = param_2[1];
    dVar2 = param_2[2];
    dVar4 = local_150 * dVar1 + local_130 * dVar11 + local_110 * dVar2 + local_f0;
    uVar8 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),0.0 < dVar4);
    dVar16 = *param_1;
    dVar10 = param_1[1];
    dVar3 = param_1[2];
    dVar5 = dVar1 - dVar16;
    dVar15 = dVar11 - dVar10;
    dVar6 = dVar2 - dVar3;
    *param_5 = (float)SQRT(dVar6 * dVar6 + dVar15 * dVar15 + dVar5 * dVar5);
    if (9.99999993922529e-09 < ABS(dVar4)) {
      dVar5 = (dStack_100 + dVar2 * dStack_120 + dVar11 * dStack_140 + dVar1 * dStack_160) *
              (double)(float)(1.0 / dVar4);
      if (dVar4 <= 0.0) {
        FUN_14007522e(local_1e8,param_1 + 4);
        dVar6 = local_198 * local_198 + local_1a8 * local_1a8 + local_1a0 * local_1a0;
        if (((dVar6 != 1.0) ||
            (dVar15 = local_1a8, dVar12 = local_1a0, dVar14 = local_198, NAN(dVar6))) &&
           (dVar15 = DAT_14c8464e0, dVar12 = DAT_14c8464e8, dVar14 = DAT_14c8464f0,
           9.99999993922529e-09 <= dVar6)) {
          dVar15 = 1.0 / SQRT(dVar6);
          dVar14 = local_198 * dVar15;
          dVar12 = local_1a0 * dVar15;
          dVar15 = local_1a8 * dVar15;
        }
        dVar3 = param_2[2] - dVar3;
        dVar10 = param_2[1] - dVar10;
        dVar16 = *param_2 - dVar16;
        dVar6 = dVar3 * dVar3 + dVar16 * dVar16 + dVar10 * dVar10;
        if (((dVar6 != 1.0) || (dVar17 = dVar16, dVar18 = dVar10, dVar7 = dVar3, NAN(dVar6))) &&
           (dVar17 = DAT_14c8464e0, dVar18 = DAT_14c8464e8, dVar7 = DAT_14c8464f0,
           9.99999993922529e-09 <= dVar6)) {
          dVar6 = 1.0 / SQRT(dVar6);
          dVar17 = dVar16 * dVar6;
          dVar18 = dVar10 * dVar6;
          dVar7 = dVar3 * dVar6;
        }
        dVar10 = dVar12 * dVar18 + dVar17 * dVar15 + dVar7 * dVar14;
        dVar16 = dVar10;
        if (1.0 <= dVar10) {
          dVar16 = 1.0;
        }
        dVar16 = acos((double)(-(ulonglong)(dVar10 < -1.0) & 0xbff0000000000000 |
                              ~-(ulonglong)(dVar10 < -1.0) & (ulonglong)dVar16));
        dVar16 = (double)(float)(dVar16 * 57.29577951308232) / 180.0;
        if (1.0 <= dVar16) {
          dVar16 = 1.0;
        }
        if (dVar16 <= 0.0) {
          dVar16 = 0.0;
        }
        dVar5 = dVar5 + (double)(float)(dVar16 + dVar16 + 0.0);
      }
      fVar13 = (float)((local_108 + dVar2 * local_128 + dVar11 * local_148 + dVar1 * local_168) *
                       (double)(float)(1.0 / dVar4) * 0.5 + 0.5);
      fVar9 = (float)(dVar5 * -0.5 + 1.0 + -0.5);
      *param_6 = (-(fVar9 < 0.0) | -(1.0 < fVar9) | -(fVar13 < 0.0) | -(1.0 < fVar13)) & 1;
      dVar1 = param_3[2];
      dVar2 = (double)fVar13 + -0.5;
      dVar16 = (double)fVar9 + -0.5;
      dVar11 = (double)(float)dVar1;
      dVar10 = pow(ABS(dVar2 / *param_3),dVar11);
      dVar11 = pow(ABS(dVar16 / param_3[1]),dVar11);
      if (((1.0 < (float)(dVar11 + dVar10)) || (dVar4 <= 0.0)) || (*param_6 == 1)) {
        *param_6 = 1;
        fVar9 = powf(1.0 / (float)(dVar11 + dVar10),1.0 / (float)dVar1);
        dVar2 = dVar2 * (double)fVar9;
        dVar16 = dVar16 * (double)fVar9;
      }
      dVar2 = dVar2 + 0.5;
      if (dVar4 <= 0.0) {
        dVar2 = 1.0 - dVar2;
      }
      *param_4 = dVar2 * 100.0;
      param_4[1] = (double)(~-(ulonglong)(0.0 < dVar4) & (ulonglong)(1.0 - (dVar16 + 0.5)) |
                           (ulonglong)(dVar16 + 0.5) & -(ulonglong)(0.0 < dVar4)) * 100.0;
    }
  }
  if ((local_e0 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 140210480 FUN_140210480 body=206 status=ok
// SIG undefined FUN_140210480(void)

int FUN_140210480(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  int iVar5;
  longlong lVar6;
  
  iVar5 = FUN_14021054e();
  if (iVar5 == -1) {
    iVar5 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar5 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar5 + 1U) {
      FUN_140166dde(param_1,iVar5);
    }
    lVar2 = *param_1;
    lVar6 = (longlong)iVar5 * 0x30;
    lVar1 = lVar2 + lVar6;
    *(undefined8 *)(lVar2 + lVar6) = *param_2;
    lVar3 = param_2[1];
    *(longlong *)(lVar2 + 8 + lVar6) = lVar3;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
    *(undefined8 *)(lVar1 + 0x10) = param_2[2];
    lVar2 = param_2[3];
    *(longlong *)(lVar1 + 0x18) = lVar2;
    if ((lVar2 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    bVar4 = DAT_14c950c29;
    lVar2 = param_2[4];
    *(longlong *)(lVar1 + 0x20) = lVar2;
    if ((lVar2 != 0 & bVar4) == 1) {
      FUN_1456cec3c();
    }
    *(undefined1 *)(lVar1 + 0x2c) = *(undefined1 *)((longlong)param_2 + 0x2c);
    *(undefined4 *)(lVar1 + 0x28) = *(undefined4 *)(param_2 + 5);
  }
  return iVar5;
}



// FUNCTION 14021054e FUN_14021054e body=111 status=ok
// SIG undefined FUN_14021054e(void)

int FUN_14021054e(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  ulonglong uVar5;
  
  lVar3 = param_1[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_1;
    uVar5 = 0;
    do {
      lVar2 = *(longlong *)(lVar1 + 0x10 + uVar5);
      if ((lVar2 == *(longlong *)(param_2 + 0x10)) ||
         (((lVar2 != 0 && (*(longlong *)(param_2 + 0x10) != 0)) &&
          (cVar4 = FUN_1402105be(), cVar4 != '\0')))) {
        return (int)(uVar5 >> 4) * -0x55555555;
      }
      uVar5 = uVar5 + 0x30;
    } while ((longlong)(int)lVar3 * 0x30 != uVar5);
  }
  return -1;
}



// FUNCTION 1402105be FUN_1402105be body=168 status=ok
// SIG undefined FUN_1402105be(void)

undefined8 FUN_1402105be(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined7 uVar4;
  longlong lVar2;
  undefined8 uVar3;
  undefined7 extraout_var;
  longlong lVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (lVar2 == 0) {
    lVar5 = *(longlong *)(param_1 + 0x50);
    if (lVar5 != 0) {
LAB_1402105df:
      lVar1 = *(longlong *)(param_2 + 0x50);
      uVar4 = (undefined7)((ulonglong)lVar2 >> 8);
      if ((lVar1 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar1);
        lVar5 = *(longlong *)(param_1 + 0x50);
        uVar4 = extraout_var;
      }
      if (lVar5 == lVar1) {
        return CONCAT71(uVar4,1);
      }
      if (lVar5 != 0 || *(longlong *)(param_1 + 0x48) != 0) goto LAB_14021060e;
    }
LAB_14021063a:
    uVar3 = CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x3c) >> 8),
                     *(longlong *)(param_1 + 0x3c) == *(longlong *)(param_2 + 0x3c));
  }
  else {
    lVar5 = *(longlong *)(param_2 + 0x48);
    if ((lVar5 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar5);
      lVar2 = *(longlong *)(param_1 + 0x48);
    }
    if (lVar2 == lVar5) {
      return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
    }
    lVar5 = *(longlong *)(param_1 + 0x50);
    if (lVar5 != 0) goto LAB_1402105df;
    if (lVar2 == 0) goto LAB_14021063a;
LAB_14021060e:
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 140210666 FUN_140210666 body=333 status=ok
// SIG undefined FUN_140210666(void)

void FUN_140210666(longlong param_1)

{
  float *pfVar1;
  longlong lVar2;
  char cVar3;
  
  lVar2 = *(longlong *)(param_1 + 0xae8);
  if (lVar2 != 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cb761f0) {
      FUN_144b3d300(&DAT_14cb761f0);
      if (DAT_14cb761f0 == -1) {
        FUN_1446f470e(&DAT_14cb761e8,L"ClothBlendWeight",1);
        _Init_thread_footer(&DAT_14cb761f0);
      }
    }
    pfVar1 = (float *)(param_1 + 0xc78);
    cVar3 = FUN_1448f9132(lVar2,DAT_14cb761e8,pfVar1);
    if (cVar3 != '\0') {
      *pfVar1 = 1.0 - *pfVar1;
    }
    lVar2 = *(longlong *)(param_1 + 0xae8);
    if (lVar2 != 0) {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14cb76200) {
        FUN_144b3d300(&DAT_14cb76200);
        if (DAT_14cb76200 == -1) {
          FUN_1446f470e(&DAT_14cb761f8,L"ClothMaxDistanceScale",1);
          _Init_thread_footer(&DAT_14cb76200);
        }
      }
      FUN_1448f9132(lVar2,DAT_14cb761f8,param_1 + 0xc9c);
      return;
    }
  }
  return;
}



// FUNCTION 1402107b4 FUN_1402107b4 body=1093 status=ok
// SIG undefined FUN_1402107b4(void)

void FUN_1402107b4(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  short sVar6;
  undefined4 uVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  byte bVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  uint uVar16;
  int iVar17;
  ulonglong *puVar18;
  ulonglong *puVar19;
  byte bVar20;
  ulonglong uVar21;
  undefined1 auStack_98 [38];
  ushort local_72;
  undefined8 local_70;
  uint local_64;
  longlong local_60;
  ulonglong *local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((longlong)*(int *)(param_1 + 0x2b8) == 0) {
LAB_140210a3e:
    *(undefined4 *)(param_1 + 0x2b8) = 0;
    if (*(int *)(param_1 + 700) < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_98);
    }
    if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  puVar18 = *(ulonglong **)(param_1 + 0x2b0);
  puVar19 = puVar18 + *(int *)(param_1 + 0x2b8);
LAB_1402107f4:
  uVar5 = (uint)*puVar18;
  if ((uVar5 & 0x3fffff) < *(uint *)(param_1 + 0xa8)) {
    lVar8 = (ulonglong)(uVar5 & 0x3fffff) * 0xf0;
    lVar12 = *(longlong *)(param_1 + 0xa0) + lVar8;
    if (((lVar12 != 0) &&
        (uVar5 >> 0x16 == (uint)*(ushort *)(*(longlong *)(param_1 + 0xa0) + 0xec + lVar8))) &&
       (bVar11 = *(byte *)(lVar12 + 0x2a), bVar11 != 0)) {
      uVar21 = 0;
      bVar20 = 0;
LAB_14021084b:
      bVar1 = *(byte *)(lVar12 + 0xbd + uVar21);
      lVar8 = *(longlong *)(*(longlong *)(lVar12 + 200) + (ulonglong)bVar1 * 8);
      uVar13 = (uint)bVar1 << 0x1c | *(uint *)((longlong)puVar18 + 4) & 0xfffffff;
      uVar10 = CONCAT44(uVar13,uVar5);
      uVar14 = (uVar13 >> 1 ^ uVar10) * -0xae502812aa7333;
      lVar15 = (uVar14 >> 0x21 ^ uVar14) * -0x3b314601e57a13ad;
      uVar13 = *(uint *)(*(longlong *)(lVar8 + 0xa8) +
                        (ulonglong)
                        (((uint)((ulonglong)lVar15 >> 0x21) ^ (uint)lVar15) &
                         *(uint *)(lVar8 + 0x9c) & 0xffff) * 4);
      if (uVar13 != 0xffffffff) {
        do {
          if (*(ulonglong *)(*(longlong *)(lVar8 + 0xd8) + (longlong)(int)uVar13 * 8) == uVar10) {
            local_58 = puVar19;
            if (*(uint *)(lVar8 + 0x78) <= (uVar13 & 0xffff)) goto LAB_14021093e;
            uVar10 = (ulonglong)(uVar13 & 0xffff);
            uVar2 = *(ushort *)(*(longlong *)(lVar8 + 0x90) + uVar10 * 2);
            if (uVar2 == 0xffff) goto LAB_14021093e;
            uVar13 = *(uint *)(*(longlong *)(lVar8 + 0x88) + uVar10 * 4);
            uVar16 = *(int *)(lVar8 + 0x70) - 1;
            *(uint *)(lVar8 + 0x70) = uVar16;
            uVar14 = (ulonglong)((uint)uVar2 * 2);
            *(undefined2 *)(*(longlong *)(lVar8 + 0x80) + uVar14) =
                 *(undefined2 *)(*(longlong *)(lVar8 + 0x80) + (ulonglong)uVar16 * 2);
            *(ushort *)
             (*(longlong *)(lVar8 + 0x90) +
             (ulonglong)*(ushort *)(*(longlong *)(lVar8 + 0x80) + uVar14) * 2) = uVar2;
            *(undefined2 *)(*(longlong *)(lVar8 + 0x90) + uVar10 * 2) = 0xffff;
            uVar3 = *(ushort *)(*(longlong *)(lVar8 + 0x80) + uVar14);
            if (*(uint *)(*(longlong *)(lVar8 + 0x88) + (ulonglong)uVar3 * 4) <= uVar13) {
              FUN_1456e6cf4((uint *)(lVar8 + 0x70),uVar2);
              goto LAB_14021093e;
            }
            uVar13 = (uint)uVar2 * 2 + 1;
            uVar16 = *(uint *)(lVar8 + 0x70);
            if (uVar16 <= (uVar13 & 0xffff)) goto LAB_14021093e;
            iVar17 = (uint)uVar2 + (uint)uVar2;
            local_72 = uVar2;
            goto LAB_140210a9e;
          }
          uVar13 = *(uint *)(*(longlong *)(lVar8 + 0xb0) + (ulonglong)uVar13 * 4);
        } while (uVar13 != 0xffffffff);
      }
      bVar20 = bVar20 | (byte)(1 << ((byte)uVar21 & 0x1f));
      goto LAB_140210901;
    }
  }
  goto LAB_1402109b6;
  while( true ) {
    *(ushort *)(local_70 + ((uint)local_72 + (uint)local_72)) = uVar4;
    *(ushort *)
     (*(longlong *)(lVar8 + 0x90) +
     (ulonglong)
     *(ushort *)(*(longlong *)(lVar8 + 0x80) + (ulonglong)((uint)local_72 + (uint)local_72)) * 2) =
         local_72;
    iVar17 = uVar9 * 2;
    uVar13 = uVar9 * 2 + 1;
    local_70._4_4_ = (undefined4)(local_70 >> 0x20);
    local_70 = CONCAT44(local_70._4_4_,uVar13) & 0xffffffff0000ffff;
    uVar16 = *(uint *)(lVar8 + 0x70);
    local_72 = (ushort)uVar9;
    if (uVar16 <= (uint)local_70) break;
LAB_140210a9e:
    local_64 = iVar17 + 2;
    local_70 = *(ulonglong *)(lVar8 + 0x80);
    lVar15 = *(longlong *)(lVar8 + 0x88);
    uVar9 = uVar13;
    if (((local_64 & 0xffff) < uVar16) &&
       (local_60 = lVar15,
       *(uint *)(lVar15 + (ulonglong)*(ushort *)(local_70 + (ulonglong)(local_64 & 0xffff) * 2) * 4)
       <= *(uint *)(lVar15 + (ulonglong)*(ushort *)(local_70 + (ulonglong)(uVar13 & 0xffff) * 2) * 4
                   ))) {
      uVar9 = local_64;
    }
    uVar4 = *(ushort *)(local_70 + (ulonglong)(uVar9 & 0xffff) * 2);
    if (*(uint *)(lVar15 + (ulonglong)uVar3 * 4) <= *(uint *)(lVar15 + (ulonglong)uVar4 * 4)) {
      uVar9 = (uint)local_72;
      break;
    }
  }
  if ((ushort)uVar9 != uVar2) {
    uVar10 = (ulonglong)((uVar9 & 0xffff) * 2);
    *(ushort *)(*(longlong *)(lVar8 + 0x80) + uVar10) = uVar3;
    *(ushort *)
     (*(longlong *)(lVar8 + 0x90) + (ulonglong)*(ushort *)(*(longlong *)(lVar8 + 0x80) + uVar10) * 2
     ) = (ushort)uVar9;
  }
LAB_14021093e:
  bVar11 = *(byte *)(lVar12 + 0x2a);
  puVar19 = local_58;
LAB_140210901:
  uVar21 = uVar21 + 1;
  if (bVar11 <= uVar21) goto LAB_14021094b;
  goto LAB_14021084b;
LAB_14021094b:
  if (bVar20 != 0) {
    uVar7 = (**(code **)(**(longlong **)(lVar12 + 0xd8) + 0x10))
                      (*(longlong **)(lVar12 + 0xd8),
                       *(uint *)((longlong)puVar18 + 4) >> 0x18 & 0xffffff0f,
                       *(uint *)((longlong)puVar18 + 4) & 0xffffff);
    local_50 = (ulonglong)(*(byte *)(lVar12 + 0xc5) & 7) << 0x3c | *puVar18 & 0xfffffffffffffff;
    sVar6 = FUN_140210c12(param_2,&local_50,bVar20,uVar7);
    if (sVar6 == -1) {
      iVar17 = *(int *)(param_1 + 0x2c8);
      *(uint *)(param_1 + 0x2c8) = iVar17 + 1U;
      if (*(uint *)(param_1 + 0x2cc) < iVar17 + 1U) {
        FUN_14063e3ec((longlong *)(param_1 + 0x2c0),iVar17);
      }
      *(ulonglong *)(*(longlong *)(param_1 + 0x2c0) + (longlong)iVar17 * 8) = *puVar18;
    }
  }
LAB_1402109b6:
  puVar18 = puVar18 + 1;
  if (puVar18 == puVar19) goto LAB_140210a3e;
  goto LAB_1402107f4;
}



// FUNCTION 140210c12 FUN_140210c12 body=411 status=ok
// SIG undefined FUN_140210c12(void)

ulonglong FUN_140210c12(longlong param_1,ulonglong *param_2,byte param_3,char param_4)

{
  byte *pbVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  uVar10 = *param_2;
  uVar7 = ((uVar10 & 0xfffffffffffffff) >> 0x21 ^ uVar10 & 0xfffffffffffffff) * -0xae502812aa7333;
  lVar8 = (uVar7 >> 0x21 ^ uVar7) * -0x3b314601e57a13ad;
  uVar7 = (ulonglong)(((uint)((ulonglong)lVar8 >> 0x21) ^ (uint)lVar8) & 0x3ff);
  uVar3 = *(ushort *)(param_1 + uVar7 * 2);
  if (uVar3 != 0xffff) {
    lVar8 = *(longlong *)(param_1 + 0xd800);
    uVar4 = uVar3;
    do {
      uVar9 = (ulonglong)uVar4;
      uVar6 = *(ulonglong *)(lVar8 + uVar9 * 8);
      if (((uVar6 ^ uVar10) & 0xfffffffffffffff) == 0) {
        uVar7 = (ulonglong)((uint)(uVar10 >> 0x3c) & 7);
        uVar10 = (ulonglong)((uint)(uVar6 >> 0x3c) & 7);
        if (uVar10 < uVar7) {
          uVar10 = uVar7;
        }
        *(ulonglong *)(lVar8 + uVar9 * 8) = uVar6 & 0x8fffffffffffffff | uVar10 << 0x3c;
        uVar7 = uVar6 >> 0x3f;
        if (uVar6 >> 0x3f < *param_2 >> 0x3f) {
          uVar7 = *param_2 >> 0x3f;
        }
        *(ulonglong *)(lVar8 + uVar9 * 8) =
             uVar6 & 0xfffffffffffffff | uVar10 << 0x3c | uVar7 << 0x3f;
        bVar2 = *(byte *)(*(longlong *)(param_1 + 0xd838) + uVar9);
        if ((bVar2 & 1) == 0) {
          *(byte *)(*(longlong *)(param_1 + 0xd838) + uVar9) = bVar2 | 1;
          *(undefined2 *)(*(longlong *)(param_1 + 0xd828) + uVar9 * 2) = 0xffff;
          *(int *)(param_1 + 0xd844) = *(int *)(param_1 + 0xd844) + 1;
        }
        pbVar1 = (byte *)(*(longlong *)(param_1 + 0xd830) + uVar9);
        *pbVar1 = *pbVar1 | param_3;
        return uVar9;
      }
      uVar4 = *(ushort *)(param_1 + 0x800 + uVar9 * 2);
    } while (uVar4 != 0xffff);
  }
  uVar5 = *(uint *)(param_1 + 0xd840);
  uVar10 = (ulonglong)uVar5;
  if (uVar10 < 0x1000) {
    *(uint *)(param_1 + 0xd840) = uVar5 + 1;
    *(ushort *)(param_1 + 0x800 + uVar10 * 2) = uVar3;
    *(short *)(param_1 + uVar7 * 2) = (short)uVar5;
    *(ulonglong *)(*(longlong *)(param_1 + 0xd800) + uVar10 * 8) = *param_2;
    *(undefined2 *)(*(longlong *)(param_1 + 0xd828) + uVar10 * 2) = 0xffff;
    *(byte *)(*(longlong *)(param_1 + 0xd830) + uVar10) = param_3;
    *(char *)(*(longlong *)(param_1 + 0xd838) + uVar10) = param_4 * '\x02' + '\x01';
    *(int *)(param_1 + 0xd844) = *(int *)(param_1 + 0xd844) + 1;
  }
  else {
    uVar10 = CONCAT62((uint6)(ushort)(uVar5 >> 0x10),0xffff);
  }
  return uVar10;
}



// FUNCTION 140210db2 FUN_140210db2 body=41 status=ok
// SIG undefined FUN_140210db2(void)

void FUN_140210db2(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (param_2 <= *(int *)(param_1 + 0x7c)) {
    return;
  }
  FUN_140210e5a();
  return;
}



// FUNCTION 140210ddc FUN_140210ddc body=126 status=ok
// SIG undefined FUN_140210ddc(void)

void FUN_140210ddc(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x78);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0x78) = param_2;
    if ((uint)(*(int *)(param_1 + 0x7c) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14021104c(param_1,iVar1);
    }
    lVar2 = *(longlong *)(param_1 + 0x70);
    if (*(longlong *)(param_1 + 0x70) == 0) {
      lVar2 = param_1;
    }
    FUN_1448f9cae((longlong)iVar1 * 0x1c + lVar2,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 0x78) = param_2;
    FUN_146d71eea(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 140210e5a FUN_140210e5a body=352 status=ok
// SIG undefined FUN_140210e5a(void)

void FUN_140210e5a(longlong param_1,uint param_2)

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
  else if (param_2 < 5) {
    uVar5 = 4;
  }
  else {
    uVar3 = (longlong)(int)param_2 * 0x1c;
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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_140210ed4;
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
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,0);
      }
    }
LAB_140210ed4:
    uVar5 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar3 / 0x1c)) {
      uVar5 = uVar3 / 0x1c & 0xffffffff;
    }
  }
  if ((int)uVar5 == *(int *)(param_1 + 0x7c)) {
    return;
  }
  *(int *)(param_1 + 0x7c) = (int)uVar5;
  FUN_140210fba(param_1,*(undefined4 *)(param_1 + 0x78),uVar5,0x1c);
  return;
}



// FUNCTION 140210fba FUN_140210fba body=146 status=ok
// SIG undefined FUN_140210fba(void)

void FUN_140210fba(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x70);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x1c);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x70,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x70),param_1,(longlong)param_2 * 0x1c);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x70,param_2,param_3,param_4);
  return;
}



// FUNCTION 14021104c FUN_14021104c body=364 status=ok
// SIG undefined FUN_14021104c(void)

void FUN_14021104c(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar2 = *(uint *)(param_1 + 0x78);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar2);
  }
  if (uVar2 < 5) {
    uVar6 = 4;
  }
  else {
    lVar4 = (longlong)(int)uVar2;
    if (4 < *(uint *)(param_1 + 0x7c)) {
      lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
    }
    uVar3 = lVar4 * 0x1c;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar6 = uVar3 + 0xf;
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar6 >> 4]];
        }
        else {
          if ((uVar6 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar1 = (&DAT_14c841e00)[uVar6 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar1) {
              uVar5 = (ulonglong)bVar1;
            }
            uVar7 = 0x32 - (ulonglong)bVar1;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar7 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar7 & 0xffffffff] & 0xf) == 0) goto LAB_1402110df;
              lVar4 = uVar5 + 1 + uVar7;
              uVar7 = uVar7 - 1;
            } while (lVar4 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar6 & 0xfffffffffffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,0);
      }
    }
LAB_1402110df:
    uVar6 = 0x7fffffff;
    if ((int)uVar2 <= (int)(uVar3 / 0x1c)) {
      uVar6 = uVar3 / 0x1c & 0xffffffff;
    }
  }
  *(int *)(param_1 + 0x7c) = (int)uVar6;
  FUN_1402111b8(param_1,param_2,uVar6,0x1c);
  return;
}



// FUNCTION 1402111b8 FUN_1402111b8 body=146 status=ok
// SIG undefined FUN_1402111b8(void)

void FUN_1402111b8(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x70);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x1c);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x70,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x70),param_1,(longlong)param_2 * 0x1c);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x70,param_2,param_3,param_4);
  return;
}



// FUNCTION 14021124a FUN_14021124a body=192 status=ok
// SIG undefined FUN_14021124a(void)

undefined8 FUN_14021124a(longlong param_1,undefined8 param_2)

{
  char *pcVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  float fVar5;
  
  lVar2 = DAT_14cad29d8;
  if ((*(byte *)(param_1 + 0x8a1) & 0x20) == 0) {
    fVar5 = 1.0;
    if ((*(byte *)(param_1 + 0x8a0) & 8) != 0) {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60) == 0x40000002) {
        uVar4 = 0;
      }
      else {
        bVar3 = FUN_144a61b4f();
        uVar4 = (ulonglong)(bVar3 ^ 1);
      }
      if ((0 < *(int *)(lVar2 + uVar4 * 4)) &&
         (pcVar1 = *(char **)(param_1 + 0x9c0), *pcVar1 == '\x01')) {
        fVar5 = *(float *)(pcVar1 + 0x14) / (*(float *)(pcVar1 + 0xc) + *(float *)(pcVar1 + 0x14));
        if (1.0 <= fVar5) {
          fVar5 = 1.0;
        }
        if (fVar5 <= 0.0) {
          fVar5 = 0.0;
        }
      }
    }
  }
  else {
    fVar5 = *(float *)(param_1 + 0x860);
  }
  FUN_14021130a(param_1,param_2,fVar5);
  return param_2;
}



// FUNCTION 14021130a FUN_14021130a body=348 status=ok
// SIG undefined FUN_14021130a(void)

undefined1 * FUN_14021130a(longlong param_1,undefined1 *param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_e8 [32];
  char local_c8 [16];
  undefined1 local_b8 [104];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  *param_2 = 0;
  *(undefined4 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined4 *)(param_2 + 0x20) = 0;
  *(undefined4 *)(param_2 + 0x24) = 0;
  *(undefined4 *)(param_2 + 0x28) = 0;
  *(undefined4 *)(param_2 + 0x2c) = 0x3ff00000;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined4 *)(param_2 + 0x50) = 0;
  *(undefined4 *)(param_2 + 0x54) = 0x3ff00000;
  *(undefined4 *)(param_2 + 0x58) = 0;
  *(undefined4 *)(param_2 + 0x5c) = 0x3ff00000;
  *(undefined8 *)(param_2 + 0x60) = 0x3ff0000000000000;
  *(undefined8 *)(param_2 + 0x68) = 0;
  if (*(longlong *)(param_1 + 0xae8) != 0) {
    FUN_140211468(*(longlong *)(param_1 + 0xae8),local_c8,param_3);
    if (local_c8[0] == '\x01') {
      FUN_140167042(param_2,local_b8);
    }
    iVar1 = *(int *)(param_1 + 0xb80);
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(param_1 + 0xb78);
      lVar3 = 0;
      do {
        FUN_140211468(*(undefined8 *)(lVar2 + lVar3),local_c8,param_3);
        if (local_c8[0] == '\x01') {
          FUN_140167042(param_2,local_b8);
        }
        lVar3 = lVar3 + 8;
      } while ((longlong)iVar1 * 8 != lVar3);
    }
  }
  if ((*(longlong *)(param_1 + 0xaf8) != 0) &&
     (FUN_140211468(*(longlong *)(param_1 + 0xaf8),local_c8,param_3), local_c8[0] == '\x01')) {
    FUN_140167042(param_2,local_b8);
  }
  if ((local_50 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140211468 FUN_140211468 body=193 status=ok
// SIG undefined FUN_140211468(void)

undefined1 * FUN_140211468(longlong param_1,undefined1 *param_2,float param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (param_3 < 1e-05) {
    *param_2 = 0;
    *(undefined4 *)(param_2 + 4) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
    *(undefined4 *)(param_2 + 0x20) = 0;
    *(undefined4 *)(param_2 + 0x24) = 0;
    *(undefined4 *)(param_2 + 0x28) = 0;
    *(undefined4 *)(param_2 + 0x2c) = 0x3ff00000;
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined8 *)(param_2 + 0x48) = 0;
    *(undefined8 *)(param_2 + 0x50) = 0x3ff0000000000000;
    *(undefined8 *)(param_2 + 0x58) = 0x3ff0000000000000;
    *(undefined8 *)(param_2 + 0x60) = 0x3ff0000000000000;
    *(undefined8 *)(param_2 + 0x68) = 0;
  }
  else if (param_3 <= 0.99999) {
    FUN_1478f7d86(param_1 + 0x370,param_2);
  }
  else {
    *param_2 = *(undefined1 *)(param_1 + 0x370);
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0x374);
    puVar2 = (undefined8 *)(param_1 + 0x380);
    puVar3 = (undefined8 *)(param_2 + 0x10);
    for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    *(undefined1 *)(param_1 + 0x370) = 0;
    *(undefined4 *)(param_1 + 0x374) = 0;
  }
  return param_2;
}



// FUNCTION 14021152a FUN_14021152a body=121 status=ok
// SIG undefined FUN_14021152a(void)

void FUN_14021152a(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  byte *pbVar3;
  longlong lVar4;
  
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  lVar2 = **(longlong **)(param_2 + 0x20);
  *(longlong **)(param_2 + 0x20) = *(longlong **)(param_2 + 0x20) + 1;
  *(longlong *)(param_2 + 0x30) = lVar2;
  lVar4 = FUN_1448f9ec4(lVar2);
  lVar4 = (**(code **)(**(longlong **)(lVar4 + 0x20) + 0x388))
                    (*(longlong **)(lVar4 + 0x20),*(undefined8 *)(param_2 + 0x18),lVar4);
  iVar1 = *(int *)(lVar2 + 0x44);
  pbVar3 = *(byte **)(param_2 + 0x20);
  *(byte **)(param_2 + 0x20) = pbVar3 + 1;
                    /* WARNING: Jumptable at 0x0001402115a0 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_14c962c70)[*pbVar3])(*(undefined8 *)(param_2 + 0x18),param_2,iVar1 + lVar4);
  return;
}



// FUNCTION 140211628 FUN_140211628 body=53 status=ok
// SIG undefined FUN_140211628(void)

char FUN_140211628(longlong *param_1)

{
  byte bVar1;
  char cVar2;
  
  if (param_1[0x18] != 0) {
    bVar1 = *(byte *)(param_1[0x18] + 0x108);
    if (4 < bVar1) {
      return (bVar1 == 7) + '\x01';
    }
  }
  cVar2 = (**(code **)(*param_1 + 0x2e0))();
  return cVar2 * '\x02';
}



// FUNCTION 14021165e FUN_14021165e body=19 status=ok
// SIG undefined FUN_14021165e(void)

undefined8 FUN_14021165e(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0xae8);
  if (lVar1 == 0) {
    return 0;
  }
  if (DAT_14cacca90 == 0) {
    uVar2 = FUN_140002dac();
    DAT_14cacca90 = FUN_140002ddd(FUN_1463a83c2,uVar2,L"AnimSubsystem_SharedLinkedAnimLayers");
  }
  uVar2 = FUN_140108626(lVar1,DAT_14cacca90);
  return uVar2;
}



// FUNCTION 140211672 FUN_140211672 body=72 status=ok
// SIG undefined FUN_140211672(void)

void FUN_140211672(undefined8 param_1)

{
  undefined8 uVar1;
  
  if (DAT_14cacca90 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cacca90 = FUN_140002ddd(FUN_1463a83c2,uVar1,L"AnimSubsystem_SharedLinkedAnimLayers");
  }
  FUN_140108626(param_1,DAT_14cacca90);
  return;
}



// FUNCTION 1402116ba FUN_1402116ba body=361 status=ok
// SIG undefined FUN_1402116ba(void)

void FUN_1402116ba(longlong param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar5 = *(longlong *)(param_1 + 0x90);
  iVar1 = *(int *)(param_1 + 0x98);
  uVar3 = 0;
  if ((longlong)iVar1 != 0) {
    lVar4 = 0;
    do {
      if (*(int *)(lVar5 + 8 + lVar4) == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)(lVar5 + lVar4);
      }
      (**(code **)(*plVar2 + 0x58))(plVar2,param_2,param_3);
      lVar4 = lVar4 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar4);
    uVar3 = *(undefined4 *)(param_1 + 0x98);
    lVar5 = *(longlong *)(param_1 + 0x90);
  }
  iVar1 = *(int *)(param_1 + 0x9c);
  FUN_140211823(lVar5,uVar3);
  *(undefined4 *)(param_1 + 0x98) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x9c) != 0)) {
    FUN_149802a34(param_1 + 0x90,0);
  }
  lVar5 = *(longlong *)(param_1 + 0xa0);
  iVar1 = *(int *)(param_1 + 0xa8);
  uVar3 = 0;
  if ((longlong)iVar1 != 0) {
    lVar4 = 0;
    do {
      if (*(int *)(lVar5 + 8 + lVar4) == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)(lVar5 + lVar4);
      }
      (**(code **)(*plVar2 + 0x58))(plVar2,*(undefined8 *)(*(longlong *)(param_2 + 0x18) + 0x90),0);
      lVar4 = lVar4 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar4);
    uVar3 = *(undefined4 *)(param_1 + 0xa8);
    lVar5 = *(longlong *)(param_1 + 0xa0);
  }
  iVar1 = *(int *)(param_1 + 0xac);
  FUN_1400dacad(lVar5,uVar3);
  *(undefined4 *)(param_1 + 0xa8) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0xac) != 0)) {
    FUN_149802642(param_1 + 0xa0,0);
  }
  FUN_14021184c(param_1,param_2,param_3);
  return;
}



// FUNCTION 140211823 FUN_140211823 body=40 status=ok
// SIG undefined FUN_140211823(void)

void FUN_140211823(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1449db362(param_1);
    param_1 = param_1 + 0x10;
  }
  return;
}



// FUNCTION 14021184c FUN_14021184c body=535 status=ok
// SIG undefined FUN_14021184c(void)

void FUN_14021184c(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  int iVar2;
  longlong *plVar3;
  undefined4 uVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  
  uVar4 = (**(code **)(*param_2 + 0xa0))(param_2);
  *(undefined4 *)(param_1 + 0x78) = uVar4;
  uVar4 = (**(code **)(*param_2 + 0xa8))(param_2);
  *(undefined4 *)(param_1 + 0x7c) = uVar4;
  uVar4 = (**(code **)(*param_2 + 0xb0))(param_2);
  *(undefined4 *)(param_1 + 0x80) = uVar4;
  uVar4 = (**(code **)(*param_2 + 0xb8))(param_2);
  *(undefined4 *)(param_1 + 0x84) = uVar4;
  uVar4 = (**(code **)(*param_2 + 0xc0))(param_2);
  *(undefined4 *)(param_1 + 0x88) = uVar4;
  uVar4 = (**(code **)(*param_2 + 200))();
  *(undefined4 *)(param_1 + 0x8c) = uVar4;
  iVar2 = *(int *)(param_1 + 0x50);
  if (iVar2 == 0) {
    uVar14 = 1;
    uVar16 = 0;
    iVar7 = 0;
    iVar11 = 0;
  }
  else {
    puVar6 = *(uint **)(param_1 + 0x48);
    if (*(uint **)(param_1 + 0x48) == (uint *)0x0) {
      puVar6 = (uint *)(param_1 + 0x38);
    }
    uVar15 = *puVar6;
    if (uVar15 == 0) {
      iVar7 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar7 = iVar2 + -1;
      }
      uVar16 = 0;
      uVar14 = (ulonglong)(uint)(iVar7 >> 5);
      if (iVar7 >> 5 < 1) {
        uVar14 = uVar16;
      }
      iVar11 = 0;
      do {
        if (uVar14 == uVar16) {
          return;
        }
        iVar11 = iVar11 + 0x20;
        uVar15 = puVar6[uVar16 + 1];
        uVar16 = uVar16 + 1;
      } while (uVar15 == 0);
    }
    else {
      uVar16 = 0;
      iVar11 = 0;
    }
    uVar14 = (ulonglong)(-uVar15 & uVar15);
    uVar1 = uVar14 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar7 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar7) {
      iVar7 = iVar2;
    }
  }
  if (iVar7 != iVar2) {
    uVar15 = 0xffffffff;
    iVar5 = iVar2;
    do {
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x28) + 8 + (longlong)iVar7 * 0x18);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x2a0))(plVar3,param_2);
        iVar5 = *(int *)(param_1 + 0x50);
      }
      uVar15 = uVar15 & ~(uint)uVar14;
      puVar6 = *(uint **)(param_1 + 0x48);
      if (*(uint **)(param_1 + 0x48) == (uint *)0x0) {
        puVar6 = (uint *)(param_1 + 0x38);
      }
      iVar7 = (int)uVar16;
      lVar12 = (longlong)iVar7;
      uVar8 = puVar6[lVar12] & uVar15;
      if (uVar8 == 0) {
        iVar9 = iVar5 + 0x1e;
        if (-1 < iVar5 + -1) {
          iVar9 = iVar5 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar11 = iVar11 + 0x20;
        iVar10 = iVar9;
        if (iVar9 < iVar7) {
          iVar10 = iVar7;
        }
        if (iVar7 < iVar9) {
          lVar13 = 0;
          do {
            uVar8 = puVar6[lVar12 + lVar13 + 1];
            if (uVar8 != 0) {
              uVar16 = (ulonglong)(iVar7 + (int)lVar13 + 1);
              uVar15 = 0xffffffff;
              goto LAB_1402119e5;
            }
            iVar11 = iVar11 + 0x20;
            lVar13 = lVar13 + 1;
          } while (iVar10 - lVar12 != lVar13);
          uVar15 = 0xffffffff;
          iVar7 = iVar10;
        }
        uVar16 = (ulonglong)(iVar7 + 1);
        iVar7 = iVar5;
      }
      else {
LAB_1402119e5:
        uVar14 = (ulonglong)(-uVar8 & uVar8);
        uVar1 = uVar14 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar7 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
        if (iVar5 <= iVar7) {
          iVar7 = iVar5;
        }
      }
    } while (iVar7 != iVar2);
  }
  return;
}



// FUNCTION 140211a64 FUN_140211a64 body=87 status=ok
// SIG undefined FUN_140211a64(void)

void FUN_140211a64(longlong param_1,int param_2)

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
    FUN_140211abc();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 140211abc FUN_140211abc body=224 status=ok
// SIG undefined FUN_140211abc(void)

void FUN_140211abc(undefined8 *param_1,int param_2,int param_3)

{
  longlong lVar1;
  void *_Src;
  ulonglong *puVar2;
  void *_Dst;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  
  if (param_3 != 0) {
    if (param_3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456bd9fc(param_3,0x10);
    }
    _Src = (void *)*param_1;
    iVar4 = param_3 * 0x10;
    puVar2 = TlsGetValue(DAT_14ca954e4);
    uVar3 = (ulonglong)((uint)(0xf < iVar4) * 8);
    lVar1 = uVar3 + 7;
    uVar3 = uVar3 ^ 0xfffffffffffffff8;
    _Dst = (void *)(*puVar2 + lVar1 & uVar3);
    uVar5 = (longlong)_Dst + (longlong)iVar4;
    if (puVar2[1] < uVar5) {
      FUN_140023dd8(puVar2,iVar4 + (uint)(0xf < iVar4) * 8 + 8);
      _Dst = (void *)(lVar1 + *puVar2 & uVar3);
      uVar5 = (longlong)iVar4 + (longlong)_Dst;
    }
    *puVar2 = uVar5;
    *param_1 = _Dst;
    if (param_2 != 0 && _Src != (void *)0x0) {
      if (param_3 < param_2) {
        param_2 = param_3;
      }
      memcpy(_Dst,_Src,(longlong)param_2 << 4);
      return;
    }
  }
  return;
}



// FUNCTION 140211b9c FUN_140211b9c body=114 status=ok
// SIG undefined FUN_140211b9c(void)

undefined4 FUN_140211b9c(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  cVar1 = (**(code **)(*param_1 + 0x418))();
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1446e9750(extraout_XMM0_Da,param_2,local_28,0);
  }
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140211c10 FUN_140211c10 body=123 status=ok
// SIG undefined FUN_140211c10(void)

undefined8 FUN_140211c10(undefined8 param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  iVar1 = *(int *)(param_3 + 4);
  lVar3 = FUN_1400e3c00(param_1,param_3,1);
  if (iVar1 != 1) {
    lVar3 = FUN_14013f0dc(param_1,lVar3,param_3,1);
  }
  if (lVar3 == 0) {
    uVar4 = 0;
  }
  else {
    iVar1 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
      FUN_144837cf2(param_2,iVar1);
    }
    lVar2 = *param_2;
    *(longlong *)(lVar2 + (longlong)iVar1 * 8) = lVar3;
    uVar4 = CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
  }
  return uVar4;
}



// FUNCTION 140211c8c FUN_140211c8c body=815 status=ok
// SIG undefined FUN_140211c8c(void)

longlong * FUN_140211c8c(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  int *piVar3;
  ulonglong *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  undefined8 local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  int local_74;
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0x68,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x68);
  (**(code **)(*param_1 + 0x10))
            (param_1,(int)param_2[5] + 0x1fU >> 3 & 0xfffffffc,
             *(int *)((longlong)param_2 + 0x2c) + 0x1fU >> 3 & 0xfffffffc);
  uVar7 = local_70._4_4_;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_74 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    puVar4 = (ulonglong *)param_1[1];
    piVar3 = (int *)*puVar4 + 1;
    if ((int *)puVar4[1] < piVar3) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_74,4);
      }
      else {
        FUN_14572512c(param_1,&local_74);
      }
    }
    else {
      local_74 = *(int *)*puVar4;
      *puVar4 = (ulonglong)piVar3;
    }
    local_68 = param_2 + 2;
    local_70 = (undefined8 *)&DAT_100000000;
    local_60 = 0xffffffff;
    local_58 = 0;
    if ((int)param_2[5] != 0) {
      FUN_1449c0562(&local_70);
    }
    local_98 = local_70;
    local_90 = local_68;
    local_80 = local_58;
    local_7c = local_54;
    local_88 = local_60;
    uVar6 = local_88;
    local_88._4_4_ = (int)((ulonglong)local_60 >> 0x20);
    local_a0 = param_2;
    if (local_88._4_4_ < (int)local_68[3]) {
      iVar9 = local_88._4_4_;
      local_88 = uVar6;
      do {
        lVar5 = *local_a0;
        FUN_14021219d(param_1,lVar5 + (longlong)iVar9 * 0x68);
        FUN_1448fa8da(param_1,lVar5 + (longlong)iVar9 * 0x68 + 0x10);
        local_88 = CONCAT44(local_88._4_4_,(uint)local_88 & ~local_98._4_4_);
        FUN_1449c0562(&local_98);
        iVar9 = local_88._4_4_;
        uVar6 = local_88;
      } while (local_88._4_4_ < (int)local_90[3]);
    }
  }
  else {
    local_70 = (undefined8 *)((ulonglong)local_70._4_4_ << 0x20);
    puVar4 = (ulonglong *)param_1[1];
    puVar1 = (undefined4 *)*puVar4 + 1;
    if ((undefined4 *)puVar4[1] < puVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_70,4);
      }
      else {
        FUN_14572512c(param_1,&local_70);
      }
    }
    else {
      local_70 = (undefined8 *)CONCAT44(uVar7,*(undefined4 *)*puVar4);
      *puVar4 = (ulonglong)puVar1;
    }
    FUN_141119514(param_2,(ulonglong)local_70 & 0xffffffff);
    uVar6 = local_88;
    if (0 < (int)local_70) {
      iVar9 = 0;
      do {
        FUN_140211fbc(param_2,&local_a0);
        puVar2 = local_98 + 2;
        local_98[6] = 0;
        local_98[7] = 0;
        local_98[8] = 0;
        local_98[9] = 0;
        local_98[10] = 0;
        local_98[0xb] = 0;
        local_98[4] = 0;
        local_98[5] = 0;
        local_98[2] = 0;
        local_98[3] = 0;
        *local_98 = 0;
        local_98[1] = 0;
        *(undefined4 *)((longlong)local_98 + 0x3c) = 0x80;
        *(undefined4 *)(local_98 + 8) = 0xffffffff;
        *(undefined4 *)(local_98 + 0xc) = 0xffffffff;
        FUN_14021219d(param_1);
        FUN_1448fa8da(param_1,puVar2);
        iVar9 = iVar9 + 1;
        uVar6 = local_88;
      } while (iVar9 < (int)local_70);
    }
  }
  local_88 = uVar6;
  if (((*(byte *)(param_1 + 5) & 1) != 0) ||
     (((*(byte *)(param_1 + 5) & 4) == 0 && ((*(byte *)((longlong)param_1 + 0x2b) & 4) != 0)))) {
    if (param_2[8] != 0) {
      FUN_1446efa72(param_2 + 8,0,0,4);
    }
    *(undefined4 *)(param_2 + 9) = 0;
    uVar7 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    if (uVar7 < 4) {
      iVar9 = 1;
    }
    else {
      uVar8 = (ulonglong)(uVar7 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar5 & 0x1f);
    }
    if ((0 < (int)uVar7) && (0 < iVar9)) {
      *(int *)(param_2 + 9) = iVar9;
      FUN_1402126de(param_2);
    }
  }
  if ((local_50 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140211fbc FUN_140211fbc body=481 status=ok
// SIG undefined FUN_140211fbc(void)

int * FUN_140211fbc(longlong *param_1,int *param_2)

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
      FUN_1406a7630(param_1,iVar11);
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
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x68);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x68) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar3 * 0x68 + *param_1;
  return param_2;
}



// FUNCTION 14021219d FUN_14021219d body=1343 status=ok
// SIG undefined FUN_14021219d(void)

longlong * FUN_14021219d(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ushort *puVar2;
  wchar_t wVar3;
  ulonglong *puVar4;
  int iVar5;
  undefined8 ****ppppuVar6;
  longlong lVar7;
  size_t sVar8;
  wchar_t *pwVar9;
  wchar_t *_Str;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined1 auStack_f8 [44];
  uint local_cc;
  undefined8 ***local_c8;
  uint local_c0;
  undefined8 ***local_48;
  longlong local_40;
  uint local_38;
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    local_cc = 0;
    puVar4 = (ulonglong *)param_1[1];
    puVar1 = (uint *)*puVar4 + 1;
    if ((uint *)puVar4[1] < puVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_cc,4);
      }
      else {
        FUN_14572512c(param_1,&local_cc);
      }
    }
    else {
      local_cc = *(uint *)*puVar4;
      *puVar4 = (ulonglong)puVar1;
    }
    uVar11 = local_cc;
    uVar12 = local_cc;
    if ((-1 < (int)local_cc) || (uVar12 = -local_cc, !SBORROW4(0,local_cc))) {
      local_cc = uVar12;
      uVar13 = (ulonglong)local_cc;
      if ((param_1[7] < 1) || ((longlong)uVar13 <= param_1[7])) {
        *(undefined4 *)(param_2 + 1) = 0;
        iVar5 = 0;
        uVar12 = local_cc;
        if (*(uint *)((longlong)param_2 + 0xc) != local_cc) {
          FUN_1446f8c06(param_2);
          uVar13 = (ulonglong)local_cc;
          iVar5 = (int)param_2[1];
          uVar12 = *(uint *)((longlong)param_2 + 0xc);
        }
        *(uint *)(param_2 + 1) = (uint)uVar13 + iVar5;
        if (uVar12 - iVar5 < (uint)uVar13) {
          FUN_144a2dbb8(param_2);
          uVar13 = (ulonglong)local_cc;
        }
        uVar12 = (uint)uVar13;
        if (uVar12 != 0) {
          if ((int)uVar11 < 0) {
            lVar10 = *param_2;
            (**(code **)(*param_1 + 0x170))(param_1,lVar10);
            if ((0 < (int)local_cc & *(byte *)((longlong)param_1 + 0x2a) >> 1) == 1) {
              lVar7 = 0;
              do {
                puVar2 = (ushort *)(lVar10 + lVar7 * 2);
                *puVar2 = *puVar2 << 8 | *puVar2 >> 8;
                lVar7 = lVar7 + 1;
              } while (lVar7 < (int)local_cc);
            }
            *(undefined2 *)(lVar10 + -2 + (longlong)(int)local_cc * 2) = 0;
            if ((longlong)(int)param_2[1] != 0) {
              uVar13 = 0;
              lVar10 = 0;
              do {
                if (*(short *)(*param_2 + uVar13) == -1) {
                  if ((int)(~uVar13 >> 1) != 0) {
                    *(undefined2 *)(*param_2 + (lVar10 >> 0x20) * 2) = 0;
                    FUN_1401af9b2(param_2);
                  }
                  break;
                }
                lVar10 = lVar10 + 0x100000000;
                uVar13 = uVar13 + 2;
              } while ((longlong)(int)param_2[1] * 2 != uVar13);
            }
          }
          else {
            local_40 = *param_2;
            local_48 = (undefined8 ****)0x0;
            local_38 = uVar12;
            local_34 = uVar12;
            if (0x80 < uVar12) {
              FUN_1446efa72(&local_48,0,uVar13,1);
              uVar12 = local_cc;
            }
            ppppuVar6 = (undefined8 ****)local_48;
            if ((undefined8 ****)local_48 == (undefined8 ****)0x0) {
              ppppuVar6 = &local_c8;
            }
            (**(code **)(*param_1 + 0x170))(param_1,ppppuVar6,(longlong)(int)uVar12);
            ppppuVar6 = (undefined8 ****)local_48;
            if ((undefined8 ****)local_48 == (undefined8 ****)0x0) {
              ppppuVar6 = &local_c8;
            }
            *(undefined1 *)((longlong)ppppuVar6 + (longlong)(int)local_cc + -1) = 0;
            ppppuVar6 = (undefined8 ****)local_48;
            if ((undefined8 ****)local_48 == (undefined8 ****)0x0) {
              ppppuVar6 = &local_c8;
            }
            uVar11 = local_34;
            if ((int)local_38 < (int)local_34) {
              uVar11 = local_38;
            }
            if (0 < (int)uVar11) {
              uVar13 = 0;
              do {
                *(short *)(local_40 + uVar13 * 2) = (short)*(char *)((longlong)ppppuVar6 + uVar13);
                uVar13 = uVar13 + 1;
              } while (uVar11 != uVar13);
            }
            if ((undefined8 ****)local_48 != (undefined8 ****)0x0) {
              FUN_1400020a8();
            }
          }
          if ((local_cc == 1) &&
             (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
            FUN_1446f8c06(param_2,0);
          }
        }
        goto LAB_14021264f;
      }
    }
    FUN_1468216ba(param_1);
    goto LAB_14021264f;
  }
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 2,(longlong)*(int *)((longlong)param_2 + 0xc) * 2);
  local_cc = *(uint *)(param_2 + 1);
  _Str = (wchar_t *)*param_2;
  if ((char)param_1[5] < '\0') {
LAB_140212218:
    uVar11 = local_cc - 1;
    if (local_cc == 0) {
      _Str = L"";
      uVar11 = 0;
    }
    uVar12 = 0;
    if (_Str != (wchar_t *)0x0) {
      uVar12 = uVar11 + 1;
      if ((int)uVar11 < 0) {
        if (uVar12 == 0xffffffff) {
          sVar8 = wcslen(_Str);
          uVar12 = (uint)sVar8;
        }
      }
      else if (_Str[uVar11] == L'\0') {
        uVar12 = uVar11;
      }
    }
    uVar11 = uVar12 + 1;
    local_cc = ~uVar12;
    puVar4 = (ulonglong *)param_1[1];
    puVar1 = (uint *)*puVar4 + 1;
    if ((uint *)puVar4[1] < puVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_cc,4);
      }
      else {
        FUN_14572512c(param_1,&local_cc);
      }
    }
    else {
      local_cc = *(uint *)*puVar4;
      *puVar4 = (ulonglong)puVar1;
    }
    if (uVar11 == 0) goto LAB_14021264f;
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,_Str,(longlong)(int)uVar11 * 2);
      goto LAB_14021264f;
    }
    local_c8 = (undefined8 ****)0x0;
    if ((int)uVar12 < -1) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar11);
    }
    uVar13 = 0;
    local_c0 = uVar11;
    FUN_140817052(&local_c8,uVar11,0);
    memcpy(local_c8,_Str,(ulonglong)(uVar11 * 2));
    do {
      puVar2 = (ushort *)((longlong)local_c8 + uVar13 * 2);
      *puVar2 = *puVar2 << 8 | *puVar2 >> 8;
      uVar13 = uVar13 + 1;
    } while (uVar11 != uVar13);
    (**(code **)(*param_1 + 0x170))(param_1,local_c8,(longlong)(int)uVar11 * 2);
    ppppuVar6 = (undefined8 ****)local_c8;
  }
  else {
    pwVar9 = L"";
    if (local_cc != 0) {
      pwVar9 = _Str;
    }
    do {
      wVar3 = *pwVar9;
      pwVar9 = pwVar9 + 1;
    } while (0xff80 < (ushort)(wVar3 + L'ﾀ'));
    if (wVar3 != L'\0') goto LAB_140212218;
    puVar4 = (ulonglong *)param_1[1];
    puVar1 = (uint *)*puVar4 + 1;
    if ((uint *)puVar4[1] < puVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_cc,4);
      }
      else {
        FUN_14572512c(param_1,&local_cc);
      }
    }
    else {
      local_cc = *(uint *)*puVar4;
      *puVar4 = (ulonglong)puVar1;
    }
    if (local_cc == 0) goto LAB_14021264f;
    lVar10 = (longlong)(int)local_cc;
    local_48 = (undefined8 ****)0x0;
    FUN_1449b853c(&local_c8,*param_2,local_cc,0);
    (**(code **)(*param_1 + 0x170))(param_1,local_40,lVar10);
    ppppuVar6 = (undefined8 ****)local_48;
  }
  if (ppppuVar6 != (undefined8 ****)0x0) {
    FUN_1400020a8();
  }
LAB_14021264f:
  if ((local_30 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402126de FUN_1402126de body=723 status=ok
// SIG undefined FUN_1402126de(void)

void FUN_1402126de(longlong *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  undefined2 *puVar15;
  ulonglong uVar16;
  int iVar17;
  undefined1 auStack_a8 [44];
  int local_7c;
  longlong *local_78;
  ulonglong local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar14 = *(uint *)(param_1 + 9);
  if (uVar14 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar14,4);
    if (0 < (int)uVar14) {
      uVar5 = 0;
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar5) * 4) =
             0xffffffff;
        uVar5 = uVar5 + 1;
      } while (uVar14 != uVar5);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] == 0) {
      uVar16 = 1;
      local_58._0_4_ = 0xffffffff;
      local_58._4_4_ = 0;
      uVar10 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar10 = local_68 & 0xffffffff;
      uVar16 = local_68 >> 0x20;
    }
    uVar14 = (uint)local_58;
    iVar17 = local_58._4_4_;
    iVar11 = local_50;
    if (local_58._4_4_ < (int)local_60[3]) {
      do {
        local_7c = iVar11;
        local_70 = uVar10;
        puVar2 = (undefined8 *)(*param_1 + (longlong)iVar17 * 0x68);
        iVar11 = *(int *)(*param_1 + 8 + (longlong)iVar17 * 0x68);
        iVar4 = iVar11 + -1;
        if (iVar11 == 0) {
          iVar4 = 0;
        }
        uVar5 = 0;
        if (0 < iVar4) {
          puVar15 = &DAT_149dfb77a;
          if (iVar11 != 0) {
            puVar15 = (undefined2 *)*puVar2;
          }
          lVar12 = 0;
          uVar5 = 0;
          do {
            uVar6 = ((uint)(ushort)puVar15[lVar12] +
                    (uint)(0x19 < (ushort)puVar15[lVar12] - 0x61) * 0x20) - 0x20;
            uVar5 = uVar5 >> 8 ^ *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar5 ^ uVar6) & 0xff) * 4)
            ;
            uVar5 = uVar5 >> 8 ^
                    *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar5 & 0xff ^ uVar6 >> 8 & 0xff) * 4);
            lVar12 = lVar12 + 1;
          } while (iVar4 != (int)lVar12);
        }
        uVar10 = (longlong)(int)uVar5 & (longlong)(int)param_1[9] - 1U;
        iVar11 = (int)uVar10;
        *(int *)((longlong)puVar2 + 100) = iVar11;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(puVar2 + 0xc) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar11 & (longlong)(int)param_1[9] - 1U) * 4) =
             iVar17;
        uVar14 = uVar14 & ~(uint)uVar16;
        plVar7 = (longlong *)local_60[2];
        if ((longlong *)local_60[2] == (longlong *)0x0) {
          plVar7 = local_60;
        }
        iVar4 = (int)local_60[3];
        iVar17 = (int)local_70;
        lVar12 = (longlong)iVar17;
        uVar5 = *(uint *)((longlong)plVar7 + lVar12 * 4) & uVar14;
        uVar10 = local_70;
        iVar11 = local_7c;
        local_78 = local_60;
        if (uVar5 == 0) {
          iVar8 = iVar4 + 0x1e;
          if (-1 < iVar4 + -1) {
            iVar8 = iVar4 + -1;
          }
          iVar8 = iVar8 >> 5;
          iVar9 = iVar8;
          if (iVar8 < iVar17) {
            iVar9 = iVar17;
          }
          if (iVar8 <= iVar17) break;
          lVar13 = 0;
          while( true ) {
            iVar11 = iVar11 + 0x20;
            uVar5 = *(uint *)((longlong)plVar7 + lVar13 * 4 + lVar12 * 4 + 4);
            if (uVar5 != 0) break;
            lVar13 = lVar13 + 1;
            if (iVar9 - lVar12 == lVar13) goto LAB_14021295a;
          }
          uVar14 = 0xffffffff;
          uVar10 = (ulonglong)(iVar17 + (int)lVar13 + 1);
        }
        uVar16 = (ulonglong)(-uVar5 & uVar5);
        uVar3 = uVar16 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar17 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
      } while (iVar17 < iVar4);
    }
  }
LAB_14021295a:
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402129b2 FUN_1402129b2 body=245 status=ok
// SIG undefined FUN_1402129b2(void)

longlong * FUN_1402129b2(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  uint local_34;
  undefined4 local_30;
  undefined1 *local_2c;
  undefined8 local_24;
  undefined2 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar4 = (longlong *)(param_1 + (param_3 & 0xffffffff) * 8 + 0x10);
  if (*plVar4 == 0) {
    local_38 = DAT_14ca85098;
    local_48 = DAT_14ca85088;
    uStack_44 = DAT_14ca8508c;
    uStack_40 = DAT_14ca85090;
    uStack_3c = DAT_14ca85094;
    local_50 = &DAT_00020008;
    local_34 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    local_30 = 0;
    local_2c = &DAT_100000001;
    local_24 = 0x100010100010001;
    local_1c = 0xff00;
    uVar2 = FUN_14472bf7a(param_2,&local_50,L"EyeAdaptationTexture",1);
    plVar3 = (longlong *)FUN_14495f742(param_2,uVar2);
    plVar3 = (longlong *)*plVar3;
    plVar1 = (longlong *)*plVar4;
    if (plVar1 != plVar3) {
      *plVar4 = (longlong)plVar3;
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x30))();
      }
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x38))(plVar1);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return plVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140212aa8 FUN_140212aa8 body=982 status=ok
// SIG undefined FUN_140212aa8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140212aa8(longlong *param_1,byte param_2,longlong *param_3,wchar_t *param_4,int param_5,
                  double param_6,undefined4 *param_7)

{
  void *_Dst;
  byte bVar1;
  size_t sVar2;
  undefined4 uVar3;
  wchar_t *pwVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  undefined1 auStack_98 [40];
  LARGE_INTEGER local_70 [3];
  undefined2 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_5 == 1) {
    FUN_140212f8e(local_70);
LAB_140212af7:
    FUN_1448fb8e4(local_70,L"[%Y.%m.%d-%H.%M.%S:%s]",param_1);
    FUN_140212e80(param_1,L"[%3llu]",DAT_14c872be0 % 1000);
  }
  else if (param_5 == 4) {
    uVar8 = DAT_14c872be0 % 1000;
    FUN_1468001f0(local_70);
    FUN_14029881c(local_70,&local_58,0,0);
    puVar5 = local_58;
    if (local_50 == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    FUN_140212e80(param_1,L"[%s][%3llu]",puVar5,uVar8);
    if (local_58 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_5 == 3) {
      FUN_1402160b8(local_70);
      goto LAB_140212af7;
    }
    if (param_5 == 2) {
      if (param_6 < 0.0) {
        QueryPerformanceCounter(local_70);
        param_6 = ((double)local_70[0].QuadPart * DAT_14c83f420 + 16777216.0) - _DAT_14c86a9d8;
      }
      FUN_140212e80(param_1,L"[%07.2f][%3llu]",param_6,DAT_14c872be0 % 1000);
    }
  }
  bVar1 = *param_3 != 0 & DAT_14c75b130;
  if (param_7 != (undefined4 *)0x0) {
    uVar3 = 0xffffffff;
    if (bVar1 != 0) {
      uVar3 = (undefined4)((ulonglong)(param_1[1] - *param_1) >> 1);
    }
    *param_7 = uVar3;
  }
  if (bVar1 == 0) {
    if (param_2 == 5) goto LAB_140212c10;
    if ((param_2 & 0xf) < 8) {
      pwVar4 = (wchar_t *)(&PTR_DAT_149e35340)[param_2 & 0xf];
    }
    else {
      pwVar4 = L"UnknownVerbosity";
    }
    sVar2 = wcslen(pwVar4);
    FUN_1449668a2(param_1,pwVar4,sVar2 & 0xffffffff);
    puVar7 = (undefined4 *)param_1[1];
  }
  else {
    FUN_14005eb5c(param_3,param_1);
    puVar7 = (undefined4 *)param_1[1];
    if ((undefined4 *)param_1[2] <= puVar7 + 1) {
      FUN_140213274(param_1,2);
      puVar7 = (undefined4 *)param_1[1];
    }
    *puVar7 = 0x20003a;
    puVar7 = puVar7 + 1;
    param_1[1] = (longlong)puVar7;
    if (param_2 == 5) goto LAB_140212c10;
    if ((param_2 & 0xf) < 8) {
      pwVar4 = (wchar_t *)(&PTR_DAT_149e35340)[param_2 & 0xf];
    }
    else {
      pwVar4 = L"UnknownVerbosity";
    }
    sVar2 = wcslen(pwVar4);
    lVar6 = (longlong)(int)sVar2;
    if ((ulonglong)param_1[2] <= (ulonglong)((longlong)puVar7 + lVar6 * 2)) {
      FUN_140213274(param_1,lVar6);
      puVar7 = (undefined4 *)param_1[1];
    }
    if ((int)sVar2 != 0) {
      memcpy(puVar7,pwVar4,(longlong)(sVar2 << 0x20) >> 0x1f);
      puVar7 = (undefined4 *)((longlong)puVar7 + lVar6 * 2);
      param_1[1] = (longlong)puVar7;
    }
  }
  if ((undefined4 *)param_1[2] <= puVar7 + 1) {
    FUN_140213274(param_1,2);
    puVar7 = (undefined4 *)param_1[1];
  }
  *puVar7 = 0x20003a;
  param_1[1] = (longlong)(puVar7 + 1);
LAB_140212c10:
  if (param_4 != (wchar_t *)0x0) {
    sVar2 = wcslen(param_4);
    lVar6 = (longlong)(int)sVar2;
    if ((ulonglong)param_1[2] <= (ulonglong)(lVar6 * 2 + param_1[1])) {
      FUN_140213274(param_1,lVar6);
    }
    if ((int)sVar2 != 0) {
      _Dst = (void *)param_1[1];
      memcpy(_Dst,param_4,(longlong)(sVar2 << 0x20) >> 0x1f);
      param_1[1] = (longlong)((longlong)_Dst + lVar6 * 2);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140212e80 FUN_140212e80 body=71 status=ok
// SIG undefined FUN_140212e80(void)

void FUN_140212e80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_38 [40];
  undefined8 *local_10;
  ulonglong local_8;
  
  local_10 = &local_res18;
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_140212ec8(param_1,param_2,local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140212ec8 FUN_140212ec8 body=196 status=ok
// SIG undefined FUN_140212ec8(void)

longlong FUN_140212ec8(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = param_3;
  while( true ) {
    uVar2 = local_50;
    local_58 = local_50;
    lVar1 = *(longlong *)(param_1 + 8);
    iVar5 = (int)((ulonglong)(*(longlong *)(param_1 + 0x10) - lVar1) >> 1);
    puVar4 = (undefined8 *)FUN_144737586();
    local_60 = uVar2;
    local_68 = 0;
    uVar3 = __stdio_common_vswprintf(*puVar4,lVar1,(longlong)iVar5,param_2);
    if ((-1 < (int)uVar3) && ((int)uVar3 < iVar5)) break;
    FUN_140213274(param_1,0x40);
  }
  *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + (ulonglong)uVar3 * 2;
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140212f8e FUN_140212f8e body=127 status=ok
// SIG undefined FUN_140212f8e(void)

undefined8 FUN_140212f8e(undefined8 param_1)

{
  undefined1 auStack_68 [32];
  uint local_48;
  uint local_40;
  uint local_38;
  uint local_30;
  _SYSTEMTIME local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  GetSystemTime(&local_28);
  local_30 = (uint)local_28.wMilliseconds;
  local_38 = (uint)local_28.wSecond;
  local_40 = (uint)local_28.wMinute;
  local_48 = (uint)local_28.wHour;
  FUN_14021300e(param_1,local_28.wYear,local_28.wMonth,local_28.wDay);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14021300e FUN_14021300e body=437 status=ok
// SIG undefined FUN_14021300e(void)

longlong *
FUN_14021300e(longlong *param_1,uint param_2,int param_3,int param_4,int param_5,int param_6,
             int param_7,int param_8)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  cVar2 = FUN_1402131c4(param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  if (cVar2 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/DateTime.cpp",0x2b,
                  L"Invalid Date values. Y:%d, M:%d, D:%d, H:%d, M:%d, S:%d, Ms:%d",param_2,param_3,
                  param_4,param_5,param_6,param_7,param_8);
  }
  uVar3 = 0;
  if ((param_2 & 3) == 0 && 2 < param_3) {
    uVar5 = param_2 * -0x3d70a3d7 + 0x51eb850;
    uVar3 = 1;
    if ((uVar5 >> 2 | param_2 * 0x40000000) < 0x28f5c29) {
      uVar3 = (uint)((uVar5 >> 4 | param_2 * -0x70000000) < 0xa3d70b);
    }
  }
  iVar6 = param_2 - 1;
  iVar4 = param_2 + 2;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  iVar1 = (int)((ulonglong)((longlong)iVar6 * -0x51eb851f) >> 0x20);
  *param_1 = (longlong)param_8 * 10000 + (longlong)param_7 * 10000000 +
             (longlong)param_6 * 600000000 + (longlong)param_5 * 36000000000 +
             (longlong)
             (int)(*(int *)(&DAT_149e2c51c + (longlong)param_3 * 4) +
                   param_2 * 0x16d + param_4 + (iVar4 >> 2) + ((iVar1 >> 5) - (iVar1 >> 0x1f)) +
                   iVar6 / 400 + uVar3 + -0x16e) * 864000000000;
  return param_1;
}



// FUNCTION 1402131c4 FUN_1402131c4 body=176 status=ok
// SIG undefined FUN_1402131c4(void)

bool FUN_1402131c4(uint param_1,uint param_2,int param_3,uint param_4,uint param_5,uint param_6,
                  uint param_7)

{
  short sVar1;
  int iVar2;
  
  if (param_3 < 1) {
    return false;
  }
  if (0x270e < param_1 - 1) {
    return false;
  }
  if (0xb < param_2 - 1) {
    return false;
  }
  if ((param_1 & 3) == 0 && param_2 == 2) {
    sVar1 = (short)param_1;
    iVar2 = 0x1d;
    if ((0x28f < (ushort)((ushort)(sVar1 * 0x5c29) >> 2 | sVar1 * 0x4000)) ||
       (sVar1 == (short)((short)((param_1 & 0xffff) / 400) * 400))) goto LAB_14021320c;
  }
  iVar2 = *(int *)(&DAT_149e2c4e0 + (ulonglong)param_2 * 4);
LAB_14021320c:
  return (param_7 < 1000 && param_6 < 0x3c) &&
         ((param_4 < 0x18 && param_3 <= iVar2) && param_5 < 0x3c);
}



// FUNCTION 140213274 FUN_140213274 body=184 status=ok
// SIG undefined FUN_140213274(void)

void FUN_140213274(longlong *param_1,longlong param_2)

{
  void *_Src;
  longlong lVar1;
  ulonglong uVar2;
  void *_Dst;
  ulonglong uVar3;
  
  uVar2 = ((param_1[2] - *param_1 >> 1) + param_2) - 1;
  uVar2 = uVar2 >> 1 | uVar2;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar3 = (uVar2 >> 0x10 | uVar2) + 1;
  uVar2 = 0x20;
  if (0x20 < uVar3) {
    uVar2 = uVar3;
  }
  _Dst = (void *)FUN_14001cc68(uVar2 * 2,0);
  _Src = (void *)*param_1;
  lVar1 = param_1[1];
  memcpy(_Dst,_Src,lVar1 - (longlong)_Src);
  if ((char)param_1[3] == '\x01') {
    FUN_1400020a8(_Src);
  }
  *param_1 = (longlong)_Dst;
  param_1[1] = (lVar1 - (longlong)_Src) + (longlong)_Dst;
  param_1[2] = (longlong)((longlong)_Dst + uVar2 * 2);
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



// FUNCTION 14021332c FUN_14021332c body=425 status=ok
// SIG undefined FUN_14021332c(void)

void FUN_14021332c(longlong *param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  double dVar7;
  
  dVar7 = (double)(((*param_1 / 864000000000) * 864000000000) % 864000000000) / 864000000000.0 +
          (double)(int)(*param_1 / 864000000000) + 1721425.5 + 0.5;
  iVar4 = (int)ROUND(dVar7 + dVar7 + -0.5) >> 1;
  iVar1 = (iVar4 * 4 + 0x42f64) / 0x23ab1;
  iVar2 = iVar1 * 0x23ab1;
  iVar3 = iVar2 + 3;
  iVar2 = iVar2 + 6;
  if (-1 < iVar3) {
    iVar2 = iVar3;
  }
  iVar4 = (iVar4 + 0x10bd9) - (iVar2 >> 2);
  iVar3 = iVar4 * 4000;
  iVar3 = iVar3 + (int)((ulonglong)((longlong)(iVar3 + 4000) * -0x48441d23) >> 0x20) + 4000;
  iVar2 = (iVar3 >> 0x14) - (iVar3 >> 0x1f);
  iVar6 = iVar2 * 0x5b5;
  iVar3 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  iVar5 = (iVar4 - (iVar3 >> 2)) + 0x1f;
  iVar3 = iVar5 * 0x50;
  iVar4 = iVar3 / 0x98f;
  iVar6 = (int)((ulonglong)((longlong)(iVar4 * 0x98f) * -0x66666667) >> 0x20);
  iVar3 = iVar3 / 0x6925;
  *param_2 = iVar1 * 100 + iVar2 + iVar3 + -0x1324;
  *param_3 = iVar4 + iVar3 * -0xc + 2;
  *param_4 = (iVar5 - (iVar6 >> 0x1f)) + (iVar6 >> 5);
  return;
}



// FUNCTION 1402134d6 FUN_1402134d6 body=178 status=ok
// SIG undefined FUN_1402134d6(void)

void FUN_1402134d6(ulonglong *param_1,longlong param_2)

{
  void *_Src;
  ulonglong uVar1;
  void *_Dst;
  ulonglong uVar2;
  
  uVar1 = ~*param_1 + param_2 + param_1[2];
  uVar1 = uVar1 >> 1 | uVar1;
  uVar1 = uVar1 >> 2 | uVar1;
  uVar1 = uVar1 >> 4 | uVar1;
  uVar1 = uVar1 >> 8 | uVar1;
  uVar2 = (uVar1 >> 0x10 | uVar1) + 1;
  uVar1 = 0x20;
  if (0x20 < uVar2) {
    uVar1 = uVar2;
  }
  _Dst = (void *)FUN_14001cc68(uVar1,0);
  _Src = (void *)*param_1;
  uVar2 = param_1[1];
  memcpy(_Dst,_Src,uVar2 - (longlong)_Src);
  if ((char)param_1[3] == '\x01') {
    FUN_1400020a8(_Src);
  }
  *param_1 = (ulonglong)_Dst;
  param_1[1] = (uVar2 - (longlong)_Src) + (longlong)_Dst;
  param_1[2] = uVar1 + (longlong)_Dst;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



// FUNCTION 140213588 FUN_140213588 body=126 status=ok
// SIG undefined FUN_140213588(void)

void FUN_140213588(longlong param_1,undefined4 param_2,undefined1 param_3)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  uVar1 = *(uint *)(param_1 + 0x990);
  if (((char)uVar1 < '\0') && (-1 < *(int *)(param_1 + 0x944))) {
    uVar3 = (uVar1 & 0x10) >> 4;
  }
  else {
    uVar3 = 0;
  }
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xb60) + 0x28);
  if ((*(byte *)(lVar2 + 0x1d0) & 8) == 0) {
    puVar4 = (undefined4 *)(*(longlong *)(param_1 + 0xb60) + 0xe0);
  }
  else {
    puVar4 = (undefined4 *)(lVar2 + 400);
  }
  FUN_140213606(*puVar4,uVar3,
                CONCAT31((int3)(uVar1 >> 8),
                         (uVar1 >> 9 & 1) == 0 && 0.0 < *(float *)(param_1 + 0x6f4)),param_2,param_3
               );
  return;
}



// FUNCTION 140213606 FUN_140213606 body=175 status=ok
// SIG undefined FUN_140213606(void)

undefined8 FUN_140213606(undefined4 param_1,char param_2,char param_3,char param_4,char param_5)

{
  if (param_4 != '\0') {
    if (param_3 == '\0') {
      switch(param_1) {
      case 0:
        return DAT_14c9dc468;
      case 1:
        return DAT_14c9dc480;
      case 2:
        return DAT_14c9dc498;
      case 3:
        return DAT_14c9dc4b0;
      }
    }
    else {
      switch(param_1) {
      case 0:
        return DAT_14ca546e8;
      case 1:
        return DAT_14ca54700;
      case 2:
        return DAT_14ca54718;
      case 3:
        return DAT_14ca54730;
      }
    }
    return 0;
  }
  if (param_2 == '\0') {
    if (param_5 != '\0') {
      return DAT_14ca54778;
    }
    return DAT_14ca54790;
  }
  if (param_3 != '\0') {
    return DAT_14ca54748;
  }
  return DAT_14ca54760;
}



// FUNCTION 1402136b6 FUN_1402136b6 body=107 status=ok
// SIG undefined FUN_1402136b6(void)

void FUN_1402136b6(longlong param_1,uint param_2)

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
LAB_140213705:
      FUN_140213722(param_1,param_2);
      *(int *)(param_1 + 0x48) = iVar3;
      FUN_1401239a4(param_1);
      return;
    }
  }
  else if (*(int *)(param_1 + 0x48) != iVar3) goto LAB_140213705;
  FUN_14021379e(param_1);
  FUN_140213722(param_1,param_2);
  return;
}



// FUNCTION 140213722 FUN_140213722 body=123 status=ok
// SIG undefined FUN_140213722(void)

void FUN_140213722(longlong param_1,int param_2)

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



// FUNCTION 14021379e FUN_14021379e body=325 status=ok
// SIG undefined FUN_14021379e(void)

void FUN_14021379e(longlong *param_1)

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



// FUNCTION 1402138e4 FUN_1402138e4 body=267 status=ok
// SIG undefined FUN_1402138e4(void)

void FUN_1402138e4(longlong param_1)

{
  uint uVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  cVar2 = FUN_140526f64();
  if (cVar2 != '\0') {
    if (*(char *)(param_1 + 0x198) == '\x02') {
      FUN_140d58844(param_1);
      FUN_14108add0(param_1);
      if (((*(int *)(param_1 + 0x5c) != 0) && (uVar1 = *(uint *)(param_1 + 0x58), -1 < (int)uVar1))
         && ((int)uVar1 < DAT_14c9647dc)) {
        puVar4 = (undefined8 *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
        if (((puVar4 != (undefined8 *)0x0) && (*(int *)(puVar4 + 2) == *(int *)(param_1 + 0x5c))) &&
           ((*(uint *)(puVar4 + 1) & 0x10200000) == 0)) {
          if ((*(uint *)(puVar4 + 1) & 0x10200000) == 0) {
            plVar3 = (longlong *)*puVar4;
          }
          else {
            plVar3 = (longlong *)0x0;
          }
          plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2b8))();
          if (plVar3 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014021398f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x30))(plVar3);
            return;
          }
        }
      }
    }
    else if (((*(int *)(param_1 + 0x54) != 0) &&
             (uVar1 = *(uint *)(param_1 + 0x50), -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc))
    {
      plVar3 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if (((plVar3 != (longlong *)0x0) && ((int)plVar3[2] == *(int *)(param_1 + 0x54))) &&
         (((*(uint *)(plVar3 + 1) & 0x10200000) == 0 && (*plVar3 != 0)))) {
        FUN_1405f658a();
        return;
      }
    }
  }
  return;
}



// FUNCTION 1402139ef FUN_1402139ef body=1488 status=ok
// SIG undefined FUN_1402139ef(void)

void FUN_1402139ef(undefined8 *param_1,longlong *param_2,double *param_3,longlong param_4,
                  undefined8 *param_5,undefined8 param_6)

{
  double dVar1;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  longlong lVar9;
  byte bVar10;
  double *pdVar11;
  undefined8 **ppuVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined1 auStack_278 [32];
  undefined **local_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  double local_220;
  double local_218;
  double local_210;
  undefined2 local_208;
  byte local_206;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  longlong local_1e8;
  undefined8 *local_1e0;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined8 *local_1c8 [2];
  double local_1b8 [13];
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  ulonglong local_f0;
  double dVar2;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_278;
  dVar4 = *param_3;
  dVar5 = param_3[1];
  dVar6 = param_3[2];
  dVar7 = (double)param_1[4];
  dVar8 = (double)param_1[5];
  dVar1 = param_3[3];
  dVar2 = param_3[3];
  dVar15 = dVar8 * dVar4 - dVar5 * dVar7;
  dVar17 = (double)param_1[6] * dVar5 - dVar6 * dVar8;
  dVar18 = dVar7 * dVar6 - (double)param_1[6] * dVar4;
  dVar17 = dVar17 + dVar17;
  dVar18 = dVar18 + dVar18;
  dVar15 = dVar15 + dVar15;
  dVar13 = (double)param_1[10];
  dVar3 = (double)param_1[9] * dVar13 + (double)param_1[6];
  dVar14 = (double)param_1[8] * dVar13 + (double)param_1[5];
  dVar20 = dVar13 * (double)param_1[7] + dVar7;
  dVar13 = dVar14 * dVar4 - dVar5 * dVar20;
  dVar16 = dVar3 * dVar5 - dVar6 * dVar14;
  dVar19 = dVar20 * dVar6 - dVar3 * dVar4;
  dVar16 = dVar16 + dVar16;
  dVar19 = dVar19 + dVar19;
  dVar13 = dVar13 + dVar13;
  local_138 = (dVar15 * dVar5 - dVar18 * dVar6) + dVar1 * dVar17 + dVar7 + param_3[4];
  local_130 = (dVar6 * dVar17 - dVar4 * dVar15) + dVar2 * dVar18 + dVar8 + param_3[5];
  local_128 = dVar15 * dVar1 + (double)param_1[6] + (dVar18 * dVar4 - dVar17 * dVar5) + param_3[6];
  dVar15 = (dVar13 * dVar5 - dVar19 * dVar6) + dVar1 * dVar16 + dVar20 + param_3[4];
  dVar20 = (dVar6 * dVar16 - dVar4 * dVar13) + dVar2 * dVar19 + dVar14 + param_3[5];
  dVar2 = dVar13 * dVar1 + dVar3 + (dVar19 * dVar4 - dVar16 * dVar5) + param_3[6];
  local_150 = local_138;
  if (dVar15 <= local_138) {
    local_150 = dVar15;
  }
  if (local_138 <= dVar15) {
    local_138 = dVar15;
  }
  local_148 = local_130;
  if (dVar20 <= local_130) {
    local_148 = dVar20;
  }
  local_140 = local_128;
  if (dVar2 <= local_128) {
    local_140 = dVar2;
  }
  if (local_130 <= dVar20) {
    local_130 = dVar20;
  }
  if (local_128 <= dVar2) {
    local_128 = dVar2;
  }
  dVar2 = (double)param_1[2];
  local_128 = local_128 + dVar2;
  local_130 = local_130 + dVar2;
  local_138 = local_138 + dVar2;
  local_140 = local_140 - dVar2;
  local_148 = local_148 - dVar2;
  local_150 = local_150 - dVar2;
  *(int *)(param_4 + 0x40) = *(int *)(param_4 + 0x40) + 1;
  bVar10 = (byte)*(ushort *)(param_5 + 2);
  if ((*(ushort *)(param_5 + 2) & 0x40) == 0) {
    local_258 = &PTR_FUN_149f75530;
    local_240 = DAT_14c8464f0;
    local_250 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
    uStack_248 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    local_228 = DAT_14c8464f0;
    dVar2 = (double)param_1[2];
    dVar1 = (double)param_1[4];
    dVar13 = (double)param_1[5];
    dVar15 = (double)param_1[6];
    dVar3 = (double)param_1[10];
    dVar14 = (double)param_1[9] * dVar3 + dVar15;
    dVar16 = (double)param_1[8] * dVar3 + dVar13;
    dVar20 = dVar3 * (double)param_1[7] + dVar1;
    dVar3 = dVar15;
    if (dVar14 <= dVar15) {
      dVar3 = dVar14;
    }
    dVar19 = dVar13;
    if (dVar16 <= dVar13) {
      dVar19 = dVar16;
    }
    dVar4 = dVar1;
    if (dVar20 <= dVar1) {
      dVar4 = dVar20;
    }
    if (dVar15 <= dVar14) {
      dVar15 = dVar14;
    }
    if (dVar13 <= dVar16) {
      dVar13 = dVar16;
    }
    if (dVar1 <= dVar20) {
      dVar1 = dVar20;
    }
    local_220 = (dVar1 + dVar2) - (dVar4 - dVar2);
    local_218 = (dVar13 + dVar2) - (dVar19 - dVar2);
    local_210 = (dVar15 + dVar2) - (dVar3 - dVar2);
    local_200 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
    uStack_1f8 = (undefined8 *)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    local_1f0 = DAT_14c8464f0;
    local_1e0 = param_5;
    local_1d8 = *param_5;
    local_1d0 = *(undefined4 *)(param_5 + 1);
    local_1cc = *(undefined4 *)((longlong)param_5 + 0xc);
    local_1c8[1] = (undefined8 *)param_6;
    pdVar11 = local_1b8;
    for (lVar9 = 0xc; local_238 = local_250, uStack_230 = uStack_248, local_1e8 = param_4,
        local_1c8[0] = param_1, lVar9 != 0; lVar9 = lVar9 + -1) {
      *pdVar11 = *param_3;
      param_3 = param_3 + 1;
      pdVar11 = pdVar11 + 1;
    }
  }
  else {
    local_258 = &PTR_FUN_149f754e0;
    local_250 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
    uStack_248 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    local_240 = DAT_14c8464f0;
    local_238 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
    uStack_230 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    local_228 = DAT_14c8464f0;
    FUN_144b0186e(param_1,&local_120);
    local_210 = local_f8 - local_110;
    local_218 = local_100 - local_118;
    local_220 = local_108 - local_120;
    uStack_1f8 = param_5;
    local_1f0 = *param_5;
    local_1e8 = param_5[1];
    local_1d8 = param_6;
    ppuVar12 = local_1c8;
    for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
      *ppuVar12 = (undefined8 *)*param_3;
      param_3 = param_3 + 1;
      ppuVar12 = ppuVar12 + 1;
    }
    bVar10 = *(byte *)(param_5 + 2);
    local_200 = param_4;
    local_1e0 = param_1;
  }
  local_206 = bVar10 >> 4 & 1;
  local_210 = local_210 * 0.5;
  local_218 = local_218 * 0.5;
  local_220 = local_220 * 0.5;
  local_208 = 0;
  (**(code **)(*param_2 + 0x60))(param_2,&local_150,&local_258);
  FUN_140213fc0(param_4);
  if ((local_f0 ^ (ulonglong)auStack_278) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140213fc0 FUN_140213fc0 body=134 status=ok
// SIG undefined FUN_140213fc0(void)

void FUN_140213fc0(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  
  piVar1 = (int *)(param_1 + 0x40);
  *piVar1 = *piVar1 + -1;
  if ((*piVar1 == 0) && (*(char *)(param_1 + 0x44) == '\x01')) {
    iVar3 = *(int *)(param_1 + 0x1c50);
    *(uint *)(param_1 + 0x1c50) = iVar3 + 1U;
    if (*(uint *)(param_1 + 0x1c54) < iVar3 + 1U) {
      FUN_140ef0e5e(param_1 + 0x48,iVar3);
    }
    lVar10 = param_1 + 0x48;
    if (*(longlong *)(param_1 + 0x1c48) != 0) {
      lVar10 = *(longlong *)(param_1 + 0x1c48);
    }
    lVar9 = (longlong)iVar3 * 0x38;
    *(undefined8 *)(lVar10 + 0x30 + lVar9) = *(undefined8 *)(param_1 + 0x38);
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    uVar8 = *(undefined8 *)(param_1 + 0x30);
    puVar2 = (undefined8 *)(lVar10 + 0x20 + lVar9);
    *puVar2 = *(undefined8 *)(param_1 + 0x28);
    puVar2[1] = uVar8;
    puVar2 = (undefined8 *)(lVar10 + 0x10 + lVar9);
    *puVar2 = uVar6;
    puVar2[1] = uVar7;
    *(undefined8 *)(lVar10 + lVar9) = uVar4;
    ((undefined8 *)(lVar10 + lVar9))[1] = uVar5;
  }
  return;
}



// FUNCTION 140214046 FUN_140214046 body=265 status=ok
// SIG undefined FUN_140214046(void)

void FUN_140214046(longlong param_1,longlong param_2)

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
  iVar1 = FUN_140214162(param_1 + 0xd0,uVar2 ^ uVar3);
  if ((iVar1 != -1) && (DAT_14cb96658 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140214162 FUN_140214162 body=186 status=ok
// SIG undefined FUN_140214162(void)

int FUN_140214162(longlong *param_1,uint param_2,undefined8 *param_3)

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
        local_40 = *(undefined8 *)(lVar3 + (longlong)iVar4 * 0x6f8);
        cVar1 = FUN_140bf1e82(&local_40,&local_48);
        if (cVar1 != '\0') goto LAB_1402141f6;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0x6f0 + (longlong)iVar4 * 0x6f8);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_1402141f6:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14021421e FUN_14021421e body=59 status=ok
// SIG undefined FUN_14021421e(void)

void FUN_14021421e(longlong *param_1)

{
  FUN_140214259(param_1[3],(int)param_1[4]);
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 140214259 FUN_140214259 body=54 status=ok
// SIG undefined FUN_140214259(void)

void FUN_140214259(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14021428f(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 14021428f FUN_14021428f body=53 status=ok
// SIG undefined FUN_14021428f(void)

void FUN_14021428f(longlong param_1,int param_2)

{
  byte *pbVar1;
  
  if (param_2 != 0) {
    pbVar1 = (byte *)(param_1 + 0x30);
    do {
      (*(code *)(&PTR_LAB_14b4d9d70)[*pbVar1])(pbVar1 + -0x20);
      pbVar1 = pbVar1 + 0x38;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1402142c4 FUN_1402142c4 body=91 status=ok
// SIG undefined FUN_1402142c4(void)

void FUN_1402142c4(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)(param_1 + 0x60);
    do {
      *puVar1 = 0;
      if (*(longlong *)(puVar1 + -2) != 0) {
        FUN_1400020a8();
      }
      FUN_1448fc100(puVar1 + -0x12);
      FUN_140f517a3(*(undefined8 *)(puVar1 + -0x16),puVar1[-0x14]);
      if (*(longlong *)(puVar1 + -0x16) != 0) {
        FUN_1400020a8();
      }
      puVar1 = puVar1 + 0x1e;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140214320 FUN_140214320 body=159 status=ok
// SIG undefined FUN_140214320(void)

void FUN_140214320(undefined8 *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  *param_1 = 0;
  if (*(int *)(param_1 + 4) != *(int *)((longlong)param_1 + 0x4c)) {
    FUN_140eb5252(param_1 + 3);
    FUN_140eb539c(param_1 + 3);
  }
  iVar1 = *(int *)(param_1 + 2);
  if ((longlong)iVar1 != 0) {
    lVar2 = param_1[1];
    lVar4 = 0;
    do {
      *(undefined8 *)(lVar2 + 8 + lVar4) = 0;
      *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x47efffffe0000000;
      *(undefined8 *)(lVar2 + 0x18 + lVar4) = 0xb810000000000000;
      lVar3 = (longlong)*(int *)(lVar2 + 0x28 + lVar4);
      if (lVar3 != 0) {
        memset(*(void **)(lVar2 + 0x20 + lVar4),0,lVar3 << 2);
      }
      lVar4 = lVar4 + 0x30;
    } while ((longlong)iVar1 * 0x30 != lVar4);
  }
  return;
}



// FUNCTION 1402143c0 FUN_1402143c0 body=162 status=ok
// SIG undefined FUN_1402143c0(void)

void FUN_1402143c0(longlong *param_1,undefined8 param_2)

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
        goto LAB_14021444d;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_14021444d:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 140214462 FUN_140214462 body=286 status=ok
// SIG undefined FUN_140214462(void)

undefined4 FUN_140214462(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined8 local_90;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  undefined1 local_60 [32];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_140214e6c(local_60,param_1 + 0x638,2);
  local_98 = param_2;
  local_90 = param_3;
  uVar1 = FUN_140214582(param_1,*(undefined8 *)(param_1 + 0x88),DAT_14cb96770,local_60);
  if (((char)uVar1 != '\0') && ((longlong)*(int *)(param_1 + 0x80) != 0)) {
    lVar3 = *(longlong *)(param_1 + 0x78);
    lVar2 = (longlong)*(int *)(param_1 + 0x80) * 0x78;
    do {
      local_68 = (double)*(int *)(param_2 + 0x84);
      local_80 = (double)*(int *)(lVar3 + 0x68);
      local_78 = (double)*(int *)(lVar3 + 0x6c);
      local_70 = (double)*(int *)(lVar3 + 0x70);
      local_98 = param_2;
      local_90 = param_3;
      FUN_140214582(lVar3,*(undefined8 *)(param_1 + 0x88),DAT_14cb96780,&local_80);
      lVar3 = lVar3 + 0x78;
      lVar2 = lVar2 + -0x78;
    } while (lVar2 != 0);
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140214582 FUN_140214582 body=1244 status=ok
// SIG undefined FUN_140214582(void)

bool FUN_140214582(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  longlong param_5,longlong param_6)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  undefined4 *puVar6;
  longlong lVar7;
  char *pcVar8;
  undefined1 auStack_178 [32];
  char *local_158;
  undefined8 *local_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined4 local_100;
  longlong local_f8 [2];
  longlong local_e8 [2];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0;
  undefined8 local_b8;
  undefined1 local_b0;
  undefined8 local_a8;
  undefined1 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  uint uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_150 = param_4;
  local_d8 = param_3;
  local_d0 = param_2;
  if (*param_1 < 1) {
    bVar2 = false;
  }
  else {
    FUN_1400021e4(&local_d0,local_e8);
    FUN_1400021e4(&local_d8,local_f8);
    if ((longlong)param_1[4] != 0) {
      pcVar8 = *(char **)(param_1 + 2);
      local_158 = pcVar8 + (longlong)param_1[4] * 0x30;
      do {
        FUN_140214cb8(param_6);
        local_100 = DAT_14cb96790;
        local_108 = DAT_14cb96788;
        FUN_140214b66(param_6,&local_108,local_e8);
        local_110 = DAT_14cb967a0;
        local_118 = DAT_14cb96798;
        FUN_140214b66(param_6,&local_118,local_e8);
        local_120 = DAT_14cb967b0;
        local_128 = DAT_14cb967a8;
        FUN_140214b66(param_6,&local_128,local_f8);
        local_130 = DAT_14cb967e8;
        local_138 = DAT_14cb967e0;
        iVar3 = *(int *)(param_6 + 0x20);
        if (iVar3 == 0) {
          FUN_140214cb8(param_6);
          iVar3 = *(int *)(param_6 + 0x20);
        }
        lVar7 = *(longlong *)(param_6 + 0x18);
        lVar5 = (longlong)(iVar3 + -1) * 0x10;
        local_88 = *local_150;
        uStack_80 = *(uint *)(local_150 + 1);
        uStack_7c = *(undefined4 *)((longlong)local_150 + 0xc);
        local_78 = *(undefined4 *)(local_150 + 2);
        uStack_74 = *(undefined4 *)((longlong)local_150 + 0x14);
        uStack_70 = *(undefined4 *)(local_150 + 3);
        uStack_6c = *(undefined4 *)((longlong)local_150 + 0x1c);
        iVar3 = *(int *)(lVar7 + 8 + lVar5);
        *(uint *)(lVar7 + 8 + lVar5) = iVar3 + 1U;
        if (*(uint *)(lVar7 + 0xc + lVar5) < iVar3 + 1U) {
          FUN_148a65c4a((longlong *)(lVar7 + lVar5),iVar3);
        }
        lVar7 = *(longlong *)(lVar7 + lVar5);
        lVar5 = (longlong)iVar3 * 0x38;
        *(undefined4 *)(lVar7 + 8 + lVar5) = local_130;
        *(undefined8 *)(lVar7 + lVar5) = local_138;
        *(undefined1 *)(lVar7 + 0x30 + lVar5) = 4;
        puVar6 = (undefined4 *)(lVar7 + 0x20 + lVar5);
        *puVar6 = local_78;
        puVar6[1] = uStack_74;
        puVar6[2] = uStack_70;
        puVar6[3] = uStack_6c;
        puVar6 = (undefined4 *)(lVar7 + 0x10 + lVar5);
        *puVar6 = (undefined4)local_88;
        puVar6[1] = local_88._4_4_;
        puVar6[2] = uStack_80;
        puVar6[3] = uStack_7c;
        local_140 = DAT_14cb967c0;
        local_148 = DAT_14cb967b8;
        FUN_140214a60(param_6,&local_148,*param_1);
        cVar1 = *pcVar8;
        if (DAT_14cb96828 == (undefined8 *)0x0) {
          DAT_14cb96828 = (undefined8 *)FUN_14001cc68(0x30,0x10);
          *DAT_14cb96828 = 0;
          DAT_14cb96828[1] = 0;
          DAT_14cb96828[2] = 0;
          DAT_14cb96828[3] = 0;
          DAT_14cb96828[4] = 0;
          DAT_14cb96828[5] = 0;
        }
        if ((*(byte *)(DAT_14cb96828[2] + 8 + (longlong)cVar1 * 0x80) & 2) != 0) {
          lVar7 = DAT_14cb96828[2] + (longlong)cVar1 * 0x80;
          local_90 = DAT_14cb967f8;
          local_98 = DAT_14cb967f0;
          FUN_140214b66(param_6,&local_98,lVar7 + 0x18);
          uVar4 = *(uint *)(lVar7 + 8);
          if ((uVar4 & 8) != 0) {
            local_a8 = DAT_14cb96810;
            local_a0 = 0;
            FUN_140214ae0(param_6,&local_a8,*(undefined8 *)(pcVar8 + 8));
            uVar4 = *(uint *)(lVar7 + 8);
          }
          if ((uVar4 & 0x10) != 0) {
            local_b8 = DAT_14cb96820;
            local_b0 = 0;
            FUN_140214ae0(param_6,&local_b8,*(undefined8 *)(pcVar8 + 0x10));
            uVar4 = *(uint *)(lVar7 + 8);
          }
          if ((uVar4 & 0x20) != 0) {
            local_c8 = DAT_14cb96818;
            local_c0 = 0;
            FUN_140214ae0(param_6,&local_c8,*(undefined8 *)(pcVar8 + 0x18));
            uVar4 = *(uint *)(lVar7 + 8);
          }
          if ((uVar4 & 1) == 0) {
            uStack_80 = DAT_14cb96808;
            local_88 = DAT_14cb96800;
            FUN_140214a60(param_6,&local_88,0);
          }
          else {
            uStack_80 = DAT_14cb96808;
            local_88 = DAT_14cb96800;
            FUN_140214a60(param_6,&local_88,1);
            iVar3 = *(int *)(param_5 + 0x90);
            if ((longlong)iVar3 != 0) {
              lVar7 = *(longlong *)(param_5 + 0x88);
              puVar6 = *(undefined4 **)(pcVar8 + 0x20);
              lVar5 = 0;
              do {
                local_88 = *(undefined8 *)(lVar7 + 8 + lVar5);
                uStack_80 = uStack_80 & 0xffffff00;
                FUN_140214a60(param_6,&local_88,*puVar6);
                puVar6 = puVar6 + 1;
                lVar5 = lVar5 + 0x10;
              } while ((longlong)iVar3 * 0x10 != lVar5);
            }
          }
        }
        if ((longlong)*(int *)(param_5 + 0x148) != 0) {
          lVar7 = (longlong)*(int *)(param_5 + 0x148) * 0x50;
          lVar5 = *(longlong *)(param_5 + 0x140) + 0x28;
          do {
            if (*(char *)(lVar5 + -8) == '\x01') {
              local_88 = *(undefined8 *)(lVar5 + -0x28);
              uStack_80 = uStack_80 & 0xffffff00;
              FUN_148a5f0ee(param_6,&local_88,lVar5);
            }
            lVar5 = lVar5 + 0x50;
            lVar7 = lVar7 + -0x50;
          } while (lVar7 != 0);
        }
        pcVar8 = pcVar8 + 0x30;
      } while (pcVar8 != local_158);
    }
    if (local_f8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_e8[0] != 0) {
      FUN_1400020a8();
    }
    bVar2 = 0 < *param_1;
  }
  if ((local_60 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar2;
}



// FUNCTION 140214a60 FUN_140214a60 body=128 status=ok
// SIG undefined FUN_140214a60(void)

void FUN_140214a60(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = *(int *)(param_1 + 0x20);
  if (iVar3 == 0) {
    FUN_140214cb8(param_1);
    iVar3 = *(int *)(param_1 + 0x20);
  }
  lVar1 = *(longlong *)(param_1 + 0x18);
  lVar4 = (longlong)(iVar3 + -1) * 0x10;
  iVar3 = *(int *)(lVar1 + 8 + lVar4);
  *(uint *)(lVar1 + 8 + lVar4) = iVar3 + 1U;
  if (*(uint *)(lVar1 + 0xc + lVar4) < iVar3 + 1U) {
    FUN_148a65c4a((longlong *)(lVar1 + lVar4),iVar3);
  }
  lVar1 = *(longlong *)(lVar1 + lVar4);
  lVar4 = (longlong)iVar3 * 0x38;
  uVar2 = *param_2;
  *(undefined4 *)(lVar1 + 8 + lVar4) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(lVar1 + lVar4) = uVar2;
  *(undefined1 *)(lVar1 + 0x30 + lVar4) = 0;
  *(undefined4 *)(lVar1 + 0x10 + lVar4) = param_3;
  return;
}



// FUNCTION 140214ae0 FUN_140214ae0 body=134 status=ok
// SIG undefined FUN_140214ae0(void)

void FUN_140214ae0(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = *(int *)(param_1 + 0x20);
  if (iVar3 == 0) {
    FUN_140214cb8(param_1);
    iVar3 = *(int *)(param_1 + 0x20);
  }
  lVar1 = *(longlong *)(param_1 + 0x18);
  lVar4 = (longlong)(iVar3 + -1) * 0x10;
  iVar3 = *(int *)(lVar1 + 8 + lVar4);
  *(uint *)(lVar1 + 8 + lVar4) = iVar3 + 1U;
  if (*(uint *)(lVar1 + 0xc + lVar4) < iVar3 + 1U) {
    FUN_148a65c4a((longlong *)(lVar1 + lVar4),iVar3);
  }
  lVar1 = *(longlong *)(lVar1 + lVar4);
  lVar4 = (longlong)iVar3 * 0x38;
  uVar2 = *param_2;
  *(undefined4 *)(lVar1 + 8 + lVar4) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(lVar1 + lVar4) = uVar2;
  *(undefined1 *)(lVar1 + 0x30 + lVar4) = 1;
  *(undefined8 *)(lVar1 + 0x10 + lVar4) = param_3;
  return;
}



// FUNCTION 140214b66 FUN_140214b66 body=300 status=ok
// SIG undefined FUN_140214b66(void)

void FUN_140214b66(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  void *_Src;
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  void *local_58;
  int local_50;
  undefined4 local_4c;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar2 = *(int *)(param_1 + 0x20);
  if (iVar2 == 0) {
    FUN_140214cb8(param_1);
    iVar2 = *(int *)(param_1 + 0x20);
  }
  plVar4 = (longlong *)((longlong)(iVar2 + -1) * 0x10 + *(longlong *)(param_1 + 0x18));
  local_58 = (void *)0x0;
  local_50 = *(int *)(param_3 + 1);
  lVar5 = (longlong)local_50;
  _Src = (void *)*param_3;
  if (lVar5 == 0) {
    local_4c = 0;
  }
  else {
    FUN_1446dd670(&local_58,local_50,0);
    memcpy(local_58,_Src,lVar5 * 2);
  }
  local_38 = 2;
  iVar2 = (int)plVar4[1];
  *(uint *)(plVar4 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)plVar4 + 0xc) < iVar2 + 1U) {
    FUN_148a65c4a(plVar4,iVar2);
  }
  uVar1 = *param_2;
  puVar3 = (undefined8 *)((longlong)iVar2 * 0x38 + *plVar4);
  *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(param_2 + 1);
  *puVar3 = uVar1;
  *(byte *)(puVar3 + 6) = local_38;
  (*(code *)(&PTR_caseD_0_14b4da630)[local_38])(puVar3 + 2,&local_58);
  (*(code *)(&PTR_LAB_14b4d9d70)[local_38])(&local_58);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140214c94 FUN_140214c94 body=35 status=ok
// SIG undefined FUN_140214c94(void)

void FUN_140214c94(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  return;
}



// FUNCTION 140214cb8 FUN_140214cb8 body=128 status=ok
// SIG undefined FUN_140214cb8(void)

void FUN_140214cb8(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  uint uVar4;
  
  plVar1 = (longlong *)(param_1 + 0x18);
  uVar4 = *(uint *)(param_1 + 0x20);
  if (uVar4 == 0) {
    if (0x1f < *(int *)(param_1 + 0x24)) {
      uVar4 = 0;
      goto LAB_140214ce1;
    }
    FUN_140214dda(plVar1);
    uVar4 = *(uint *)(param_1 + 0x20);
  }
  if ((0 < (int)uVar4) && (*(int *)(*plVar1 + -8 + (ulonglong)uVar4 * 0x10) == 0)) {
    return;
  }
LAB_140214ce1:
  *(uint *)(param_1 + 0x20) = uVar4 + 1;
  if (*(uint *)(param_1 + 0x24) < uVar4 + 1) {
    FUN_1456e71d0(plVar1,uVar4);
  }
  lVar3 = *plVar1;
  puVar2 = (undefined8 *)(lVar3 + (longlong)(int)uVar4 * 0x10);
  *puVar2 = 0;
  puVar2[1] = 0;
  FUN_140214d38(lVar3 + (longlong)(int)uVar4 * 0x10);
  return;
}



// FUNCTION 140214d38 FUN_140214d38 body=162 status=ok
// SIG undefined FUN_140214d38(void)

undefined8 FUN_140214d38(longlong param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  if (DAT_14c872d28 == (longlong *)0x0) {
    uVar3 = 0xe00;
  }
  else if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
    uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - DAT_14c841ee0];
  }
  else {
    uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,0xe00,8);
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar3 >> 3;
  uVar2 = SUB168(auVar1 * ZEXT816(0x2492492492492493),0);
  iVar4 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
  iVar5 = 0x7fffffff;
  if (0x3f < iVar4) {
    iVar5 = iVar4;
  }
  if (iVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar5;
    uVar2 = FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar5,0x38,8);
  }
  return uVar2;
}



// FUNCTION 140214dda FUN_140214dda body=145 status=ok
// SIG undefined FUN_140214dda(void)

void FUN_140214dda(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (DAT_14c872d28 == (longlong *)0x0) {
    uVar1 = 0x200;
  }
  else if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
    uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - DAT_14c841e20];
  }
  else {
    uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,0x200,8);
  }
  uVar2 = 0x7fffffff;
  if (0x1f < (int)(uVar1 >> 4)) {
    uVar2 = uVar1 >> 4 & 0xffffffff;
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 140214e6c FUN_140214e6c body=792 status=ok
// SIG undefined FUN_140214e6c(void)

double * FUN_140214e6c(double *param_1,longlong param_2,uint param_3)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auStack_e8 [40];
  int local_c0 [4];
  int local_b0 [4];
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar7 = 0;
  local_b0[2] = 0;
  local_b0[0] = 0;
  local_b0[1] = 0;
  local_c0[2] = 0;
  local_c0[0] = 0;
  local_c0[1] = 0;
  if (0 < (int)param_3) {
    uVar8 = 0;
    lVar9 = param_2;
    do {
      lVar10 = 0;
      do {
        dVar12 = *(double *)(lVar9 + lVar10 * 2);
        iVar11 = (int)uVar8;
        if (*(double *)
             (param_2 + (longlong)*(int *)((longlong)local_b0 + lVar10) * 0x18 + lVar10 * 2) <=
            dVar12) {
          iVar11 = *(int *)((longlong)local_b0 + lVar10);
        }
        *(int *)((longlong)local_b0 + lVar10) = iVar11;
        pdVar1 = (double *)
                 (param_2 + (longlong)*(int *)((longlong)local_c0 + lVar10) * 0x18 + lVar10 * 2);
        iVar11 = (int)uVar8;
        if (dVar12 < *pdVar1 || dVar12 == *pdVar1) {
          iVar11 = *(int *)((longlong)local_c0 + lVar10);
        }
        *(int *)((longlong)local_c0 + lVar10) = iVar11;
        lVar10 = lVar10 + 4;
      } while (lVar10 != 0xc);
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 0x18;
    } while (uVar8 != param_3);
  }
  dVar12 = 0.0;
  uVar8 = 0;
  do {
    lVar9 = (longlong)local_b0[uVar8];
    lVar10 = (longlong)local_c0[uVar8];
    dVar13 = *(double *)(param_2 + 0x10 + lVar10 * 0x18) -
             *(double *)(param_2 + 0x10 + lVar9 * 0x18);
    dVar16 = *(double *)(param_2 + 8 + lVar10 * 0x18) - *(double *)(param_2 + 8 + lVar9 * 0x18);
    dVar15 = *(double *)(param_2 + lVar10 * 0x18) - *(double *)(param_2 + lVar9 * 0x18);
    dVar13 = dVar13 * dVar13 + dVar15 * dVar15 + dVar16 * dVar16;
    if (dVar12 < dVar13) {
      uVar7 = uVar8 & 0xffffffff;
      dVar12 = dVar13;
    }
    uVar8 = uVar8 + 1;
  } while (uVar8 != 3);
  lVar10 = (longlong)local_b0[(int)uVar7];
  dVar13 = *(double *)(param_2 + 8 + lVar10 * 0x18);
  dVar15 = *(double *)(param_2 + 0x10 + lVar10 * 0x18);
  lVar9 = (longlong)local_c0[(int)uVar7];
  dVar16 = *(double *)(param_2 + 0x10 + lVar9 * 0x18);
  dVar14 = *(double *)(param_2 + 8 + lVar9 * 0x18);
  *param_1 = (*(double *)(param_2 + lVar10 * 0x18) + *(double *)(param_2 + lVar9 * 0x18)) * 0.5;
  param_1[1] = (dVar13 + dVar14) * 0.5;
  param_1[2] = (dVar15 + dVar16) * 0.5;
  if (dVar12 < 0.0) {
    dVar12 = sqrt(dVar12);
  }
  else {
    dVar12 = SQRT(dVar12);
  }
  dVar12 = dVar12 * 0.5;
  param_1[3] = dVar12;
  if (0 < (int)param_3) {
    dVar14 = dVar12 * dVar12;
    dVar13 = param_1[2];
    dVar15 = *param_1;
    dVar16 = param_1[1];
    lVar9 = 0;
    do {
      dVar2 = *(double *)(param_2 + 0x10 + lVar9);
      dVar4 = dVar2 - dVar13;
      dVar3 = *(double *)(param_2 + 8 + lVar9);
      dVar5 = dVar3 - dVar16;
      dVar6 = *(double *)(param_2 + lVar9) - dVar15;
      dVar4 = dVar4 * dVar4 + dVar6 * dVar6 + dVar5 * dVar5;
      if (dVar14 < dVar4) {
        dVar4 = SQRT(dVar4);
        dVar5 = (dVar12 / dVar4) * 0.5 + 0.5;
        dVar6 = 1.0 - dVar5;
        dVar13 = dVar13 * dVar5 + dVar2 * dVar6;
        dVar16 = dVar16 * dVar5 + dVar3 * dVar6;
        dVar15 = dVar15 * dVar5 + *(double *)(param_2 + lVar9) * dVar6;
        *param_1 = dVar15;
        param_1[1] = dVar16;
        param_1[2] = dVar13;
        dVar12 = (dVar12 + dVar4) * 0.5;
        param_1[3] = dVar12;
      }
      lVar9 = lVar9 + 0x18;
    } while ((ulonglong)param_3 * 0x18 != lVar9);
  }
  if ((local_a0 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140215186 FUN_140215186 body=44 status=ok
// SIG undefined FUN_140215186(void)

longlong FUN_140215186(longlong param_1,int param_2)

{
  FUN_1448fc46c(param_1 + 0x10);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1402151b2 FUN_1402151b2 body=99 status=ok
// SIG undefined FUN_1402151b2(void)

void FUN_1402151b2(longlong *param_1)

{
  longlong lVar1;
  int *piVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    piVar2 = (int *)((lVar1 + -8) - (ulonglong)*(uint *)(lVar1 + -8));
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        lVar1 = DAT_14c872d30;
        if (DAT_14c872d30 == 0) {
          lVar1 = FUN_145bdc178();
        }
        FUN_140028df4(lVar1,piVar2);
        return;
      }
      FUN_144705e74(piVar2);
      return;
    }
  }
  return;
}



// FUNCTION 140215215 FUN_140215215 body=529 status=ok
// SIG undefined FUN_140215215(void)

void FUN_140215215(longlong param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    puVar2 = *(undefined8 **)(param_1 + 0x250);
    if (puVar2 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
    puVar2 = *(undefined8 **)(param_1 + 0x248);
    if (puVar2 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
    puVar2 = *(undefined8 **)(param_1 + 0x240);
    if (puVar2 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
    puVar2 = *(undefined8 **)(param_1 + 0x238);
    if (puVar2 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
    puVar2 = *(undefined8 **)(param_1 + 0x230);
    if (puVar2 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
    FUN_140215426(param_1 + 0x1f8,0x7fffffffffffffff);
    FUN_1447a0b8a(*(undefined8 *)(param_1 + 0x1e8),*(undefined4 *)(param_1 + 0x1f0));
    FUN_14008ce12(param_1 + 0x1e8);
    if (*(longlong *)(param_1 + 0x1a0) != 0) {
      plVar3 = (longlong *)(param_1 + 0x1c0);
      if (*(longlong **)(param_1 + 0x1b0) != (longlong *)0x0) {
        plVar3 = *(longlong **)(param_1 + 0x1b0);
      }
      (**(code **)(*plVar3 + 0x10))();
    }
    if (*(longlong *)(param_1 + 0x160) != 0) {
      plVar3 = (longlong *)(param_1 + 0x180);
      if (*(longlong **)(param_1 + 0x170) != (longlong *)0x0) {
        plVar3 = *(longlong **)(param_1 + 0x170);
      }
      (**(code **)(*plVar3 + 0x10))();
    }
    puVar2 = *(undefined8 **)(param_1 + 0x150);
    if (puVar2 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
    FUN_140215426(param_1 + 0x118,0x7fffffffffffffff);
    FUN_1402002ba(param_1 + 0x108);
    if (*(longlong *)(param_1 + 0xc0) != 0) {
      plVar3 = (longlong *)(param_1 + 0xe0);
      if (*(longlong **)(param_1 + 0xd0) != (longlong *)0x0) {
        plVar3 = *(longlong **)(param_1 + 0xd0);
      }
      (**(code **)(*plVar3 + 0x10))();
    }
    if (*(longlong *)(param_1 + 0x80) != 0) {
      plVar3 = (longlong *)(param_1 + 0xa0);
      if (*(longlong **)(param_1 + 0x90) != (longlong *)0x0) {
        plVar3 = *(longlong **)(param_1 + 0x90);
      }
      (**(code **)(*plVar3 + 0x10))();
    }
    puVar2 = *(undefined8 **)(param_1 + 0x70);
    if (puVar2 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
    *(undefined ***)(param_1 + 0x30) = &PTR_FUN_14a217cb0;
    puVar2 = *(undefined8 **)(param_1 + 0x48);
    if (puVar2 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
    param_1 = param_1 + 0x260;
  }
  return;
}



// FUNCTION 140215426 FUN_140215426 body=740 status=ok
// SIG undefined FUN_140215426(void)

undefined8 FUN_140215426(longlong param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  LARGE_INTEGER LVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  bool bVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auStack_e8 [32];
  double local_c8;
  LARGE_INTEGER local_c0;
  uint *local_b8;
  uint local_b0;
  undefined1 local_a1;
  LARGE_INTEGER local_a0 [2];
  undefined1 *local_90;
  uint **local_88;
  LARGE_INTEGER local_80;
  undefined1 *local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar4 = 1;
  if (*(longlong *)(param_1 + 8) != 0) {
    QueryPerformanceCounter(&local_80);
    LVar3 = local_80;
    uVar9 = 0xffffffffffffffff;
    if (param_2 != 0x7fffffffffffffff) {
      if ((double)param_2 / 10000000.0 <= 0.0) {
        uVar9 = 0;
      }
      else {
        dVar11 = ((double)param_2 / 10000000.0) / DAT_14c83f418;
        uVar9 = (ulonglong)dVar11;
        uVar9 = (longlong)(dVar11 - 9.223372036854776e+18) & (longlong)uVar9 >> 0x3f | uVar9;
      }
    }
    if (*(longlong *)(param_1 + 8) == 0) {
LAB_1402156ce:
      uVar4 = 1;
    }
    else {
      puVar1 = (uint *)(param_1 + 0x10);
      local_c0.QuadPart = local_80.QuadPart + uVar9;
      auVar14._8_4_ = (int)(uVar9 >> 0x20);
      auVar14._0_8_ = uVar9;
      auVar14._12_4_ = 0x45300000;
      if (uVar9 == 0xffffffffffffffff) goto LAB_1402155f7;
      if (uVar9 != 0) {
        while (QueryPerformanceCounter(&local_80), (ulonglong)local_80 <= (ulonglong)local_c0) {
          uVar8 = *puVar1;
          do {
            LOCK();
            uVar2 = *puVar1;
            bVar10 = uVar8 == uVar2;
            if (bVar10) {
              *puVar1 = uVar8 | 1;
              uVar2 = uVar8;
            }
            uVar8 = uVar2;
            UNLOCK();
          } while (!bVar10);
          if (*(longlong *)(param_1 + 8) == 0) goto LAB_1402156ce;
          dVar11 = DAT_14c83f418 *
                   (((double)CONCAT44(0x43300000,(int)uVar9) - 4503599627370496.0) +
                   (auVar14._8_8_ - 1.9342813113834067e+25));
          QueryPerformanceCounter(&local_80);
          lVar5 = local_80.QuadPart - (longlong)LVar3;
          auVar13._8_4_ = (int)((ulonglong)lVar5 >> 0x20);
          auVar13._0_8_ = lVar5;
          auVar13._12_4_ = 0x45300000;
          auVar12._8_8_ = 0;
          auVar12._0_8_ =
               (dVar11 - (((double)CONCAT44(0x43300000,(int)lVar5) - 4503599627370496.0) +
                         (auVar13._8_8_ - 1.9342813113834067e+25)) * DAT_14c83f418) * 10000000.0 +
               0.5;
          auVar13 = roundpd(auVar12,auVar12,1);
          uVar7 = ((longlong)auVar13._0_8_ + 9999) / 10000;
          if (0xfffffffe < (longlong)uVar7) {
            uVar7 = 0xffffffff;
          }
          uVar6 = 0;
          if (0 < (longlong)uVar7) {
            uVar6 = uVar7;
          }
          while( true ) {
            if ((*puVar1 & 0xfffffffe) == (uVar8 & 0xfffffffe)) {
              local_88 = &local_b8;
              local_78 = &local_a1;
              local_80.QuadPart = (LONGLONG)&DAT_14682da90;
              local_90 = &LAB_14682da92;
              local_b8 = puVar1;
              local_b0 = uVar8 & 0xfffffffe;
              QueryPerformanceCounter(local_a0);
              local_c8 = (double)CONCAT62(local_a0[0].QuadPart._2_6_,
                                          CONCAT11(local_a0[0].s.LowPart._1_1_,
                                                   (undefined1)local_a0[0].s.LowPart)) *
                         DAT_14c83f420 + 16777216.0 + (double)(uVar6 & 0xffffffff) * 0.001;
              FUN_1456d3e9c(local_a0,puVar1,&local_90,&local_80);
              if (local_a0[0].s.LowPart._1_1_ != '\x01') goto LAB_140215516;
            }
            if (*(longlong *)(param_1 + 8) == 0) goto LAB_1402156ce;
            if (uVar9 != 0xffffffffffffffff) break;
LAB_1402155f7:
            uVar8 = *puVar1;
            do {
              LOCK();
              uVar2 = *puVar1;
              bVar10 = uVar8 == uVar2;
              if (bVar10) {
                *puVar1 = uVar8 | 1;
                uVar2 = uVar8;
              }
              uVar8 = uVar2;
              UNLOCK();
            } while (!bVar10);
            uVar6 = 0xffffffff;
            if (*(longlong *)(param_1 + 8) == 0) goto LAB_1402156ce;
          }
        }
      }
LAB_140215516:
      uVar4 = 0;
    }
  }
  if ((local_70 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 14021570b FUN_14021570b body=311 status=ok
// SIG undefined FUN_14021570b(void)

void FUN_14021570b(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar11 = FUN_144821ef4();
  local_3c = *param_4;
  FUN_1448fc859(lVar11,*param_2 + 0xe0,&local_3c,0);
  iVar9 = *(int *)(lVar11 + 0x30) + *(int *)(lVar11 + 0x20);
  iVar10 = iVar9 + *(int *)(lVar11 + 0x40);
  if (iVar10 != 0 && SCARRY4(iVar9,*(int *)(lVar11 + 0x40)) == iVar10 < 0) {
    puVar12 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar12 + 0xb;
    if ((undefined8 *)param_1[1] < puVar13) {
      FUN_140023dd8(param_1,0x60);
      puVar12 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar13 = puVar12 + 0xb;
    }
    *param_1 = (ulonglong)puVar13;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar12;
    param_1[6] = (ulonglong)(puVar12 + 1);
    uVar5 = *(undefined8 *)(lVar11 + 0x38);
    uVar1 = *(undefined4 *)(lVar11 + 0x40);
    uVar6 = *(undefined8 *)(lVar11 + 0x28);
    uVar2 = *(undefined4 *)(lVar11 + 0x30);
    uVar7 = *(undefined8 *)(lVar11 + 0x18);
    uVar3 = *(undefined4 *)(lVar11 + 0x20);
    uVar8 = *(undefined8 *)(lVar11 + 8);
    uVar4 = *(undefined4 *)(lVar11 + 0x10);
    puVar12[1] = 0;
    *puVar12 = &PTR_FUN_14a1e7fd8;
    puVar12[2] = param_3;
    puVar12[3] = uVar8;
    *(undefined4 *)(puVar12 + 4) = uVar4;
    puVar12[5] = uVar7;
    *(undefined4 *)(puVar12 + 6) = uVar3;
    puVar12[7] = uVar6;
    *(undefined4 *)(puVar12 + 8) = uVar2;
    puVar12[9] = uVar5;
    *(undefined4 *)(puVar12 + 10) = uVar1;
    *(undefined8 *)(lVar11 + 8) = 0;
    *(undefined4 *)(lVar11 + 0x10) = 0;
    *(undefined8 *)(lVar11 + 0x18) = 0;
    *(undefined4 *)(lVar11 + 0x20) = 0;
    *(undefined8 *)(lVar11 + 0x28) = 0;
    *(undefined4 *)(lVar11 + 0x30) = 0;
    *(undefined8 *)(lVar11 + 0x38) = 0;
    *(undefined4 *)(lVar11 + 0x40) = 0;
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140215850 FUN_140215850 body=178 status=ok
// SIG undefined FUN_140215850(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140215850(void)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [32];
  LARGE_INTEGER local_18;
  LARGE_INTEGER local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  QueryPerformanceCounter(&local_18);
  if (_DAT_14c75ed10 <= (double)local_18.QuadPart * DAT_14c83f420 + 16777216.0) {
    uVar1 = FUN_140215930();
    uVar2 = 3;
    if ((uVar1 & 1) == 0) {
      uVar2 = 1;
    }
    FUN_140215904(uVar2);
    QueryPerformanceCounter(&local_10);
    _DAT_14c75ed10 = (double)local_10.QuadPart * DAT_14c83f420 + 16777216.0 + 0.5;
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140215904 FUN_140215904 body=32 status=ok
// SIG undefined FUN_140215904(void)

void FUN_140215904(undefined4 param_1)

{
  char cVar1;
  
  cVar1 = DAT_14c758624;
  if (DAT_14c758624 == (char)param_1) {
    return;
  }
  DAT_14c758624 = (char)param_1;
  FUN_1467bc3e8(&DAT_14c86a9c0,cVar1,param_1);
  return;
}



// FUNCTION 140215930 FUN_140215930 body=122 status=ok
// SIG undefined FUN_140215930(void)

ulonglong FUN_140215930(void)

{
  ulonglong uVar1;
  undefined1 auStack_38 [39];
  undefined1 local_11;
  int local_10;
  short local_a;
  ulonglong local_8;
  
  uVar1 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_11 = 1;
  local_8 = uVar1;
  if (DAT_14c967960 != (longlong *)0x0) {
    local_a = 0;
    uVar1 = (**(code **)(*DAT_14c967960 + 0x60))(DAT_14c967960,&local_a);
    local_10 = (int)uVar1;
    if (-1 < local_10) {
      local_11 = local_a == -1;
      uVar1 = (ulonglong)CONCAT31((int3)(char)((ushort)local_a >> 8),local_11);
    }
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return CONCAT71((int7)(uVar1 >> 8),local_11) & 0xffffffffffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402159ac FUN_1402159ac body=423 status=ok
// SIG undefined FUN_1402159ac(void)

undefined * FUN_1402159ac(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  wchar_t *local_70;
  undefined8 local_68;
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
  if (DAT_14c846b14 == '\x01') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c926f30) {
      FUN_144b3d300(&DAT_14c926f30);
      if (DAT_14c926f30 == -1) {
        FUN_1413288e0(&DAT_14c926ca8);
        atexit(FUN_1427ac032);
        _Init_thread_footer(&DAT_14c926f30);
      }
    }
    if (*(code **)(DAT_14c926ca8 + 0x28) != (code *)&LAB_144aff468) {
      (**(code **)(DAT_14c926ca8 + 0x28))(&DAT_14c926ca8);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cae1480) {
    FUN_144b3d300(&DAT_14cae1480);
    if (DAT_14cae1480 == -1) {
      FUN_1456e7254(local_20);
      local_30 = 0;
      local_38 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = 0;
      local_70 = L"GPUSkinAPEXClothVF";
      local_78 = L"FGPUSkinAPEXClothVertexFactoryUniformShaderParameters";
      local_50 = 0x110;
      local_58 = 0x232;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cae1400,1,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1435181e6);
      _Init_thread_footer(&DAT_14cae1480);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14cae1400;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140215b54 FUN_140215b54 body=115 status=ok
// SIG undefined FUN_140215b54(void)

undefined8 * FUN_140215b54(undefined8 *param_1,int param_2)

{
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
  if (param_2 != 0) {
    FUN_140215bc8(param_1,0xd8);
  }
  return param_1;
}



// FUNCTION 140215bc8 FUN_140215bc8 body=239 status=ok
// SIG undefined FUN_140215bc8(void)

void FUN_140215bc8(longlong *param_1,ulonglong param_2)

{
  uint uVar1;
  longlong *lpTlsValue;
  longlong lVar2;
  longlong lVar3;
  
  if (param_2 < 0x101) {
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
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000140215c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,param_1);
  return;
}



// FUNCTION 140215cb8 FUN_140215cb8 body=119 status=ok
// SIG undefined FUN_140215cb8(void)

undefined8 * FUN_140215cb8(undefined8 *param_1,longlong param_2)

{
  FUN_1448fcc30((char)param_1,*(undefined8 *)(param_2 + 0x68));
  *param_1 = &PTR_FUN_14a8a34c0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = param_2;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  *(byte *)((longlong)param_1 + 0xe9) = *(byte *)((longlong)param_1 + 0xe9) & 0xf8;
  *(undefined1 *)((longlong)param_1 + 0xea) = 0;
  *(byte *)((longlong)param_1 + 0x2a) =
       *(byte *)((longlong)param_1 + 0x2a) & 0xfd | *(char *)(param_2 + 0x158) * '\x02';
  return param_1;
}



// FUNCTION 140215d30 FUN_140215d30 body=140 status=ok
// SIG undefined FUN_140215d30(void)

void FUN_140215d30(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c846568 == '\x01') {
    DAT_14c846568 = '\0';
  }
  plVar1 = *(longlong **)(param_1 + 0xca8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x2a8))(plVar1);
    iVar2 = (**(code **)(*plVar1 + 0x2b8))(plVar1);
    if (iVar2 == 2) {
      FUN_140215dbe(plVar1,&local_28);
      DAT_14c846558 = local_28;
      uRam000000014c84655c = uStack_24;
      DAT_14c846560._0_4_ = uStack_20;
      DAT_14c846560._4_4_ = uStack_1c;
      DAT_14c846568 = '\x01';
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140215dbe FUN_140215dbe body=158 status=ok
// SIG undefined FUN_140215dbe(void)

int * FUN_140215dbe(longlong *param_1,int *param_2)

{
  float fVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  
  (**(code **)(*param_1 + 0x2b0))();
  auVar4._8_8_ = 0;
  auVar4._0_8_ = (double)*(float *)(param_1 + 5);
  auVar4 = roundpd(auVar4,auVar4,1);
  dVar3 = auVar4._0_8_;
  dVar2 = (double)*(float *)(param_1 + 5) - dVar3;
  if (2147483647.0 <= dVar3) {
    dVar3 = 2147483647.0;
  }
  if (dVar3 <= -2147483648.0) {
    dVar3 = -2147483648.0;
  }
  fVar1 = (float)dVar2;
  if (0.99999994 <= fVar1) {
    fVar1 = 0.99999994;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  fVar1 = fVar1 + 0.5 + -0.5;
  if (0.99999994 <= fVar1) {
    fVar1 = 0.99999994;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  fVar1 = (float)param_2[1] - fVar1;
  auVar4 = roundps(ZEXT416((uint)fVar1),ZEXT416((uint)fVar1),1);
  *param_2 = ((int)auVar4._0_4_ + *param_2) - (int)dVar3;
  param_2[1] = (int)(fVar1 - auVar4._0_4_);
  return param_2;
}



// FUNCTION 140215e5c FUN_140215e5c body=603 status=ok
// SIG undefined FUN_140215e5c(void)

undefined8 * FUN_140215e5c(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  int iVar2;
  longlong *plVar3;
  float fVar4;
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  float fVar9;
  undefined1 auStack_98 [40];
  LARGE_INTEGER local_70 [3];
  longlong local_58;
  longlong local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  dVar5 = DAT_14cad8970;
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  if (*(char *)(param_1 + 0x38) == '\x01') {
    local_48 = uVar1;
    if (*(char *)(param_1 + 0x39) == '\0') {
      FUN_1402160b8(&local_50);
      local_58 = local_50 % 864000000000;
      plVar3 = &local_58;
    }
    else {
      QueryPerformanceCounter(local_70);
      dVar5 = fmod((double)local_70[0].QuadPart * DAT_14c83f420 + 16777216.0 + dVar5,86400.0);
      auVar7._0_8_ = dVar5 * 10000000.0 + 0.5;
      auVar7._8_8_ = 0;
      auVar7 = roundpd(auVar7,auVar7,1);
      local_50 = (longlong)auVar7._0_8_;
      plVar3 = &local_50;
    }
    FUN_147a94fa6(local_70,plVar3,&local_48);
    FUN_147516d62(local_70,param_2,(undefined8 *)(param_1 + 0x30));
    *(undefined4 *)((longlong)param_2 + 4) = 0;
  }
  else {
    if (*(char *)(param_1 + 0x39) == '\0') {
      FUN_1402160b8(local_70);
      dVar8 = ((double)(int)uVar1 * ((double)(local_70[0].QuadPart % 864000000000) / 10000000.0)) /
              (double)(int)((ulonglong)uVar1 >> 0x20);
      auVar6._8_8_ = 0;
      auVar6._0_8_ = dVar8;
      auVar7 = roundpd(auVar6,auVar6,1);
      dVar5 = auVar7._0_8_;
      dVar8 = dVar8 - dVar5;
      if (2147483647.0 <= dVar5) {
        dVar5 = 2147483647.0;
      }
      if (dVar5 <= -2147483648.0) {
        dVar5 = -2147483648.0;
      }
      iVar2 = (int)dVar8;
      fVar4 = (float)dVar8 - (float)iVar2;
      fVar9 = fVar4;
      if (0.99999994 <= fVar4) {
        fVar9 = 0.99999994;
      }
      fVar9 = (float)(~-(uint)(0.0 < fVar4) & (uint)fVar4 | (uint)fVar9 & -(uint)(0.0 < fVar4)) +
              0.5 + -0.5;
      if (0.99999994 <= fVar9) {
        fVar9 = 0.99999994;
      }
      if (fVar9 <= 0.0) {
        fVar9 = 0.0;
      }
      local_48 = CONCAT44(fVar9,(int)dVar5 + iVar2);
    }
    else {
      FUN_147a95030(&local_48,uVar1);
    }
    *param_2 = local_48;
  }
  param_2[1] = *(undefined8 *)(param_1 + 0x30);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402160b8 FUN_1402160b8 body=127 status=ok
// SIG undefined FUN_1402160b8(void)

undefined8 FUN_1402160b8(undefined8 param_1)

{
  undefined1 auStack_68 [32];
  uint local_48;
  uint local_40;
  uint local_38;
  uint local_30;
  _SYSTEMTIME local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  GetLocalTime(&local_28);
  local_30 = (uint)local_28.wMilliseconds;
  local_38 = (uint)local_28.wSecond;
  local_40 = (uint)local_28.wMinute;
  local_48 = (uint)local_28.wHour;
  FUN_14021300e(param_1,local_28.wYear,local_28.wMonth,local_28.wDay);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140216138 FUN_140216138 body=40 status=ok
// SIG undefined FUN_140216138(void)

undefined8 FUN_140216138(undefined8 param_1,int param_2)

{
  FUN_140216160();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140216160 FUN_140216160 body=130 status=ok
// SIG undefined FUN_140216160(void)

void FUN_140216160(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14aad1940;
  param_1[0x19] = &PTR_FUN_14aad1ce0;
  param_1[0x1a] = &PTR_FUN_14aad1d20;
  puVar2 = (undefined8 *)param_1[0x25];
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  puVar2 = (undefined8 *)param_1[0x26];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  FUN_1402161e2(param_1);
  return;
}



// FUNCTION 1402161e2 FUN_1402161e2 body=296 status=ok
// SIG undefined FUN_1402161e2(void)

void FUN_1402161e2(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14aabecf0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (*(int *)((longlong)param_1 + 0x74) != 0) {
    FUN_14472eb64(param_1 + 0xd,0);
  }
  param_1[0x13] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x12) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x94)) {
    *(undefined4 *)((longlong)param_1 + 0x94) = 0x80;
    FUN_1446efbd8(param_1 + 0xf,0);
  }
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  puVar2 = (undefined8 *)param_1[7];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)puVar2 + 100);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (((*piVar1 == 0) && (*(int *)(puVar2 + 0xc) == 0)) && (*(int *)(puVar2 + 0xb) == 0)) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  FUN_1402c01cc(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 140216320 FUN_140216320 body=571 status=ok
// SIG undefined FUN_140216320(void)

undefined8
FUN_140216320(longlong param_1,void *param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined4 *param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_c8 [32];
  double *local_a8;
  undefined4 local_a0;
  undefined4 *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_78;
  float local_74;
  float local_70;
  undefined4 local_6c;
  double local_68;
  double dStack_60;
  double local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((*(byte *)(param_1 + 0x5b6) & 4) == 0) {
    lVar3 = *(longlong *)(param_1 + 0xb0);
    if (lVar3 == 0) {
      lVar3 = FUN_1448abda6(param_1);
    }
    local_68 = *(double *)(param_1 + 0x250);
    dStack_60 = *(double *)(param_1 + 600);
    local_58 = *(double *)(param_1 + 0x260);
    uStack_50 = *(undefined8 *)(param_1 + 0x268);
    local_98 = param_6;
  }
  else {
    local_6c = param_6[2];
    local_74 = (float)param_6[1] * 0.707;
    local_78 = 1;
    lVar3 = *(longlong *)(param_1 + 0xb0);
    local_70 = local_74;
    if (lVar3 == 0) {
      lVar3 = FUN_1448abda6(param_1);
    }
    local_68 = *(double *)(param_1 + 0x230) * 0.38268344246110436;
    dStack_60 = *(double *)(param_1 + 0x238) * 0.38268344246110436;
    local_58 = *(double *)(param_1 + 0x240) * 0.38268344246110436;
    local_a8 = &local_68;
    uStack_50 = 0x3fed906bccf3cb87;
    local_88 = param_8;
    local_90 = param_7;
    local_98 = &local_78;
    local_a0 = param_5;
    cVar1 = FUN_14021655c(lVar3,param_2,param_3,param_4);
    uVar2 = 1;
    if (cVar1 != '\0') goto LAB_1402163d3;
    memset(param_2,0,0x100);
    *(undefined4 *)((longlong)param_2 + 0xd0) = 0xffffffff;
    *(undefined4 *)((longlong)param_2 + 0xa4) = 0xffffffff;
    *(undefined4 *)((longlong)param_2 + 4) = 0x3f800000;
    lVar3 = *(longlong *)(param_1 + 0xb0);
    if (lVar3 == 0) {
      lVar3 = FUN_1448abda6(param_1);
    }
    local_68 = *(double *)(param_1 + 0x250);
    dStack_60 = *(double *)(param_1 + 600);
    local_58 = *(double *)(param_1 + 0x260);
    uStack_50 = *(undefined8 *)(param_1 + 0x268);
    local_98 = &local_78;
  }
  local_a8 = &local_68;
  local_88 = param_8;
  local_90 = param_7;
  local_a0 = param_5;
  uVar2 = FUN_14021655c(lVar3,param_2,param_3,param_4);
LAB_1402163d3:
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14021655c FUN_14021655c body=697 status=ok
// SIG undefined FUN_14021655c(void)

undefined8
FUN_14021655c(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined8 *param_4,
             undefined8 param_5,undefined4 param_6,int *param_7,undefined4 *param_8,
             undefined4 *param_9)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_138 [32];
  undefined8 *local_118;
  undefined8 *local_110;
  undefined4 *local_108;
  undefined4 *local_100;
  undefined4 *local_f8;
  undefined4 *local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined1 local_a9;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 local_69 [5];
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar2 = 4;
  if (*param_7 - 2U < 2) {
LAB_1402165b6:
    if (*(float *)((longlong)param_7 + lVar2) <= 0.0001) {
LAB_14021665d:
      local_78 = param_4[2];
      local_88 = *param_4;
      uStack_80 = param_4[1];
      local_98 = *(undefined8 *)(param_3 + 4);
      local_a8 = *param_3;
      uStack_a4 = param_3[1];
      uStack_a0 = param_3[2];
      uStack_9c = param_3[3];
      if ((param_1 == 0) || (*(longlong *)(param_1 + 0x260) == 0)) {
        uVar3 = 0;
      }
      else {
        if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x260) + 0x38) + 0x1e9) == '\x01') {
          cVar1 = FUN_144a61b4f();
          if ((cVar1 != '\0') ||
             (*(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60)
              == 0x40000002)) {
            local_118 = &local_48;
            local_38 = local_78;
            local_48 = local_88;
            uStack_40 = uStack_80;
            local_69._1_4_ = local_a8;
            uStack_64 = uStack_a4;
            uStack_60 = uStack_a0;
            uStack_5c = uStack_9c;
            local_58 = local_98;
            local_f0 = (undefined4 *)local_69;
            local_f8 = &DAT_14cad0f08;
            local_100 = param_9;
            local_108 = param_8;
            local_110 = (undefined8 *)CONCAT44(local_110._4_4_,param_6);
            uVar3 = FUN_143444273(param_1,param_2,&local_a9);
            goto LAB_14021662b;
          }
        }
        local_118 = &local_48;
        local_38 = local_78;
        local_48 = local_88;
        uStack_40 = uStack_80;
        local_69._1_4_ = local_a8;
        uStack_64 = uStack_a4;
        uStack_60 = uStack_a0;
        uStack_5c = uStack_9c;
        local_58 = local_98;
        local_f0 = (undefined4 *)local_69;
        local_f8 = &DAT_14cad0f08;
        local_100 = param_9;
        local_108 = param_8;
        local_110 = (undefined8 *)CONCAT44(local_110._4_4_,param_6);
        uVar3 = FUN_14006c4c7(param_1,param_2,&local_a9);
      }
      goto LAB_14021662b;
    }
  }
  else {
    if (*param_7 != 1) goto LAB_14021665d;
    if (((float)param_7[1] <= 0.0001) && ((float)param_7[2] <= 0.0001)) {
      lVar2 = 0xc;
      goto LAB_1402165b6;
    }
  }
  local_b8 = param_4[2];
  local_110 = &local_c8;
  local_c8 = *param_4;
  uStack_c0 = param_4[1];
  local_e8 = *param_3;
  uStack_e4 = param_3[1];
  uStack_e0 = param_3[2];
  uStack_dc = param_3[3];
  local_118 = (undefined8 *)&local_e8;
  local_d8 = *(undefined8 *)(param_3 + 4);
  local_f0 = &DAT_14cad0f08;
  local_f8 = param_9;
  local_100 = param_8;
  local_108 = (undefined4 *)CONCAT44(local_108._4_4_,param_6);
  uVar3 = FUN_140216816(param_1,param_7,param_5,param_2);
LAB_14021662b:
  if ((local_30 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140216816 FUN_140216816 body=343 status=ok
// SIG undefined FUN_140216816(void)

undefined4
FUN_140216816(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 *param_5,undefined8 *param_6,undefined4 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined1 auStack_138 [32];
  undefined8 *local_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined1 *local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined1 local_a9;
  undefined8 *local_a8 [6];
  undefined8 local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_c8 = *param_6;
  uStack_c0 = param_6[1];
  local_b8 = param_6[2];
  local_e8 = *param_5;
  uStack_e4 = param_5[1];
  uStack_e0 = param_5[2];
  uStack_dc = param_5[3];
  local_d8 = *(undefined8 *)(param_5 + 4);
  FUN_144a73fdc(local_a8,param_3,param_2);
  local_f0 = &local_a9;
  local_f8 = param_10;
  local_108 = param_8;
  uStack_100 = param_9;
  local_110 = param_7;
  local_118 = &local_c8;
  local_78 = param_2;
  uVar3 = FUN_140247bba(param_1,param_4,local_a8,&local_e8);
  if (local_a8[0] != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_a8[0] + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(int *)((longlong)local_a8[0] + 0xc) == 0)) {
      pcVar2 = *(code **)*local_a8[0];
      if ((pcVar2 == FUN_141724e50) || (pcVar2 == FUN_141724e26)) {
        *local_a8[0] = &PTR_FUN_149f553e0;
        FUN_1400020a8();
      }
      else {
        (*pcVar2)(local_a8[0],1);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14021696e FUN_14021696e body=753 status=ok
// SIG undefined FUN_14021696e(void)

undefined8 *
FUN_14021696e(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_68 [32];
  longlong *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar7 = (longlong *)FUN_14001cc68(0xb0);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_149f6f610;
  plVar1 = plVar7 + 2;
  memset(plVar1,0,0xa0);
  *(undefined4 *)((longlong)plVar7 + 0x14) = 0xffffffff;
  *(undefined4 *)(plVar7 + 6) = 0xffffffff;
  plVar7[8] = 0;
  plVar7[9] = 0;
  plVar7[10] = 0;
  plVar7[0xb] = 0;
  *(undefined4 *)(plVar7 + 0xc) = 0xffffffff;
  *(undefined4 *)(plVar7 + 0x11) = 0xffffffff;
  *(undefined4 *)(plVar7 + 0x15) = 0xffffffff;
  local_48 = plVar1;
  local_40 = plVar7;
  if (plVar7 == (longlong *)0x0) {
    FUN_140216c60(param_1,0xb,param_4,&local_48);
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    FUN_140216c60(param_1,0xb,param_4,&local_48);
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
  *param_1 = &PTR_LAB_149f6de10;
  param_1[8] = *param_2;
  *param_2 = 0;
  param_1[9] = param_3;
  param_1[10] = 0;
  param_1[0xc] = 0;
  lVar5 = param_1[8];
  *(undefined8 **)(lVar5 + 0x10) = param_1;
  if (((param_1 != (undefined8 *)0x0) && (*(int *)(lVar5 + 0x94) != 0)) &&
     (lVar11 = param_1[1], lVar11 != 0)) {
    if (DAT_14c992a90 == '\x01') {
      AcquireSRWLockExclusive((PSRWLOCK)(lVar11 + 0x128));
      if (*(int *)(param_1 + 3) == -1) {
        lVar12 = *(longlong *)(lVar11 + 0x98);
        uVar4 = *(uint *)((longlong)param_1 + 0x1c);
        piVar2 = (int *)(lVar12 + 0x160 + (ulonglong)uVar4 * 4);
        *piVar2 = *piVar2 + 1;
        *(int *)(lVar12 + 0x194) = *(int *)(lVar12 + 0x194) + 1;
        lVar12 = lVar12 + (ulonglong)uVar4 * 0x10;
        iVar3 = *(int *)(lVar12 + 0x1a0);
        *(int *)(param_1 + 3) = iVar3;
        *(uint *)(lVar12 + 0x1a0) = iVar3 + 1U;
        if (*(uint *)(lVar12 + 0x1a4) < iVar3 + 1U) {
          FUN_140431d5c((longlong *)(lVar12 + 0x198),iVar3);
        }
        lVar12 = *(longlong *)(lVar12 + 0x198);
        lVar10 = (longlong)iVar3 * 0x20;
        *(undefined8 **)(lVar12 + lVar10) = param_1;
        *(undefined4 *)(lVar12 + 8 + lVar10) = 0;
        puVar8 = (undefined8 *)(lVar12 + 0x10 + lVar10);
        *puVar8 = 0;
        puVar8[1] = 0;
      }
      ReleaseSRWLockExclusive((PSRWLOCK)(lVar11 + 0x128));
    }
    else {
      FUN_144aa3818(*(longlong *)(lVar11 + 0x98) + 0x160,param_1);
    }
  }
  lVar11 = lVar5 + 0x78;
  if (*(longlong *)(lVar5 + 0x80) != 0) {
    lVar11 = *(longlong *)(lVar5 + 0x80);
  }
  iVar3 = *(int *)(lVar5 + 0x88);
  if ((longlong)iVar3 != 0) {
    lVar12 = 0;
    do {
      lVar10 = *(longlong *)(lVar11 + lVar12);
      lVar6 = *(longlong *)(lVar5 + 0x10);
      *(longlong *)(lVar10 + 0x48) = lVar6;
      if (((lVar6 != 0) && (*(int *)(lVar10 + 0xc) != 0)) && (*(longlong *)(lVar6 + 8) != 0)) {
        FUN_144821112(*(longlong *)(lVar6 + 8) + 0x70,lVar6,*(uint *)(lVar10 + 8) >> 3);
      }
      lVar12 = lVar12 + 8;
    } while ((longlong)iVar3 * 8 != lVar12);
  }
  puVar8 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar8 = param_1;
  *(undefined4 *)(puVar8 + 1) = 0xffffffff;
  *(undefined8 *)((longlong)puVar8 + 0xc) = 0;
  lVar5 = param_1[10];
  param_1[10] = puVar8;
  if (lVar5 != 0) {
    FUN_1400020a8();
  }
  puVar9 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar9 = &PTR_FUN_149f6d940;
  puVar9[1] = 0xffffffff;
  puVar8 = (undefined8 *)param_1[0xc];
  param_1[0xc] = puVar9;
  if (puVar8 != (undefined8 *)0x0) {
    (**(code **)*puVar8)(puVar8,1);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140216c60 FUN_140216c60 body=131 status=ok
// SIG undefined FUN_140216c60(void)

undefined8 *
FUN_140216c60(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  *param_1 = &PTR_LAB_149f62910;
  param_1[1] = 0;
  param_1[2] = param_3;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1c) = param_2;
  param_1[4] = *param_4;
  lVar3 = param_4[1];
  param_1[5] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  param_1[6] = 0;
  param_1[7] = 0xffffffffffffffff;
  plVar4 = (longlong *)param_4[1];
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
  return param_1;
}



// FUNCTION 140216ce4 FUN_140216ce4 body=71 status=ok
// SIG undefined FUN_140216ce4(void)

void FUN_140216ce4(longlong param_1)

{
  longlong *plVar1;
  
  FUN_140216d2c();
  plVar1 = *(longlong **)(param_1 + 0x1c8);
  if ((plVar1 != (longlong *)0x0) && (*(char *)(param_1 + 0x1e9) == '\x01')) {
                    /* WARNING: Could not recover jumptable at 0x000140216d28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))(plVar1,*(undefined4 *)(param_1 + 0x268),param_1 + 0x140);
    return;
  }
  return;
}



// FUNCTION 140216d2c FUN_140216d2c body=134 status=ok
// SIG undefined FUN_140216d2c(void)

void FUN_140216d2c(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if ((0.0 < *(double *)(param_1 + 0x1f0)) &&
     (iVar3 = *(int *)(param_1 + 0x148), (longlong)iVar3 != 0)) {
    lVar1 = *(longlong *)(param_1 + 0x1f8);
    lVar4 = *(longlong *)(param_1 + 0x140);
    lVar6 = 0;
    do {
      plVar5 = *(longlong **)(lVar4 + lVar6);
      if (*(byte *)(param_1 + 0x1e9) == (*(byte *)((longlong)plVar5 + 0x41) & 1)) {
        lVar2 = *(longlong *)(param_1 + 0x1f0);
        plVar5[6] = lVar1;
        plVar5[7] = lVar2;
        (**(code **)(*plVar5 + 0x68))();
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar3 * 8 != lVar6);
  }
  return;
}



// FUNCTION 140216dc0 FUN_140216dc0 body=69 status=ok
// SIG undefined FUN_140216dc0(void)

void FUN_140216dc0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x28);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x78))(plVar3,param_2);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  return;
}



// FUNCTION 140216e06 FUN_140216e06 body=1 status=ok
// SIG undefined FUN_140216e06(void)

void FUN_140216e06(void)

{
  return;
}



// FUNCTION 140216e08 FUN_140216e08 body=108 status=ok
// SIG undefined FUN_140216e08(void)

undefined4 * FUN_140216e08(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140216e76();
  FUN_140216e76();
  FUN_1448e935e(param_1,&local_30,&DAT_14ca50070,0);
  FUN_140216e76();
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



// FUNCTION 140216e76 FUN_140216e76 body=281 status=ok
// SIG undefined FUN_140216e76(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_140216e76(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca50118) {
    FUN_144b3d300(&DAT_14ca50118);
    if (DAT_14ca50118 == -1) {
      FUN_1456e7450();
      FUN_140db5666(&DAT_14ca50070,0,&DAT_14ca50008,L"FShadowProjectionNoTransformVS",
                    L"/Engine/Private/ShadowProjectionVertexShader.usf",
                    L"ShadowProjectionNoTransformVS",0,1,FUN_1472ee614,FUN_1472ee5ec,&LAB_1472ee5e8,
                    &LAB_1472ee5e4,&LAB_14712ac0c,&LAB_14712ac08,0xe0,0);
      _DAT_14ca50070 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143049ac6);
      _Init_thread_footer(&DAT_14ca50118);
    }
  }
  return &DAT_14ca50070;
}



// FUNCTION 140216f90 FUN_140216f90 body=2490 status=ok
// SIG undefined FUN_140216f90(void)

undefined8 * FUN_140216f90(longlong param_1,undefined1 *param_2,longlong param_3)

{
  uint *puVar1;
  void *_Buf1;
  uint *puVar2;
  char cVar3;
  undefined2 uVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  DWORD DVar22;
  DWORD DVar23;
  undefined8 *puVar24;
  longlong lVar25;
  ulonglong uVar26;
  longlong *plVar27;
  longlong *plVar28;
  longlong *plVar29;
  longlong *plVar30;
  byte bVar31;
  undefined4 uVar32;
  int iVar33;
  longlong lVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  int iVar37;
  uint uVar38;
  ulonglong uVar39;
  undefined8 *puVar40;
  bool bVar41;
  float fVar42;
  undefined1 auVar43 [16];
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  int iStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  float fStack_60;
  undefined4 uStack_5c;
  uint local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uStack_68 = 0;
  uStack_64 = 0;
  fStack_60 = 0.0;
  iStack_70 = 0;
  uStack_6c = 0;
  uVar15 = 1;
  uVar19 = 1;
  if ((byte)(param_2[1] - 1) < 3) {
    uVar19 = *(uint *)(&DAT_14a3506a8 + (ulonglong)(byte)(param_2[1] - 1) * 4);
  }
  local_88 = (ulonglong)uVar19 << 0x20;
  if ((byte)(param_2[2] - 1) < 3) {
    uVar15 = *(undefined4 *)(&DAT_14a3506a8 + (ulonglong)(byte)(param_2[2] - 1) * 4);
  }
  uVar32 = 1;
  if ((byte)(param_2[3] - 1) < 3) {
    uVar32 = *(undefined4 *)(&DAT_14a3506a8 + (ulonglong)(byte)(param_2[3] - 1) * 4);
  }
  uStack_80 = CONCAT44(uVar32,uVar15);
  fVar42 = *(float *)(param_2 + 4);
  if (0.0 < DAT_14ca771fc) {
    auVar43 = roundps(ZEXT416((uint)(fVar42 / DAT_14ca771fc)),
                      ZEXT416((uint)(fVar42 / DAT_14ca771fc)),1);
    fVar42 = auVar43._0_4_ * DAT_14ca771fc;
  }
  local_78 = (ulonglong)(uint)fVar42;
  iVar16 = *(int *)(param_2 + 0x10);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca766d0) && (FUN_144b3d300(&DAT_14ca766d0), DAT_14ca766d0 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar29 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.MaxAnisotropy",1);
    if (plVar29 == (longlong *)0x0) {
      DAT_14ca766c8 = 0;
    }
    else {
      DAT_14ca766c8 = (**(code **)(*plVar29 + 0x68))(plVar29);
    }
    _Init_thread_footer(&DAT_14ca766d0);
  }
  lVar25 = DAT_14ca766c8;
  iVar18 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0xc60);
  if (iVar18 == 0x40000002) {
    uVar26 = 0;
  }
  else {
    bVar41 = true;
    if ((DAT_14c86a9f8 == '\x01') && (iVar18 != 2)) {
      if (iVar18 == 1) {
        DVar22 = FUN_140ad26c0();
        DVar23 = GetCurrentThreadId();
        bVar41 = DVar22 == DVar23;
      }
      else {
        bVar41 = false;
      }
    }
    uVar26 = (ulonglong)(bVar41 ^ 1);
  }
  if (iVar16 < 1) {
    iVar16 = *(int *)(lVar25 + uVar26 * 4);
  }
  iVar18 = 0x10;
  if (iVar16 < 0x10) {
    iVar18 = iVar16;
  }
  iVar17 = 1;
  if (1 < iVar18) {
    iVar17 = iVar18;
  }
  local_78 = CONCAT44(iVar17,(undefined4)local_78);
  uStack_5c = *(undefined4 *)(param_2 + 8);
  local_58 = *(uint *)(param_2 + 0xc);
  cVar3 = param_2[0x18];
  switch(*param_2) {
  case 0:
    uVar19 = (uint)(cVar3 != '\0') << 7;
    break;
  case 1:
    uVar19 = (uint)(cVar3 != '\0') << 7 | 0x14;
    break;
  case 2:
switchD_140217129_caseD_2:
    uVar19 = (uint)(cVar3 != '\0') << 7 | 0x15;
    break;
  case 3:
  case 4:
    if (iVar16 < 2) goto switchD_140217129_caseD_2;
    uVar19 = (uint)(cVar3 != '\0') << 7 | 0x55;
    break;
  default:
    uVar19 = 0;
    goto LAB_14021716b;
  }
  local_88 = CONCAT44(local_88._4_4_,uVar19);
LAB_14021716b:
  uVar38 = *(uint *)(param_2 + 0x14);
  uStack_6c = *(undefined4 *)((longlong)&DAT_14c758c60 + (ulonglong)(uVar38 >> 0xe & 0x3fc));
  uStack_68 = (&DAT_14c758c60)[uVar38 >> 8 & 0xff];
  uStack_64 = (&DAT_14c758c60)[uVar38 & 0xff];
  fStack_60 = (float)(uVar38 >> 0x18) * 0.003921569;
  iStack_70 = (cVar3 == '\x01') + 1;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14ca77210);
  plVar29 = (longlong *)(param_1 + 0x1300);
  if (*(int *)(param_1 + 0x1308) != *(int *)(param_1 + 0x1334)) {
    lVar25 = param_1 + 0x1338;
    if (*(longlong *)(param_1 + 0x1340) != 0) {
      lVar25 = *(longlong *)(param_1 + 0x1340);
    }
    iVar16 = *(int *)(lVar25 + (ulonglong)(*(int *)(param_1 + 0x1348) - 1U & uVar19) * 4);
    if (iVar16 != -1) {
      lVar25 = *plVar29;
      do {
        _Buf1 = (void *)(lVar25 + (longlong)iVar16 * 0x48);
        iVar16 = memcmp(_Buf1,&local_88,0x34);
        if (iVar16 == 0) {
          if ((undefined8 *)((longlong)_Buf1 + 0x38) != (undefined8 *)0x0 && _Buf1 != (void *)0x0) {
            puVar24 = *(undefined8 **)((longlong)_Buf1 + 0x38);
            goto LAB_1402175ed;
          }
          break;
        }
        iVar16 = *(int *)((longlong)_Buf1 + 0x40);
      } while (iVar16 != -1);
    }
  }
  puVar24 = (undefined8 *)FUN_14001cc68(0x80,0x10);
  uVar4 = *(undefined2 *)(param_1 + 0x1350);
  *(undefined4 *)(puVar24 + 1) = 0;
  *(undefined1 *)((longlong)puVar24 + 0xc) = 1;
  *(byte *)((longlong)puVar24 + 0xd) = *(byte *)((longlong)puVar24 + 0xd) | 3;
  puVar24[2] = param_1;
  *(undefined4 *)(puVar24 + 3) = 1;
  puVar24[10] = 0;
  puVar24[0xb] = 0;
  puVar24[8] = 0;
  puVar24[9] = 0;
  puVar24[6] = 0;
  puVar24[7] = 0;
  puVar24[4] = 0;
  puVar24[5] = 0;
  *puVar24 = &PTR_FUN_14a34e140;
  puVar24[0xc] = 0;
  puVar24[0xd] = 0;
  *(undefined4 *)(puVar24 + 0xe) = 0xffffffff;
  *(undefined1 *)((longlong)puVar24 + 0x74) = 0xff;
  *(undefined2 *)(puVar24 + 0xf) = uVar4;
  lVar25 = param_1 + 0x6d8;
  if (*(longlong *)(param_1 + 0x898) != 0) {
    lVar25 = *(longlong *)(param_1 + 0x898);
  }
  puVar40 = &local_98;
  FUN_144a30b90(lVar25 + 0x70,puVar40);
  puVar24[0xc] = local_98;
  puVar24[0xd] = uStack_90;
  plVar30 = *(longlong **)(*(longlong *)(puVar24[2] + 0x10) + 8);
  (**(code **)(*plVar30 + 0xb0))(plVar30,&local_88,puVar24[0xc]);
  if (*(int *)(*(longlong *)(param_1 + 0x6a8) + 0xc) != 0) {
    if (param_3 == 0) {
      FUN_14736b41c(*(longlong *)(param_1 + 0x6a8),puVar40);
    }
    else {
      puVar40 = (undefined8 *)(param_3 + 0x70);
    }
    uVar5 = *puVar40;
    puVar24[0xe] = uVar5;
    FUN_14736bbb6(param_1 + 0x6b0,uVar5,puVar24);
  }
  if (puVar24 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar24 + 1) = *(int *)(puVar24 + 1) + 1;
    UNLOCK();
  }
  local_a0 = plVar29;
  if (*(int *)(param_1 + 0x1334) == 0) {
    iVar16 = *(int *)(param_1 + 0x1308);
    *(int *)(param_1 + 0x1308) = iVar16 + 1;
    if (*(int *)(param_1 + 0x130c) == iVar16) {
      FUN_14021b4e8(plVar29,iVar16);
    }
    iVar18 = *(int *)(param_1 + 0x1328);
    if (iVar18 == 0) {
      iVar17 = -1;
    }
    else {
      iVar17 = iVar18 + 0x1e;
      if (-1 < iVar18 + -1) {
        iVar17 = iVar18 + -1;
      }
      iVar17 = iVar17 >> 5;
    }
    lVar34 = param_1 + 0x1310;
    iVar33 = iVar18 + 1;
    iVar37 = iVar18 + 0x1f;
    if (-1 < iVar18) {
      iVar37 = iVar18;
    }
    if (iVar37 >> 5 == iVar17) {
      *(int *)(param_1 + 0x1328) = iVar33;
    }
    else {
      if (*(int *)(param_1 + 0x132c) <= iVar18) {
        iVar17 = iVar18;
        if (iVar18 + 0x20U < 0xa0) {
          iVar33 = 0x80;
        }
        else {
          uVar19 = iVar18 + 0x20U >> 5;
          if (*(int *)(param_1 + 0x132c) + 0x1fU < 0xa0) {
            uVar38 = 4;
            if (4 < uVar19) {
              uVar38 = uVar19;
            }
          }
          else {
            uVar38 = uVar19 + (uVar19 * 3 >> 3) + 0x10;
          }
          uVar26 = (ulonglong)(uVar38 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar20 = (uint)(uVar26 + 0xf);
              if (uVar38 < 0x1ffd) {
                uVar26 = (ulonglong)
                         (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar26 + 0xf >> 4]];
              }
              else {
                uVar35 = (ulonglong)(uVar20 & 0xfffffff0);
                if (uVar35 < 0x7ff1) {
                  bVar31 = (&DAT_14c841e00)[uVar20 >> 4];
                  uVar36 = 0x32;
                  if (0x32 < bVar31) {
                    uVar36 = (ulonglong)bVar31;
                  }
                  uVar39 = 0x32 - (ulonglong)bVar31;
                  do {
                    uVar26 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar39 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar39 & 0xffffffff] & 0xf) == 0) goto LAB_140217727;
                    lVar25 = uVar36 + 1 + uVar39;
                    uVar39 = uVar39 - 1;
                  } while (lVar25 != 0x33);
                }
                uVar26 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar26 = (ulonglong)DAT_14c841df8;
                }
                uVar26 = -uVar26 & (uVar35 + uVar26) - 1;
              }
            }
            else {
              uVar26 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar26,0);
              iVar17 = *(int *)(param_1 + 0x1328);
            }
          }
LAB_140217727:
          iVar21 = (int)(uVar26 >> 2);
          iVar33 = -0x20;
          if ((int)uVar19 <= iVar21) {
            iVar33 = iVar21 << 5;
          }
        }
        *(int *)(param_1 + 0x132c) = iVar33;
        FUN_1446efbd8(lVar34,iVar17);
        iVar33 = *(int *)(param_1 + 0x1328) + 1;
      }
      iVar17 = iVar33 + 0x1f;
      if (-1 < iVar33) {
        iVar17 = iVar33;
      }
      *(int *)(param_1 + 0x1328) = iVar33;
      if (iVar33 % 0x20 != 0) {
        lVar25 = *(longlong *)(param_1 + 0x1320);
        if (*(longlong *)(param_1 + 0x1320) == 0) {
          lVar25 = lVar34;
        }
        bVar31 = -(char)(iVar33 % 0x20);
        *(uint *)(lVar25 + (longlong)(iVar17 >> 5) * 4) =
             (uint)(*(int *)(lVar25 + (longlong)(iVar17 >> 5) * 4) << (bVar31 & 0x1f)) >>
             (bVar31 & 0x1f);
      }
    }
    lVar25 = (longlong)iVar16;
    if (*(longlong *)(param_1 + 0x1320) != 0) {
      lVar34 = *(longlong *)(param_1 + 0x1320);
    }
    bVar31 = (byte)iVar18 & 0x1f;
    puVar2 = (uint *)(lVar34 + (longlong)(iVar37 >> 5) * 4);
    *puVar2 = *puVar2 & (-2 << bVar31 | 0xfffffffeU >> 0x20 - bVar31);
  }
  else {
    iVar16 = *(int *)(param_1 + 0x1330);
    lVar25 = (longlong)iVar16;
    iVar18 = *(int *)(*(longlong *)(param_1 + 0x1300) + 4 + lVar25 * 0x48);
    *(int *)(param_1 + 0x1330) = iVar18;
    iVar17 = *(int *)(param_1 + 0x1334) + -1;
    *(int *)(param_1 + 0x1334) = iVar17;
    if (iVar17 != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x1300) + (longlong)iVar18 * 0x48) = 0xffffffff;
    }
  }
  lVar34 = param_1 + 0x1310;
  if (*(longlong *)(param_1 + 0x1320) != 0) {
    lVar34 = *(longlong *)(param_1 + 0x1320);
  }
  iVar18 = iVar16 + 0x1f;
  if (-1 < iVar16) {
    iVar18 = iVar16;
  }
  puVar2 = (uint *)(lVar34 + (longlong)(iVar18 >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)iVar16 & 0x1f);
  puVar2 = (uint *)(*(longlong *)(param_1 + 0x1300) + lVar25 * 0x48);
  *(longlong *)puVar2 = local_88;
  *(undefined8 *)(puVar2 + 2) = uStack_80;
  puVar2[0xc] = local_58;
  *(ulonglong *)(puVar2 + 8) = CONCAT44(uStack_64,uStack_68);
  *(ulonglong *)(puVar2 + 10) = CONCAT44(uStack_5c,fStack_60);
  *(ulonglong *)(puVar2 + 4) = local_78;
  *(ulonglong *)(puVar2 + 6) = CONCAT44(uStack_6c,iStack_70);
  *(undefined8 **)(puVar2 + 0xe) = puVar24;
  puVar2[0x10] = 0xffffffff;
  uVar19 = *puVar2;
  uVar38 = *(int *)(param_1 + 0x1308) - *(int *)(param_1 + 0x1334);
  if ((uVar38 != 0) && (uVar38 != 1)) {
    lVar25 = param_1 + 0x1338;
    if (*(longlong *)(param_1 + 0x1340) != 0) {
      lVar25 = *(longlong *)(param_1 + 0x1340);
    }
    iVar18 = *(int *)(lVar25 + (ulonglong)(*(int *)(param_1 + 0x1348) - 1U & uVar19) * 4);
    if (iVar18 != -1) {
      lVar25 = *local_a0;
      do {
        puVar40 = (undefined8 *)(lVar25 + (longlong)iVar18 * 0x48);
        iVar18 = memcmp(puVar40,puVar2,0x34);
        plVar29 = local_a0;
        if (iVar18 == 0) {
          lVar25 = puVar40[7];
          if (lVar25 != 0) {
            LOCK();
            puVar1 = (uint *)(lVar25 + 8);
            uVar19 = *puVar1;
            *puVar1 = *puVar1 - 1;
            UNLOCK();
            if ((uVar19 & 0x3fffffff) == 1) {
              puVar1 = (uint *)(lVar25 + 8);
              LOCK();
              uVar19 = *puVar1;
              *puVar1 = *puVar1 | 0x40000000;
              UNLOCK();
              if ((uVar19 >> 0x1e & 1) == 0) {
                bVar31 = *(byte *)(lVar25 + 0xd);
                plVar27 = (longlong *)FUN_14001cc68(0x10,8);
                plVar27[1] = lVar25;
                plVar30 = DAT_14ca843c0;
                plVar28 = DAT_14ca843c8;
                if ((bVar31 & 2) == 0) {
                  do {
                    *plVar27 = (longlong)plVar30;
                    LOCK();
                    bVar41 = plVar30 != DAT_14ca843c0;
                    plVar28 = plVar27;
                    if (bVar41) {
                      plVar30 = DAT_14ca843c0;
                      plVar28 = DAT_14ca843c0;
                    }
                    DAT_14ca843c0 = plVar28;
                    UNLOCK();
                  } while (bVar41);
                }
                else {
                  do {
                    *plVar27 = (longlong)plVar28;
                    LOCK();
                    bVar41 = plVar28 != DAT_14ca843c8;
                    plVar30 = plVar27;
                    if (bVar41) {
                      plVar28 = DAT_14ca843c8;
                      plVar30 = DAT_14ca843c8;
                    }
                    DAT_14ca843c8 = plVar30;
                    UNLOCK();
                  } while (bVar41);
                }
              }
            }
          }
          uVar5 = *(undefined8 *)puVar2;
          uVar14 = *(undefined8 *)(puVar2 + 2);
          uVar19 = puVar2[4];
          uVar38 = puVar2[5];
          uVar20 = puVar2[6];
          uVar6 = puVar2[7];
          uVar7 = puVar2[8];
          uVar8 = puVar2[9];
          uVar9 = puVar2[10];
          uVar10 = puVar2[0xb];
          uVar11 = puVar2[0xd];
          uVar12 = puVar2[0xe];
          uVar13 = puVar2[0xf];
          *(uint *)(puVar40 + 6) = puVar2[0xc];
          *(uint *)((longlong)puVar40 + 0x34) = uVar11;
          *(uint *)(puVar40 + 7) = uVar12;
          *(uint *)((longlong)puVar40 + 0x3c) = uVar13;
          *(uint *)(puVar40 + 4) = uVar7;
          *(uint *)((longlong)puVar40 + 0x24) = uVar8;
          *(uint *)(puVar40 + 5) = uVar9;
          *(uint *)((longlong)puVar40 + 0x2c) = uVar10;
          *(uint *)(puVar40 + 2) = uVar19;
          *(uint *)((longlong)puVar40 + 0x14) = uVar38;
          *(uint *)(puVar40 + 3) = uVar20;
          *(uint *)((longlong)puVar40 + 0x1c) = uVar6;
          *puVar40 = uVar5;
          puVar40[1] = uVar14;
          FUN_147384faa(plVar29,iVar16);
          goto LAB_1402175e7;
        }
        iVar18 = *(int *)(puVar40 + 8);
      } while (iVar18 != -1);
    }
  }
  iVar18 = 1;
  if (3 < uVar38) {
    uVar26 = (ulonglong)(uVar38 & 0xfffffffe) + 0xf;
    lVar25 = 0x3f;
    if (uVar26 != 0) {
      for (; uVar26 >> lVar25 == 0; lVar25 = lVar25 + -1) {
      }
    }
    iVar18 = 1 << ((byte)lVar25 & 0x1f);
  }
  if (((int)uVar38 < 1) || (iVar18 <= *(int *)(param_1 + 0x1348))) {
    uVar19 = *(int *)(param_1 + 0x1348) - 1U & uVar19;
    puVar2[0x11] = uVar19;
    lVar25 = *(longlong *)(param_1 + 0x1340);
    if (*(longlong *)(param_1 + 0x1340) == 0) {
      lVar25 = param_1 + 0x1338;
    }
    puVar2[0x10] = *(uint *)(lVar25 + ((longlong)*(int *)(param_1 + 0x1348) - 1U &
                                      (longlong)(int)uVar19) * 4);
    lVar25 = *(longlong *)(param_1 + 0x1340);
    if (*(longlong *)(param_1 + 0x1340) == 0) {
      lVar25 = param_1 + 0x1338;
    }
    *(int *)(lVar25 + ((longlong)*(int *)(param_1 + 0x1348) - 1U & (longlong)(int)uVar19) * 4) =
         iVar16;
  }
  else {
    *(int *)(param_1 + 0x1348) = iVar18;
    FUN_1402cd75e(local_a0);
  }
LAB_1402175e7:
  *(int *)(param_1 + 0x1350) = *(int *)(param_1 + 0x1350) + 1;
LAB_1402175ed:
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14ca77210);
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar24;
}



// FUNCTION 14021794c FUN_14021794c body=104 status=ok
// SIG undefined FUN_14021794c(void)

undefined8 FUN_14021794c(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  plVar1 = param_1 + 0x95;
  lVar3 = FUN_1402179b4(plVar1);
  if (((lVar3 != 0) && (lVar3 = FUN_1402179b4(plVar1), lVar3 != 0)) &&
     (lVar3 = FUN_1402179b4(plVar1), (*(byte *)(lVar3 + 0x18) & 8) != 0)) {
    cVar2 = (**(code **)(*param_1 + 0x90))(param_1);
    if (cVar2 == '\0') {
      return 1;
    }
                    /* WARNING: Could not recover jumptable at 0x0001402179ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(*param_1 + 0x98))(param_1);
    return uVar4;
  }
  return 0;
}



// FUNCTION 1402179b4 FUN_1402179b4 body=138 status=ok
// SIG undefined FUN_1402179b4(void)

longlong FUN_1402179b4(undefined8 *param_1)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = param_1[2];
  if (lVar1 == 0) {
    local_48 = *param_1;
    FUN_1446dcdd4(local_40);
    if (DAT_14cb77d08 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = FUN_144837462(DAT_14cb77d08,local_40);
    }
    if (local_28 != 0) {
      FUN_1400020a8();
    }
    param_1[2] = lVar1;
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140217a48 FUN_140217a48 body=114 status=ok
// SIG undefined FUN_140217a48(void)

void FUN_140217a48(undefined8 *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x328);
  if ((uVar1 & 1) == 0) {
    *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x328
             ) = uVar1 | 1;
    __tlregdtor(&LAB_142733cca);
  }
  *(undefined8 *)
   (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 800) = *param_1
  ;
  return;
}



// FUNCTION 140217aba FUN_140217aba body=123 status=ok
// SIG undefined FUN_140217aba(void)

void FUN_140217aba(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x38);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0x38) = param_2;
    if ((uint)(*(int *)(param_1 + 0x3c) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146beb88a(param_1);
    }
    lVar2 = *(longlong *)(param_1 + 0x30);
    if (*(longlong *)(param_1 + 0x30) == 0) {
      lVar2 = param_1;
    }
    memset((void *)(lVar2 + (longlong)iVar1 * 4),0,(longlong)(param_2 - iVar1) << 2);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 0x38) = param_2;
    FUN_146beb986(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 140217b36 FUN_140217b36 body=140 status=ok
// SIG undefined FUN_140217b36(void)

void FUN_140217b36(char *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (*param_1 == '\x03') {
    plVar3 = *(longlong **)(param_1 + 0x10);
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
  else if (*param_1 == '\x01') {
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = '\0';
  }
  *param_1 = '\x03';
  *(undefined8 *)(param_1 + 8) = *param_2;
  lVar2 = param_2[1];
  *(longlong *)(param_1 + 0x10) = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  param_1[0x20] = '\0';
  param_1[0x18] = '\0';
  param_1[0x19] = '\0';
  param_1[0x1a] = '\0';
  param_1[0x1b] = '\0';
  param_1[0x1c] = '\0';
  param_1[0x1d] = '\0';
  param_1[0x1e] = '\0';
  param_1[0x1f] = '\0';
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_1417398fc(&DAT_14c9a3da0,*(int *)(param_1 + 0x28) + -1,1);
    param_1[0x28] = '\0';
    param_1[0x29] = '\0';
    param_1[0x2a] = '\0';
    param_1[0x2b] = '\0';
  }
  return;
}



// FUNCTION 140217bc2 FUN_140217bc2 body=104 status=ok
// SIG undefined FUN_140217bc2(void)

void FUN_140217bc2(int *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((longlong)*param_1 == 0) {
    return;
  }
  param_1[1] = param_1[2];
  lVar2 = (longlong)*param_1 * 0x88;
  lVar1 = DAT_14c9a3d60 + lVar2;
  if (*(int *)(DAT_14c9a3d60 + -0x1c + lVar2) < 0) {
    *(undefined4 *)(lVar1 + -0x20) = 0;
    FUN_1470b654e(lVar1 + -0x88,0);
  }
  else {
    *(undefined4 *)(lVar1 + -0x20) = 0;
  }
  FUN_1409d1656(param_1);
  return;
}



// FUNCTION 140217c2a FUN_140217c2a body=1120 status=ok
// SIG undefined FUN_140217c2a(void)

void FUN_140217c2a(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 uVar3;
  code *pcVar4;
  longlong lVar5;
  byte bVar6;
  int iVar7;
  longlong lVar8;
  undefined *puVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined8 ****ppppuVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 *puVar15;
  longlong lVar16;
  longlong *plVar17;
  bool bVar18;
  undefined4 uVar19;
  undefined1 auStack_138 [32];
  undefined1 *local_118;
  longlong local_110;
  undefined8 local_108;
  longlong *local_100;
  undefined1 local_f1;
  longlong local_f0;
  longlong *local_e8;
  char local_e0 [16];
  longlong *local_d0;
  longlong local_c8;
  int local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  ushort local_98;
  byte local_90;
  undefined8 ***local_88 [3];
  ushort local_70;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_e8 = (longlong *)param_1[0x3e];
  if (local_e8 == (longlong *)0x0) {
    local_e8 = (longlong *)0x0;
    local_f0 = 0;
  }
  else {
    iVar7 = (int)local_e8[1];
    local_f0 = 0;
    do {
      if (iVar7 == 0) {
        local_e8 = (longlong *)0x0;
        goto LAB_140217c93;
      }
      LOCK();
      iVar10 = (int)local_e8[1];
      bVar18 = iVar7 == iVar10;
      if (bVar18) {
        *(int *)(local_e8 + 1) = iVar7 + 1;
        iVar10 = iVar7;
      }
      iVar7 = iVar10;
      UNLOCK();
    } while (!bVar18);
    local_f0 = param_1[0x3d];
  }
LAB_140217c93:
  local_108 = param_2;
  if ((longlong)(int)param_1[4] != 0) {
    puVar15 = (undefined8 *)param_1[3];
    lVar16 = (longlong)(int)param_1[4] << 4;
    do {
      (**(code **)(*(longlong *)*puVar15 + 0x28))((longlong *)*puVar15,&local_f0,puVar15);
      puVar15 = puVar15 + 2;
      lVar16 = lVar16 + -0x10;
    } while (lVar16 != 0);
  }
  if ((longlong)(int)param_1[6] != 0) {
    plVar17 = (longlong *)param_1[5];
    local_100 = plVar17 + (longlong)(int)param_1[6] * 2;
    do {
      local_f1 = 0;
      lVar16 = (longlong)*(int *)(*plVar17 + 0xb8);
      if (lVar16 != 0) {
        lVar16 = lVar16 * 0x70;
        lVar14 = *(longlong *)(*plVar17 + 0xb0) + 0x20;
        do {
          local_e0[0] = '\0';
          local_b8 = 0;
          FUN_140217b36(local_e0,param_1 + 0x3d);
          FUN_1448729ea(lVar14,&local_b0,local_e0);
          if (local_90 == 3) {
            uVar19 = local_b0;
            bVar6 = 3;
          }
          else {
            FUN_1400b56fe(local_88,&local_b0,3);
            uVar19 = 0;
            if (local_68 != 0) {
              uVar19 = local_88[0]._0_4_;
            }
            pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
            if (pcVar4 != (code *)0x0) {
              ppppuVar12 = local_88;
              if (0x18 < local_70) {
                ppppuVar12 = (undefined8 ****)local_88[0];
              }
              (*pcVar4)(ppppuVar12);
            }
            bVar6 = local_90;
            if (0x18 < local_70) {
              FUN_1400020a8(local_88[0]);
              bVar6 = local_90;
            }
          }
          pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar6 * 0x120));
          if (pcVar4 != (code *)0x0) {
            puVar11 = &local_b0;
            if (0x18 < local_98) {
              puVar11 = (undefined4 *)CONCAT44(uStack_ac,local_b0);
            }
            (*pcVar4)(puVar11);
          }
          if (0x18 < local_98) {
            FUN_1400020a8(CONCAT44(uStack_ac,local_b0));
          }
          lVar13 = (longlong)local_b8;
          if (lVar13 != 0) {
            lVar13 = lVar13 + -1;
            local_110 = DAT_14c9a3da0;
            lVar8 = lVar13 * 0x10;
            FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar8),
                          *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar8));
            if (*(longlong *)(local_110 + lVar8) != 0) {
              FUN_1400020a8();
            }
            lVar5 = DAT_14c9a3da0;
            iVar7 = (int)lVar13;
            if (DAT_14c9a3dd4 != 0) {
              *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar7;
            }
            *(undefined4 *)(lVar5 + lVar8) = 0xffffffff;
            iVar10 = -1;
            if (0 < DAT_14c9a3dd4) {
              iVar10 = DAT_14c9a3dd0;
            }
            *(int *)(lVar5 + 4 + lVar8) = iVar10;
            DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
            puVar9 = DAT_14c9a3dc0;
            if (DAT_14c9a3dc0 == (undefined *)0x0) {
              puVar9 = &DAT_14c9a3db0;
            }
            iVar10 = iVar7 + 0x1f;
            if (-1 < iVar7) {
              iVar10 = iVar7;
            }
            bVar6 = (byte)lVar13 & 0x1f;
            DAT_14c9a3dd0 = iVar7;
            *(uint *)(puVar9 + (longlong)(iVar10 >> 5) * 4) =
                 *(uint *)(puVar9 + (longlong)(iVar10 >> 5) * 4) &
                 (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
            local_b8 = 0;
          }
          if ((local_e0[0] == '\x03') && (local_d0 != (longlong *)0x0)) {
            LOCK();
            piVar2 = (int *)((longlong)local_d0 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_d0 + 0x10))();
            }
          }
          uVar3 = *(undefined1 *)(lVar14 + -8);
          lVar8 = *(longlong *)(lVar14 + -0x10);
          if (lVar8 == 0) {
            local_88[0] = *(undefined8 ****)(lVar14 + -0x20);
            FUN_1446dcdd4(local_e0,local_88);
            lVar8 = FUN_1448fdc6e(local_e0);
            if (local_c8 != 0) {
              FUN_1400020a8();
            }
            *(longlong *)(lVar14 + -0x10) = lVar8;
          }
          local_118 = &local_f1;
          FUN_14021808c(param_1,lVar8,CONCAT71((int7)((ulonglong)lVar13 >> 8),uVar3) & 0xffffffff,
                        uVar19);
          lVar14 = lVar14 + 0x70;
          lVar16 = lVar16 + -0x70;
        } while (lVar16 != 0);
      }
      plVar17 = plVar17 + 2;
    } while (plVar17 != local_100);
  }
  (**(code **)(*param_1 + 0xc0))(param_1,local_108);
  plVar17 = local_e8;
  if (local_e8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_e8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_e8)(local_e8);
      LOCK();
      piVar2 = (int *)((longlong)plVar17 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14021808c FUN_14021808c body=347 status=ok
// SIG undefined FUN_14021808c(void)

undefined8
FUN_14021808c(longlong *param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
             undefined8 param_5)

{
  ulonglong uVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined1 local_78 [8];
  longlong local_70 [2];
  longlong *local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_2 == 0) {
    uVar6 = 0;
    goto LAB_1402181a2;
  }
  local_60 = (longlong *)0x0;
  local_58 = 0x200000000;
  (**(code **)(*param_1 + 0xb8))(param_1,param_2,local_70);
  lVar3 = (longlong)(int)local_58;
  plVar5 = local_70;
  if (lVar3 == 0) {
    lVar3 = FUN_1407cad3a(param_1,param_1 + 0x21,param_2);
    uVar1 = local_58;
    lVar7 = (longlong)(int)local_58;
    uVar2 = (int)local_58 + 1;
    local_58 = CONCAT44(local_58._4_4_,uVar2);
    if (local_58._4_4_ < uVar2) {
      FUN_1488d2c78(local_70,uVar1 & 0xffffffff);
    }
    plVar4 = local_60;
    if (local_60 == (longlong *)0x0) {
      plVar4 = local_70;
    }
    plVar4[lVar7] = lVar3;
    lVar3 = (longlong)(int)local_58;
    if (local_60 != (longlong *)0x0) {
      plVar5 = local_60;
    }
    if (lVar3 != 0) goto LAB_140218155;
    uVar6 = 0;
  }
  else {
    if (local_60 != (longlong *)0x0) {
      plVar5 = local_60;
    }
LAB_140218155:
    plVar4 = plVar5 + lVar3;
    uVar6 = 0;
    do {
      if (*plVar5 != 0) {
        local_88 = param_5;
        FUN_1402a444c(local_78,*plVar5 + 8,param_3,param_4);
        uVar6 = 1;
      }
      plVar5 = plVar5 + 1;
    } while (plVar5 != plVar4);
  }
  if (local_60 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_1402181a2:
  if ((local_50 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 1402181e8 FUN_1402181e8 body=105 status=ok
// SIG undefined FUN_1402181e8(void)

longlong FUN_1402181e8(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  
  if ((*(longlong *)(param_1 + 0x28) != 0) &&
     (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 8), lVar2 != 0)) {
    lVar3 = *(longlong *)
             (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 200) + 0x280) + 0x28);
    lVar5 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x20) + 2) * 0xa8;
    lVar4 = (longlong)*(int *)(lVar3 + 0x80 + lVar5);
    if (lVar4 != 0) {
      lVar1 = lVar3 + 0x78;
      lVar6 = 0;
      do {
        bVar7 = *(longlong *)(*(longlong *)(lVar1 + lVar5) + lVar6) == lVar2;
        lVar3 = CONCAT71((int7)((ulonglong)lVar3 >> 8),bVar7);
        if (bVar7) {
          return lVar3;
        }
        lVar6 = lVar6 + 8;
      } while (lVar4 * 8 != lVar6);
      return lVar3;
    }
  }
  return 0;
}



// FUNCTION 140218252 FUN_140218252 body=134 status=ok
// SIG undefined FUN_140218252(void)

void FUN_140218252(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)*param_1;
  if (plVar3 != (longlong *)0x0) {
    *param_1 = 0;
    (**(code **)(*plVar3 + 0x38))();
  }
  lVar2 = FUN_14472bf7a(param_2,param_4,param_3,0);
  param_1[1] = lVar2;
  plVar3 = (longlong *)FUN_14495f742(param_2,lVar2);
  plVar3 = (longlong *)*plVar3;
  plVar1 = (longlong *)*param_1;
  if (plVar1 != plVar3) {
    *param_1 = (longlong)plVar3;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x30))();
    }
    if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001402182c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x38))(plVar1);
      return;
    }
  }
  return;
}



// FUNCTION 1402182d8 FUN_1402182d8 body=126 status=ok
// SIG undefined FUN_1402182d8(void)

void FUN_1402182d8(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if ((int)uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  iVar6 = 2;
  if (2 < uVar1) {
    if (*(uint *)(param_1 + 0x1c) < 3) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar5 = (longlong)(int)uVar2;
    }
    else {
      lVar5 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar4 = FUN_144a3809e(lVar5 << 3,0);
    iVar3 = (int)(uVar4 >> 3);
    iVar6 = 0x7fffffff;
    if ((int)uVar1 <= iVar3) {
      iVar6 = iVar3;
    }
  }
  *(int *)(param_1 + 0x1c) = iVar6;
  FUN_140218356(param_1,param_2);
  return;
}



// FUNCTION 140218356 FUN_140218356 body=131 status=ok
// SIG undefined FUN_140218356(void)

void FUN_140218356(void *param_1,int param_2,undefined8 param_3)

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



// FUNCTION 1402183e6 FUN_1402183e6 body=116 status=ok
// SIG undefined FUN_1402183e6(void)

void FUN_1402183e6(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14113e8b4(param_1);
    }
    memset((void *)((longlong)iVar1 + *param_1),0,(longlong)(param_2 - iVar1));
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_146d9a214(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14021845a FUN_14021845a body=2019 status=ok
// SIG undefined FUN_14021845a(void)

undefined8 * FUN_14021845a(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  bool bVar6;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  puVar4 = (undefined8 *)FUN_1448fe162();
  *puVar4 = UE::Tasks::Private::FTaskBase::vftable;
  puVar4[1] = &DAT_100000001;
  puVar4[2] = 0;
  *(undefined4 *)(puVar4 + 3) = 0;
  *(undefined4 *)(puVar4 + 4) = 0xffffffff;
  puVar4[6] = 0;
  puVar4[7] = 0x100000000;
  *(undefined1 *)(puVar4 + 8) = 1;
  puVar4[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                TTaskDelegateDummy::vftable;
  puVar4[0xf] = 0;
  puVar4[0x10] = 0xe800000000000020;
  puVar4[0x12] = 0;
  puVar4[0x13] = 0x100000000;
  *(undefined2 *)(puVar4 + 0x14) = 0;
  LOCK();
  bVar6 = *(char *)(puVar4 + 8) == '\x01';
  if (bVar6) {
    *(char *)(puVar4 + 8) = '\0';
  }
  UNLOCK();
  if (!bVar6) {
    FUN_14008cdb0(puVar4 + 8);
  }
  *puVar4 = &PTR_FUN_149e1e2e0;
  if (*(code **)(puVar4[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(puVar4[0xe] + 0x18))(puVar4 + 0xe,puVar4 + 9);
  }
  puVar4[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                ::vftable;
  puVar4[9] = puVar4;
  puVar4[10] = puVar4;
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  lVar3 = *(longlong *)(lVar2 + 0x2b8);
  if (lVar3 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(lVar3 + 0x30);
  }
  puVar4[0xf] = uVar5;
  puVar4[0x10] = 0xc80000528bdbd880;
  *(undefined4 *)((longlong)puVar4 + 0x1c) = 2;
  param_1[4] = puVar4;
  puVar4 = (undefined8 *)FUN_1448fe162();
  *puVar4 = UE::Tasks::Private::FTaskBase::vftable;
  puVar4[1] = &DAT_100000001;
  puVar4[2] = 0;
  *(undefined4 *)(puVar4 + 3) = 0;
  *(undefined4 *)(puVar4 + 4) = 0xffffffff;
  puVar4[6] = 0;
  puVar4[7] = 0x100000000;
  *(undefined1 *)(puVar4 + 8) = 1;
  puVar4[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                TTaskDelegateDummy::vftable;
  puVar4[0xf] = 0;
  puVar4[0x10] = 0xe800000000000020;
  puVar4[0x12] = 0;
  puVar4[0x13] = 0x100000000;
  *(undefined2 *)(puVar4 + 0x14) = 0;
  LOCK();
  bVar6 = *(char *)(puVar4 + 8) == '\x01';
  if (bVar6) {
    *(char *)(puVar4 + 8) = '\0';
  }
  UNLOCK();
  if (!bVar6) {
    FUN_14008cdb0(puVar4 + 8);
  }
  plVar1 = (longlong *)(lVar2 + 0x2b8);
  *puVar4 = &PTR_FUN_149e1e2e0;
  if (*(code **)(puVar4[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(puVar4[0xe] + 0x18))(puVar4 + 0xe,puVar4 + 9);
  }
  puVar4[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                ::vftable;
  puVar4[9] = puVar4;
  puVar4[10] = puVar4;
  if (*plVar1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(*plVar1 + 0x30);
  }
  puVar4[0xf] = uVar5;
  puVar4[0x10] = 0xc80000528bdbf500;
  *(undefined4 *)((longlong)puVar4 + 0x1c) = 2;
  param_1[5] = puVar4;
  puVar4 = (undefined8 *)FUN_1448fe162();
  *puVar4 = UE::Tasks::Private::FTaskBase::vftable;
  puVar4[1] = &DAT_100000001;
  puVar4[2] = 0;
  *(undefined4 *)(puVar4 + 3) = 0;
  *(undefined4 *)(puVar4 + 4) = 0xffffffff;
  puVar4[6] = 0;
  puVar4[7] = 0x100000000;
  *(undefined1 *)(puVar4 + 8) = 1;
  puVar4[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                TTaskDelegateDummy::vftable;
  puVar4[0xf] = 0;
  puVar4[0x10] = 0xe800000000000020;
  puVar4[0x12] = 0;
  puVar4[0x13] = 0x100000000;
  *(undefined2 *)(puVar4 + 0x14) = 0;
  LOCK();
  bVar6 = *(char *)(puVar4 + 8) == '\x01';
  if (bVar6) {
    *(char *)(puVar4 + 8) = '\0';
  }
  UNLOCK();
  if (!bVar6) {
    FUN_14008cdb0(puVar4 + 8);
  }
  *puVar4 = &PTR_FUN_149e1e2e0;
  if (*(code **)(puVar4[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(puVar4[0xe] + 0x18))(puVar4 + 0xe,puVar4 + 9);
  }
  puVar4[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                ::vftable;
  puVar4[9] = puVar4;
  puVar4[10] = puVar4;
  if (*plVar1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(*plVar1 + 0x30);
  }
  puVar4[0xf] = uVar5;
  puVar4[0x10] = 0xc80000528bdc1180;
  *(undefined4 *)((longlong)puVar4 + 0x1c) = 2;
  param_1[6] = puVar4;
  puVar4 = (undefined8 *)FUN_1448fe162();
  *puVar4 = UE::Tasks::Private::FTaskBase::vftable;
  puVar4[1] = &DAT_100000001;
  puVar4[2] = 0;
  *(undefined4 *)(puVar4 + 3) = 0;
  *(undefined4 *)(puVar4 + 4) = 0xffffffff;
  puVar4[6] = 0;
  puVar4[7] = 0x100000000;
  *(undefined1 *)(puVar4 + 8) = 1;
  puVar4[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                TTaskDelegateDummy::vftable;
  puVar4[0xf] = 0;
  puVar4[0x10] = 0xe800000000000020;
  puVar4[0x12] = 0;
  puVar4[0x13] = 0x100000000;
  *(undefined2 *)(puVar4 + 0x14) = 0;
  LOCK();
  bVar6 = *(char *)(puVar4 + 8) == '\x01';
  if (bVar6) {
    *(char *)(puVar4 + 8) = '\0';
  }
  UNLOCK();
  if (!bVar6) {
    FUN_14008cdb0(puVar4 + 8);
  }
  *puVar4 = &PTR_FUN_149e1e2e0;
  if (*(code **)(puVar4[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(puVar4[0xe] + 0x18))(puVar4 + 0xe,puVar4 + 9);
  }
  puVar4[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                ::vftable;
  puVar4[9] = puVar4;
  puVar4[10] = puVar4;
  if (*plVar1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(*plVar1 + 0x30);
  }
  puVar4[0xf] = uVar5;
  puVar4[0x10] = 0xc80000528bdc2e00;
  *(undefined4 *)((longlong)puVar4 + 0x1c) = 2;
  param_1[7] = puVar4;
  puVar4 = (undefined8 *)FUN_1448fe162();
  *puVar4 = UE::Tasks::Private::FTaskBase::vftable;
  puVar4[1] = &DAT_100000001;
  puVar4[2] = 0;
  *(undefined4 *)(puVar4 + 3) = 0;
  *(undefined4 *)(puVar4 + 4) = 0xffffffff;
  puVar4[6] = 0;
  puVar4[7] = 0x100000000;
  *(undefined1 *)(puVar4 + 8) = 1;
  puVar4[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                TTaskDelegateDummy::vftable;
  puVar4[0xf] = 0;
  puVar4[0x10] = 0xe800000000000020;
  puVar4[0x12] = 0;
  puVar4[0x13] = 0x100000000;
  *(undefined2 *)(puVar4 + 0x14) = 0;
  LOCK();
  bVar6 = *(char *)(puVar4 + 8) == '\x01';
  if (bVar6) {
    *(char *)(puVar4 + 8) = '\0';
  }
  UNLOCK();
  if (!bVar6) {
    FUN_14008cdb0(puVar4 + 8);
  }
  *puVar4 = &PTR_FUN_149e1e2e0;
  if (*(code **)(puVar4[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(puVar4[0xe] + 0x18))(puVar4 + 0xe,puVar4 + 9);
  }
  puVar4[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                ::vftable;
  puVar4[9] = puVar4;
  puVar4[10] = puVar4;
  if (*plVar1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(*plVar1 + 0x30);
  }
  puVar4[0xf] = uVar5;
  puVar4[0x10] = 0xc80000528bdc4a80;
  *(undefined4 *)((longlong)puVar4 + 0x1c) = 2;
  param_1[8] = puVar4;
  puVar4 = (undefined8 *)FUN_1448fe162();
  *puVar4 = UE::Tasks::Private::FTaskBase::vftable;
  puVar4[1] = &DAT_100000001;
  puVar4[2] = 0;
  *(undefined4 *)(puVar4 + 3) = 0;
  *(undefined4 *)(puVar4 + 4) = 0xffffffff;
  puVar4[6] = 0;
  puVar4[7] = 0x100000000;
  *(undefined1 *)(puVar4 + 8) = 1;
  puVar4[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                TTaskDelegateDummy::vftable;
  puVar4[0xf] = 0;
  puVar4[0x10] = 0xe800000000000020;
  puVar4[0x12] = 0;
  puVar4[0x13] = 0x100000000;
  *(undefined2 *)(puVar4 + 0x14) = 0;
  LOCK();
  bVar6 = *(char *)(puVar4 + 8) == '\x01';
  if (bVar6) {
    *(char *)(puVar4 + 8) = '\0';
  }
  UNLOCK();
  if (!bVar6) {
    FUN_14008cdb0(puVar4 + 8);
  }
  *puVar4 = &PTR_FUN_149e1e2e0;
  if (*(code **)(puVar4[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(puVar4[0xe] + 0x18))(puVar4 + 0xe,puVar4 + 9);
  }
  puVar4[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                ::vftable;
  puVar4[9] = puVar4;
  puVar4[10] = puVar4;
  if (*plVar1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(*plVar1 + 0x30);
  }
  puVar4[0xf] = uVar5;
  puVar4[0x10] = 0xc80000528bdc6700;
  *(undefined4 *)((longlong)puVar4 + 0x1c) = 2;
  param_1[9] = puVar4;
  puVar4 = (undefined8 *)FUN_1448fe162();
  *puVar4 = UE::Tasks::Private::FTaskBase::vftable;
  puVar4[1] = &DAT_100000001;
  puVar4[2] = 0;
  *(undefined4 *)(puVar4 + 3) = 0;
  *(undefined4 *)(puVar4 + 4) = 0xffffffff;
  puVar4[6] = 0;
  puVar4[7] = 0x100000000;
  *(undefined1 *)(puVar4 + 8) = 1;
  puVar4[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                TTaskDelegateDummy::vftable;
  puVar4[0xf] = 0;
  puVar4[0x10] = 0xe800000000000020;
  puVar4[0x12] = 0;
  puVar4[0x13] = 0x100000000;
  *(undefined2 *)(puVar4 + 0x14) = 0;
  LOCK();
  bVar6 = *(char *)(puVar4 + 8) == '\x01';
  if (bVar6) {
    *(char *)(puVar4 + 8) = '\0';
  }
  UNLOCK();
  if (!bVar6) {
    FUN_14008cdb0(puVar4 + 8);
  }
  *puVar4 = &PTR_FUN_149e1e2e0;
  if (*(code **)(puVar4[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(puVar4[0xe] + 0x18))(puVar4 + 0xe,puVar4 + 9);
  }
  puVar4[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                ::vftable;
  puVar4[9] = puVar4;
  puVar4[10] = puVar4;
  if (*plVar1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(*plVar1 + 0x30);
  }
  puVar4[0xf] = uVar5;
  puVar4[0x10] = 0xc80000528bdc8380;
  *(undefined4 *)((longlong)puVar4 + 0x1c) = 2;
  param_1[10] = puVar4;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined2 *)(param_1 + 0xd) = 0;
  return param_1;
}



// FUNCTION 140218c3e FUN_140218c3e body=178 status=ok
// SIG undefined FUN_140218c3e(void)

undefined8
FUN_140218c3e(longlong *param_1,uint param_2,undefined8 *param_3,undefined8 param_4,longlong param_5
             )

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 == 0) {
    uVar2 = 1;
  }
  else {
    uVar2 = 1;
    uVar3 = 0;
    do {
      local_68 = *(undefined4 *)param_3;
      uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
      uStack_60 = *(undefined4 *)(param_3 + 1);
      uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
      local_58 = param_3[2];
      iVar1 = (**(code **)(*param_1 + 0x40))(param_1,*param_3,&uStack_60);
      if (iVar1 != 1) {
        uVar2 = 2;
      }
      *(int *)(param_5 + uVar3 * 4) = iVar1;
      uVar3 = uVar3 + 1;
      param_3 = param_3 + 3;
    } while (param_2 != uVar3);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140218cf2 FUN_140218cf2 body=257 status=ok
// SIG undefined FUN_140218cf2(void)

ulonglong FUN_140218cf2(longlong param_1,longlong param_2,undefined8 param_3,ulonglong param_4)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  if (*(int *)(param_2 + 0x10) == 0x10) {
    lVar8 = *(longlong *)(param_2 + 0x18);
  }
  else {
    lVar8 = 0;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x70);
  EnterCriticalSection(lpCriticalSection);
  if (*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x54)) {
    lVar7 = param_1 + 0x58;
    if (*(longlong *)(param_1 + 0x60) != 0) {
      lVar7 = *(longlong *)(param_1 + 0x60);
    }
    iVar6 = *(int *)(lVar7 + (ulonglong)
                             (*(int *)(param_1 + 0x68) - 1U &
                             (int)lVar8 + (int)((ulonglong)lVar8 >> 0x20) * 0x17) * 4);
    if (iVar6 != -1) {
      do {
        lVar7 = *(longlong *)(param_1 + 0x20) + (longlong)iVar6 * 0x20;
        if (*(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar6 * 0x20) == lVar8) {
          LeaveCriticalSection(lpCriticalSection);
          if ((lVar7 == 0) || (DAT_14c872bd8 != '\0')) goto LAB_140218d7c;
          plVar3 = *(longlong **)(lVar7 + 8);
          plVar4 = *(longlong **)(lVar7 + 0x10);
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
            UNLOCK();
          }
          if (plVar3 != (longlong *)0x0) {
            uVar5 = (**(code **)(*plVar3 + 8))(plVar3,param_4);
            param_4 = (ulonglong)uVar5;
          }
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
          if (plVar3 == (longlong *)0x0) goto LAB_140218d7c;
          goto LAB_140218d81;
        }
        iVar6 = *(int *)(lVar7 + 0x18);
      } while (iVar6 != -1);
    }
  }
  LeaveCriticalSection(lpCriticalSection);
LAB_140218d7c:
  param_4 = 2;
LAB_140218d81:
  return param_4 & 0xffffffff;
}



// FUNCTION 140218df4 FUN_140218df4 body=33 status=ok
// SIG undefined FUN_140218df4(void)

bool FUN_140218df4(longlong *param_1)

{
  int iVar1;
  bool bVar2;
  
  if ((longlong *)*param_1 == (longlong *)0x0) {
    bVar2 = false;
  }
  else {
    iVar1 = (**(code **)(*(longlong *)*param_1 + 0x20))();
    bVar2 = iVar1 == 1;
  }
  return bVar2;
}



// FUNCTION 140218e22 FUN_140218e22 body=268 status=ok
// SIG undefined FUN_140218e22(void)

void FUN_140218e22(longlong param_1,longlong *param_2)

{
  int *piVar1;
  uint uVar2;
  undefined1 auStack_48 [36];
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14a1c85b0);
  (**(code **)(*param_2 + 0x160))(param_2,param_1 + 0x38);
  piVar1 = *(int **)param_2[1];
  if ((int *)((undefined8 *)param_2[1])[1] < piVar1 + 1) {
    local_24 = (uint)*(byte *)(param_1 + 0x54);
    (**(code **)(*param_2 + 0x170))(param_2,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_2);
    }
  }
  else {
    *(bool *)(param_1 + 0x54) = *piVar1 != 0;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  *(undefined1 *)(param_1 + 0x54) = 0;
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    FUN_14021219d(param_2,param_1 + 0x40);
  }
  else {
    uVar2 = FUN_1448332aa(param_2,&DAT_14a1c85b0);
    if ((int)uVar2 < 0) goto LAB_140218ec1;
    FUN_14021219d(param_2,param_1 + 0x40);
    if (uVar2 < 2) goto LAB_140218ec1;
  }
  FUN_140218f30(param_1 + 0x50,param_2);
LAB_140218ec1:
  FUN_14009d19e(param_1,param_2);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140218f30 FUN_140218f30 body=230 status=ok
// SIG undefined FUN_140218f30(void)

undefined8 FUN_140218f30(uint *param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auStack_88 [40];
  longlong *local_60;
  code *local_58;
  longlong **local_50;
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(byte *)(param_2 + 0x28) & 1) == 0) {
    local_48 = 0;
    uStack_40 = 0;
    local_50 = &local_60;
    local_58 = FUN_142b3dd62;
    local_60 = &local_48;
    FUN_140cfa7c8(param_1);
    FUN_140219018(param_2,&local_48);
    lVar1 = local_48;
  }
  else {
    local_48 = 0;
    uStack_40 = 0;
    FUN_140219018(param_2,&local_48);
    lVar1 = local_48;
    *param_1 = 0;
    if ((longlong)(int)uStack_40 != 0) {
      lVar5 = (longlong)(int)uStack_40 << 3;
      uVar4 = 0;
      lVar3 = local_48;
      do {
        uVar2 = FUN_1407864f6(lVar3);
        uVar4 = uVar4 | uVar2;
        *param_1 = uVar4;
        lVar3 = lVar3 + 8;
        lVar5 = lVar5 + -8;
      } while (lVar5 != 0);
    }
  }
  if (lVar1 != 0) {
    FUN_1400020a8(lVar1);
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 140219018 FUN_140219018 body=432 status=ok
// SIG undefined FUN_140219018(void)

longlong * FUN_140219018(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  int iVar2;
  ulonglong *puVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_58 [36];
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 3,(longlong)*(int *)((longlong)param_2 + 0xc) << 3
            );
  local_34 = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_34 = *(uint *)(param_2 + 1);
  }
  puVar3 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_34,4);
    }
    else {
      FUN_14572512c(param_1,&local_34);
    }
  }
  else {
    local_34 = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
  }
  if (local_34 == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_1402191ca(param_2,0);
    }
  }
  else if ((((int)local_34 < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x200000 < local_34 && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_34;
    lVar4 = 0;
    lVar6 = 0;
    do {
      (**(code **)(*param_1 + 0x160))(param_1,*param_2 + lVar4);
      lVar6 = lVar6 + 1;
      lVar4 = lVar4 + 8;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_34) ||
       (FUN_1402191ca(param_2), 0 < (int)local_34)) {
      iVar5 = 0;
      do {
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_1446f84a2(param_2,iVar2);
        }
        *(undefined8 *)(*param_2 + (longlong)iVar2 * 8) = 0;
        (**(code **)(*param_1 + 0x160))(param_1);
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)local_34);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1402191ca FUN_1402191ca body=312 status=ok
// SIG undefined FUN_1402191ca(void)

void FUN_1402191ca(longlong param_1,int param_2)

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
    uVar3 = (longlong)param_2 * 8;
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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_140219234;
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
LAB_140219234:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,8,4);
  }
  return;
}



// FUNCTION 140219302 FUN_140219302 body=71 status=ok
// SIG undefined FUN_140219302(void)

void FUN_140219302(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_14021934a();
  if (*(longlong *)(param_1 + 0x2500) != 0) {
    FUN_14021947e(*(longlong *)(param_1 + 0x2500),param_2,param_3);
    return;
  }
  return;
}



// FUNCTION 14021934a FUN_14021934a body=87 status=ok
// SIG undefined FUN_14021934a(void)

void FUN_14021934a(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  
  uVar1 = *(undefined1 *)(param_1 + 0xa88);
  *(undefined1 *)(param_1 + 0xa88) = 1;
  FUN_1402193a2();
  plVar2 = *(longlong **)(param_1 + 0xa80);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x2b0))(plVar2,param_2,param_3);
  }
  *(undefined1 *)(param_1 + 0xa88) = uVar1;
  return;
}



// FUNCTION 1402193a2 FUN_1402193a2 body=219 status=ok
// SIG undefined FUN_1402193a2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402193a2(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caf9e68) {
    FUN_144b3d300(&DAT_14caf9e68);
    if (DAT_14caf9e68 == -1) {
      DAT_14caf9e58 = 0;
      _DAT_14caf9e60 = 0;
      atexit((_func_5014 *)&LAB_14364f977);
      _Init_thread_footer(&DAT_14caf9e68);
    }
  }
  (**(code **)(*param_1 + 0xd80))(param_1,&DAT_14caf9e58);
  (**(code **)(*(longlong *)param_1[0xa1] + 0x2b0))
            ((longlong *)param_1[0xa1],&DAT_14caf9e58,param_2,param_3);
  bVar1 = -1 < (longlong)_DAT_14caf9e60;
  _DAT_14caf9e60 = _DAT_14caf9e60 & 0xffffffff00000000;
  if (bVar1) {
    return;
  }
  FUN_147ca7932(&DAT_14caf9e58,0);
  return;
}



// FUNCTION 14021947e FUN_14021947e body=567 status=ok
// SIG undefined FUN_14021947e(void)

void FUN_14021947e(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
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
  lVar4 = param_1[0x86];
  cVar2 = (**(code **)(*param_1 + 0x880))();
  if ((cVar2 == '\0') && ((param_1[0x746] != 0 || ((int)param_1[0x747] != 0x7201)))) {
    if (lVar4 != 0) {
      cVar2 = FUN_14479439c(lVar4,0);
      if (cVar2 != '\0') {
        lVar4 = *(longlong *)(lVar4 + 0x10);
        if (lVar4 != 0) {
          lVar5 = FUN_140086810();
          if ((lVar5 != 0) && ((*(byte *)(lVar5 + 0xd5) & 0x40) != 0)) {
            if (DAT_14c950d78 == 0) {
              local_60 = &local_48;
              local_48 = FUN_1449e2820;
              local_50 = FUN_14081d0ea;
              local_58 = FUN_14081d0ea;
              local_68 = &LAB_1468b50ee;
              local_70 = FUN_1427f23a3;
              local_78 = L"Engine";
              local_80 = 0;
              local_88 = 0x10004001;
              local_90 = 8;
              local_98 = 0x28;
              FUN_14081cfa3(L"/Script/CoreUObject",L"Interface",&DAT_14c950d78,&DAT_1468b50f4);
            }
            if (DAT_14c950d78 != lVar5) {
              do {
                if (0 < (longlong)*(int *)(lVar4 + 0x1e0)) {
                  lVar6 = 0;
                  do {
                    lVar1 = *(longlong *)(*(longlong *)(lVar4 + 0x1d8) + lVar6);
                    if (((lVar1 != 0) && (*(int *)(lVar5 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
                       (*(longlong *)
                         (*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
                        lVar5 + 0x30)) goto LAB_1402194f3;
                    lVar6 = lVar6 + 0x10;
                  } while ((longlong)*(int *)(lVar4 + 0x1e0) * 0x10 != lVar6);
                }
                lVar4 = *(longlong *)(lVar4 + 0x40);
              } while (lVar4 != 0);
            }
          }
        }
        goto LAB_140219619;
      }
    }
LAB_1402194f3:
    (**(code **)(*(longlong *)param_1[0x73a] + 0x2a0))((longlong *)param_1[0x73a],param_1[0x72]);
    (**(code **)(*(longlong *)param_1[0x73a] + 0x2a8))
              ((longlong *)param_1[0x73a],param_1[0x86],param_2);
    lVar4 = param_1[0x86];
    if (lVar4 != 0) {
      uVar3 = FUN_140086810();
      lVar4 = FUN_144718840(lVar4,uVar3);
      if (lVar4 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_b8);
      }
    }
  }
LAB_140219619:
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402196dc FUN_1402196dc body=157 status=ok
// SIG undefined FUN_1402196dc(void)

void FUN_1402196dc(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if ((param_2 == 0) || (DAT_14c950c29 == '\0')) {
    *(longlong *)(param_1 + 0xe8) = param_2;
    if (param_2 == 0) {
      return;
    }
  }
  else {
    FUN_1456cec3c(param_2);
    *(longlong *)(param_1 + 0xe8) = param_2;
  }
  lVar2 = FUN_1447210f0(param_2);
  *(float *)(param_1 + 0x28) = (float)*(double *)(lVar2 + 0x6d0);
  lVar2 = *(longlong *)(param_1 + 0xe8);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(lVar2 + 0x620);
  uVar1 = *(undefined8 *)(lVar2 + 0x618);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(lVar2 + 0x610);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  if (*(longlong *)(lVar2 + 0x448) != 0) {
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(*(longlong *)(lVar2 + 0x448) + 0x3a8);
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(*(longlong *)(lVar2 + 0x448) + 0x3ac);
  }
  return;
}



// FUNCTION 140219780 FUN_140219780 body=57 status=ok
// SIG undefined FUN_140219780(void)

void FUN_140219780(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc1410 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc1410 = FUN_140002ddd(FUN_14661b8a0,uVar1,L"WeaponWearAspect");
  }
  return;
}



// FUNCTION 1402197ba FUN_1402197ba body=22 status=ok
// SIG undefined FUN_1402197ba(void)

undefined1 FUN_1402197ba(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1402197d0(param_2,param_3);
  return 1;
}



// FUNCTION 1402197d0 FUN_1402197d0 body=168 status=ok
// SIG undefined FUN_1402197d0(void)

longlong * FUN_1402197d0(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      thunk_FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  param_2 = param_2 + 1;
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      thunk_FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  return param_1;
}



// FUNCTION 140219894 FUN_140219894 body=407 status=ok
// SIG undefined FUN_140219894(void)

void FUN_140219894(longlong param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  int *local_48;
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (0 < *(int *)(param_1 + 0x78)) {
    local_48 = &local_3c;
    local_3c = 0;
    uStack_58 = &local_48;
    local_60 = &LAB_143cbcba2;
    FUN_1400b7536();
    if ((((local_3c == *(int *)(param_1 + 0x150)) &&
         (plVar3 = *(longlong **)(param_1 + 0x168), plVar3 != (longlong *)0x0)) &&
        (*(int *)(param_1 + 0x164) != 0)) &&
       ((uVar2 = *(uint *)(param_1 + 0x160), -1 < (int)uVar2 && ((int)uVar2 < DAT_14c9647dc)))) {
      lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      if ((lVar7 != 0) &&
         ((*(int *)(lVar7 + 0x10) == *(int *)(param_1 + 0x164) &&
          ((*(uint *)(lVar7 + 8) & 0x10200000) == 0)))) {
        cVar5 = (**(code **)(*plVar3 + 0x20))(plVar3);
        if (cVar5 != '\0') {
          (**(code **)(*plVar3 + 0x30))(plVar3,&local_60);
          if (0 < *(int *)(param_1 + 0x150)) {
            lVar7 = 0;
            uVar8 = 0;
            do {
              lVar4 = *(longlong *)(param_1 + 0x148);
              lVar10 = lVar4 + lVar7;
              lVar9 = 0x50;
              do {
                if (*(char *)(lVar10 + lVar9) == '\x03') {
                  *(undefined8 *)(lVar10 + -0x28 + lVar9) = local_50;
                  puVar1 = (undefined4 *)(lVar10 + -0x38 + lVar9);
                  *puVar1 = (undefined4)local_60;
                  puVar1[1] = local_60._4_4_;
                  puVar1[2] = (undefined4)uStack_58;
                  puVar1[3] = uStack_58._4_4_;
                  lVar6 = FUN_1456e759a(param_1,uVar8 & 0xffffffff);
                  if (lVar6 != 0) {
                    FUN_140219a2c(lVar6,uVar8 * 0x1c0 + lVar4);
                  }
                }
                lVar9 = lVar9 + 0x48;
              } while (lVar9 != 0x200);
              uVar8 = uVar8 + 1;
              lVar7 = lVar7 + 0x1c0;
            } while ((longlong)uVar8 < (longlong)*(int *)(param_1 + 0x150));
          }
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140219a2c FUN_140219a2c body=327 status=ok
// SIG undefined FUN_140219a2c(void)

void FUN_140219a2c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  
  cVar4 = *(char *)(param_2 + 0xc);
  if (*(char *)(param_1 + 0x7e9) == cVar4) goto LAB_140219a49;
  if (cVar4 == '\0') {
    FUN_1400bc96c(param_1 + 0x798,&DAT_14cb72160);
    if (*(char *)(param_1 + 0x7e9) == '\0') goto LAB_140219a49;
    cVar4 = '\0';
  }
  else if (cVar4 == '\x02') {
    if (*(char *)(param_1 + 0x7e9) == '\x01') {
      FUN_1400bc8c2(param_1 + 0x7c0,&DAT_14cb72160);
      if ((*(char *)(param_1 + 0x7c0) != '\0') ||
         (cVar4 = '\x02', *(char *)(param_1 + 0x7e9) != '\x01')) goto LAB_140219a49;
    }
    else {
      FUN_1400bc8c2(param_1 + 0x798,&DAT_14cb72160);
      if (*(char *)(param_1 + 0x798) != '\0') goto LAB_140219a49;
      cVar4 = '\x02' - *(char *)(param_1 + 0x7c0);
    }
  }
  else {
    if (cVar4 != '\x01') goto LAB_140219a49;
    FUN_1400bc96c(param_1 + 0x7c0,&DAT_14cb72160);
    cVar4 = '\x01';
    if (*(char *)(param_1 + 0x7e9) != '\x02') goto LAB_140219a49;
  }
  *(char *)(param_1 + 0x7e9) = cVar4;
LAB_140219a49:
  *(undefined1 *)(param_1 + 0x3b1) = *(undefined1 *)(param_2 + 0xd);
  if (0 < *(int *)(param_1 + 0x288)) {
    uVar5 = 1;
    do {
      lVar3 = (ulonglong)((uVar5 - 1 & 0xff) << 3) * 9;
      lVar1 = param_1 + 0xd8 + lVar3;
      if (*(byte *)(param_1 + 0x118 + lVar3) < 6) {
        *(undefined1 *)(lVar1 + 0x40) = 0xff;
      }
      FUN_140219b74(lVar1,lVar3 + param_2 + 0x10);
      bVar2 = (int)uVar5 < *(int *)(param_1 + 0x288);
      uVar5 = (uint)(byte)((char)uVar5 + 1);
    } while (bVar2);
  }
  FUN_140219c88(param_1);
  return;
}



// FUNCTION 140219b74 FUN_140219b74 body=275 status=ok
// SIG undefined FUN_140219b74(void)

undefined8 * FUN_140219b74(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if (*(char *)(param_2 + 8) != -1) {
    switch(*(char *)(param_2 + 8)) {
    case '\0':
      if (*(byte *)(param_1 + 8) < 6) {
        *(undefined1 *)(param_1 + 8) = 0xff;
      }
      param_1[2] = param_2[2];
      uVar1 = param_2[1];
      *param_1 = *param_2;
      param_1[1] = uVar1;
      *(undefined1 *)(param_1 + 8) = 0;
      break;
    case '\x01':
      if (*(byte *)(param_1 + 8) < 6) {
        *(undefined1 *)(param_1 + 8) = 0xff;
      }
      param_1[2] = param_2[2];
      uVar1 = param_2[1];
      *param_1 = *param_2;
      param_1[1] = uVar1;
      *(undefined1 *)(param_1 + 8) = 1;
      break;
    case '\x02':
      if (*(byte *)(param_1 + 8) < 6) {
        *(undefined1 *)(param_1 + 8) = 0xff;
      }
      uVar1 = *param_2;
      uVar2 = param_2[1];
      uVar3 = param_2[2];
      uVar4 = param_2[3];
      uVar5 = param_2[4];
      uVar6 = param_2[5];
      uVar7 = param_2[7];
      param_1[6] = param_2[6];
      param_1[7] = uVar7;
      param_1[4] = uVar5;
      param_1[5] = uVar6;
      param_1[2] = uVar3;
      param_1[3] = uVar4;
      *param_1 = uVar1;
      param_1[1] = uVar2;
      *(undefined1 *)(param_1 + 8) = 2;
      break;
    case '\x03':
      if (*(byte *)(param_1 + 8) < 6) {
        *(undefined1 *)(param_1 + 8) = 0xff;
      }
      uVar1 = *param_2;
      uVar2 = param_2[1];
      uVar3 = param_2[3];
      param_1[2] = param_2[2];
      param_1[3] = uVar3;
      *param_1 = uVar1;
      param_1[1] = uVar2;
      *(undefined1 *)(param_1 + 8) = 3;
      break;
    case '\x04':
      *param_1 = *param_2;
      *(undefined1 *)(param_1 + 8) = 4;
      break;
    case '\x05':
      *param_1 = *param_2;
      *(undefined1 *)(param_1 + 8) = 5;
      break;
    default:
      FUN_140033559("Runtime\\Core\\Public\\Containers/Union.h",0x18e,L"Unrecognized TUnion subtype"
                   );
    }
  }
  return param_1;
}



// FUNCTION 140219c88 FUN_140219c88 body=207 status=ok
// SIG undefined FUN_140219c88(void)

void FUN_140219c88(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [39];
  undefined1 local_31;
  undefined1 *local_30;
  undefined1 *local_28;
  undefined1 **local_20;
  code *local_18;
  undefined1 ***local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined1 *)(param_1 + 0x3b2) = 1;
  if ((*(byte *)(param_1 + 0x7e8) & 2) == 0) {
    *(undefined1 *)(param_1 + 0x290) = 0;
    if ((longlong)*(int *)(param_1 + 0x288) != 0) {
      lVar1 = 0;
      do {
        if (*(char *)(param_1 + 0x118 + lVar1) != -1) {
          *(undefined1 *)(param_1 + 0x290) = 1;
          break;
        }
        lVar1 = lVar1 + 0x48;
      } while ((longlong)*(int *)(param_1 + 0x288) * 0x48 != lVar1);
    }
  }
  else if (*(longlong *)(param_1 + 0xd0) != 0) {
    *(undefined1 *)(param_1 + 0x290) = *(undefined1 *)(*(longlong *)(param_1 + 0xd0) + 0x290);
  }
  local_28 = &local_31;
  local_20 = &local_30;
  local_30 = &LAB_143cba6da;
  local_10 = &local_20;
  local_18 = FUN_14061a336;
  FUN_1448fef12(param_1,CONCAT71((int7)((ulonglong)local_20 >> 8),3));
  if ((local_8 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140219d5e FUN_140219d5e body=291 status=ok
// SIG undefined FUN_140219d5e(void)

void FUN_140219d5e(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  int *piVar2;
  undefined1 auStack_88 [32];
  int *local_68;
  undefined8 local_58;
  undefined4 local_50 [2];
  longlong local_48;
  undefined8 uStack_40;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = param_2;
  local_50[0] = FUN_144830b78(local_50,&DAT_14cb420f0);
  local_48 = 0;
  uStack_40 = 0;
  if (*(longlong *)(param_1 + 0x760) == 0) {
    lVar1 = param_1 + 0x678;
    piVar2 = (int *)(**(code **)(*(longlong *)(param_1 + 0x678) + 0x58))(lVar1,&local_58,0);
    if (piVar2 == (int *)0x0) {
      local_34 = -1;
    }
    else {
      local_34 = *piVar2;
      if ((longlong)local_34 != -1) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x698) + (longlong)local_34) = param_3;
        *(byte *)(param_1 + 0x6f8) = *(byte *)(param_1 + 0x6f8) | 1;
        goto LAB_140219dba;
      }
    }
    local_68 = &local_34;
    (**(code **)(*(longlong *)(param_1 + 0x678) + 0x10))(lVar1,&local_58,0,0);
    *(undefined4 *)(*(longlong *)(param_1 + 0x698) + (longlong)local_34) = param_3;
    FUN_140219f72(lVar1);
  }
  else {
    FUN_140219e82(*(longlong *)(param_1 + 0x760),param_2,param_3);
  }
LAB_140219dba:
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140219e82 FUN_140219e82 body=238 status=ok
// SIG undefined FUN_140219e82(void)

void FUN_140219e82(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_88 [32];
  int *local_68;
  undefined8 local_58;
  undefined4 local_50 [2];
  longlong local_48;
  undefined8 uStack_40;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(longlong *)(param_1 + 0x28) == 0) goto LAB_140219f0b;
  local_58 = param_2;
  local_50[0] = FUN_144830b78(local_50,&DAT_14cb420f0);
  local_48 = 0;
  uStack_40 = 0;
  plVar1 = *(longlong **)(param_1 + 0x28);
  piVar2 = (int *)(**(code **)(*plVar1 + 0x58))(plVar1,&local_58,0);
  if (piVar2 == (int *)0x0) {
    local_34 = -1;
LAB_140219f36:
    local_68 = &local_34;
    (**(code **)(*plVar1 + 0x10))(plVar1,&local_58,0,0);
    *(undefined4 *)(plVar1[4] + (longlong)local_34) = param_3;
    FUN_140219f72(plVar1);
  }
  else {
    local_34 = *piVar2;
    if ((longlong)local_34 == -1) goto LAB_140219f36;
    *(undefined4 *)(plVar1[4] + (longlong)local_34) = param_3;
    *(byte *)(plVar1 + 0x10) = *(byte *)(plVar1 + 0x10) | 1;
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
LAB_140219f0b:
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140219f72 FUN_140219f72 body=199 status=ok
// SIG undefined FUN_140219f72(void)

void FUN_140219f72(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar3 = *(int *)(param_1 + 0x28) + 0xf;
  iVar4 = (uVar3 & 0xfffffff0) + 0x10;
  if (*(int *)(param_1 + 0x2c) < iVar4) {
    if ((int)uVar3 < -0x10) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar4);
    }
    FUN_144893a1c(param_1 + 0x20);
  }
  if ((longlong)*(int *)(param_1 + 0x68) != 0) {
    plVar5 = *(longlong **)(param_1 + 0x60);
    plVar6 = plVar5 + (longlong)*(int *)(param_1 + 0x68) * 7;
    do {
      lVar1 = *plVar5;
      local_38 = param_1;
      cVar2 = FUN_1448b0bbc(plVar5 + 1,lVar1,param_1,0);
      if (cVar2 != '\0') {
        FUN_1401a642c(lVar1 + 0x70,&local_38);
      }
      plVar5 = plVar5 + 7;
    } while (plVar5 != plVar6);
  }
  *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + 1;
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14021a03c FUN_14021a03c body=668 status=ok
// SIG undefined FUN_14021a03c(void)

undefined4
FUN_14021a03c(longlong param_1,undefined8 **param_2,undefined4 param_3,undefined4 param_4,
             undefined8 param_5)

{
  uint uVar1;
  undefined8 *_Src;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auStack_8f8 [32];
  undefined8 local_8d8;
  undefined2 **local_8d0;
  undefined8 *local_8c8;
  undefined8 local_8c0;
  undefined8 uStack_8b8;
  undefined8 *local_8b0;
  undefined4 local_8a8 [2];
  void *local_8a0;
  ulonglong uStack_898;
  undefined1 local_88c [4];
  undefined2 *local_888;
  undefined2 *local_880;
  undefined2 *local_878;
  char local_870;
  undefined2 local_868 [1035];
  undefined2 local_52;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_8f8;
  local_8b0 = (undefined8 *)0x0;
  local_8a8[0] = FUN_144830b78(local_8a8,&DAT_14cb42160);
  local_8a0 = (void *)0x0;
  uStack_898 = 0;
  cVar2 = FUN_1448ff1e0(param_2);
  if (cVar2 == '\0') {
    local_888 = local_868;
    local_870 = '\0';
    local_878 = &local_52;
    local_880 = local_888;
    FUN_14005eb5c(&DAT_14cb3af58,&local_888);
    if (local_878 <= local_880 + 1) {
      FUN_140213274(&local_888,1);
    }
    *local_880 = 0x2e;
    local_880 = local_880 + 1;
    FUN_14005eb5c(param_2,&local_888);
    FUN_1446f82e2(&local_8d0,(ulonglong)((longlong)local_880 - (longlong)local_888) >> 1,local_888,1
                 );
    uVar4 = FUN_144741050(param_2 + 1);
    local_8a8[0] = FUN_144830b78(&local_8c8,uVar4);
    local_8c8 = (undefined8 *)CONCAT44(local_8c8._4_4_,local_8a8[0]);
    local_8c0 = 0;
    uStack_8b8 = 0;
    local_8b0 = local_8d0;
    if (local_8a0 != (void *)0x0) {
      FUN_1400020a8();
    }
    local_8a0 = (void *)0x0;
    uStack_898 = 0;
    if (local_870 == '\x01') {
      FUN_1400020a8(local_888);
    }
  }
  else {
    local_8a8[0] = *(undefined4 *)(param_2 + 1);
    local_8b0 = *param_2;
    if (&local_8b0 != param_2) {
      uVar1 = *(uint *)(param_2 + 3);
      _Src = param_2[2];
      uStack_898 = CONCAT44(uStack_898._4_4_,uVar1);
      if ((longlong)(int)uVar1 == 0) {
        uStack_898 = (ulonglong)uVar1;
      }
      else {
        FUN_1447a127e(&local_8a0,uVar1,0);
        memcpy(local_8a0,_Src,(longlong)(int)uVar1);
      }
    }
  }
  FUN_14021a2da(&local_888,&local_8b0);
  local_8d0 = &local_888;
  local_8c8 = &local_8b0;
  FUN_14021a44c(param_1 + 0x88,local_88c);
  if (local_878 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  local_8d8 = param_5;
  uVar3 = FUN_14021ab3e(param_1,&local_8b0,param_3,param_4);
  if (local_8a0 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_8f8) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14021a2da FUN_14021a2da body=366 status=ok
// SIG undefined FUN_14021a2da(void)

undefined8 * FUN_14021a2da(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  void *_Src;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_898 [40];
  undefined8 local_870;
  undefined1 *local_868;
  undefined1 *local_860;
  undefined1 *local_858;
  char local_850;
  undefined1 local_848 [2070];
  undefined1 local_32 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_898;
  cVar2 = FUN_1448ff1e0(param_2);
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  puVar1 = param_1 + 2;
  param_1[2] = 0;
  iVar4 = *(int *)(param_2 + 3);
  _Src = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar4;
  if (cVar2 == '\0') {
    if (iVar4 != 0) {
      FUN_1447a127e(puVar1,iVar4,0);
      memcpy((void *)*puVar1,_Src,(longlong)iVar4);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_898);
    }
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    if (iVar4 == 0) {
      *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
    }
    else {
      FUN_1447a127e(puVar1,iVar4,0);
      memcpy((void *)*puVar1,_Src,(longlong)iVar4);
    }
    local_868 = local_848;
    local_850 = '\0';
    local_858 = local_32;
    local_860 = local_868;
    FUN_14005eb5c(param_2,&local_868);
    iVar3 = (int)((ulonglong)((longlong)local_860 - (longlong)local_868) >> 1);
    iVar4 = 5;
    if (5 < iVar3) {
      iVar4 = iVar3;
    }
    FUN_1446f82e2(&local_870,(ulonglong)(iVar4 - 5),
                  local_868 + (ulonglong)(iVar4 - 5) * -2 + (longlong)iVar3 * 2,1);
    *param_1 = local_870;
    if (local_850 == '\x01') {
      FUN_1400020a8(local_868);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_898) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14021a44c FUN_14021a44c body=930 status=ok
// SIG undefined FUN_14021a44c(void)

undefined4 * FUN_14021a44c(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  ushort uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *_Src;
  undefined8 uVar4;
  char cVar5;
  uint uVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14021a968(param_1,local_50);
  puVar2 = (undefined8 *)*param_3;
  puVar3 = (undefined8 *)param_3[1];
  *(undefined4 *)(local_48 + 1) = *(undefined4 *)(puVar2 + 1);
  *local_48 = *puVar2;
  local_48[2] = 0;
  local_48[2] = puVar2[2];
  puVar2[2] = 0;
  *(undefined4 *)(local_48 + 3) = *(undefined4 *)(puVar2 + 3);
  *(undefined4 *)((longlong)local_48 + 0x1c) = *(undefined4 *)((longlong)puVar2 + 0x1c);
  puVar2[3] = 0;
  *(undefined4 *)(local_48 + 5) = *(undefined4 *)(puVar3 + 1);
  local_48[4] = *puVar3;
  local_48[6] = 0;
  iVar9 = *(int *)(puVar3 + 3);
  _Src = (void *)puVar3[2];
  *(int *)(local_48 + 7) = iVar9;
  if ((longlong)iVar9 == 0) {
    *(undefined4 *)((longlong)local_48 + 0x3c) = 0;
  }
  else {
    FUN_1447a127e(local_48 + 6,iVar9,0);
    memcpy((void *)local_48[6],_Src,(longlong)iVar9);
  }
  *(undefined4 *)(local_48 + 8) = 0xffffffff;
  local_54 = local_50[0];
  uVar4 = *local_48;
  uVar6 = (uint)((ulonglong)uVar4 >> 0x10);
  uVar11 = (uint)uVar4 & 0xffff;
  uVar14 = ((uint)uVar4 << 0x10 | uVar11) + (int)((ulonglong)uVar4 >> 0x20) +
           (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar11 >> 4);
  puVar7 = (ulonglong *)FUN_144741050(local_48 + 1);
  uVar1 = (ushort)puVar7[1];
  uVar6 = ((uint)(*puVar7 >> 0x14) & 0xffff ^ (uint)(*puVar7 >> 4)) * -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  uVar6 = (uint)(uVar1 >> 0xd) ^ (uVar6 >> 0x10 ^ uVar6) - (uint)uVar1;
  uVar11 = uVar6 << 8 ^ (-0x61c88647 - uVar6) - (uint)uVar1;
  uVar12 = uVar11 >> 0xd ^ (uVar1 - uVar6) - uVar11;
  uVar6 = uVar12 >> 0xc ^ (uVar6 - uVar11) - uVar12;
  uVar11 = uVar6 << 0x10 ^ (uVar11 - uVar12) - uVar6;
  uVar12 = uVar11 >> 5 ^ (uVar12 - uVar6) - uVar11;
  uVar13 = uVar12 >> 3 ^ (uVar6 - uVar11) - uVar12;
  uVar6 = uVar13 << 10 ^ (uVar11 - uVar12) - uVar13;
  uVar6 = uVar6 >> 0xf ^ uVar12 - (uVar13 + uVar6);
  iVar9 = uVar6 - *(byte *)((longlong)puVar7 + 10);
  uVar11 = iVar9 * 0x100 ^ 0x9e3779b9 - uVar6;
  uVar12 = uVar11 >> 0xd ^ ((uint)*(byte *)((longlong)puVar7 + 10) - iVar9) - uVar11;
  uVar6 = uVar12 >> 0xc ^ (iVar9 - uVar11) - uVar12;
  uVar11 = uVar6 << 0x10 ^ (uVar11 - uVar12) - uVar6;
  uVar13 = uVar11 >> 5 ^ (uVar12 - uVar6) - uVar11;
  uVar12 = uVar13 >> 3 ^ (uVar6 - uVar11) - uVar13;
  uVar6 = uVar12 << 10 ^ (uVar11 - uVar13) - uVar12;
  uVar12 = uVar14 >> 0xd ^ (uVar6 >> 0xf ^ uVar13 - (uVar12 + uVar6)) - uVar14;
  uVar11 = uVar12 << 8 ^ (-0x61c88647 - uVar14) - uVar12;
  uVar6 = uVar11 >> 0xd ^ (uVar14 - uVar12) - uVar11;
  uVar13 = uVar6 >> 0xc ^ (uVar12 - uVar11) - uVar6;
  uVar12 = uVar13 << 0x10 ^ (uVar11 - uVar6) - uVar13;
  uVar11 = uVar12 >> 5 ^ (uVar6 - uVar13) - uVar12;
  uVar6 = uVar11 >> 3 ^ (uVar13 - uVar12) - uVar11;
  uVar12 = uVar6 << 10 ^ (uVar12 - uVar11) - uVar6;
  uVar6 = uVar12 >> 0xf ^ uVar11 - (uVar6 + uVar12);
  local_68 = 0;
  cVar5 = FUN_14021a7f0(param_1,uVar6,local_48,&local_54);
  if (cVar5 == '\0') {
    uVar11 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar11 < 4) {
      iVar9 = 1;
    }
    else {
      uVar8 = (ulonglong)(uVar11 & 0xfffffffe) + 0xf;
      lVar10 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (((int)uVar11 < 1) || (iVar9 <= *(int *)(param_1 + 0x48))) {
      uVar6 = *(int *)(param_1 + 0x48) - 1U & uVar6;
      *(uint *)((longlong)local_48 + 0x44) = uVar6;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 8) =
           *(undefined4 *)
            (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4);
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar9;
      FUN_14021b592(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14021a7f0 FUN_14021a7f0 body=237 status=ok
// SIG undefined FUN_14021a7f0(void)

void FUN_14021a7f0(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 uVar16;
  longlong *plVar17;
  int iVar18;
  
  uVar16 = 0;
  if (((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) &&
     (uVar16 = 0, (int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1)) {
    plVar17 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar17 = (longlong *)param_1[8];
    }
    iVar18 = *(int *)((longlong)plVar17 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar18 != -1) {
      do {
        plVar17 = (longlong *)(*param_1 + (longlong)iVar18 * 0x48);
        if ((*plVar17 == *param_3) &&
           (*(int *)(*param_1 + 8 + (longlong)iVar18 * 0x48) == (int)param_3[1])) {
          if (plVar17[6] != 0) {
            FUN_1400020a8();
          }
          if (plVar17[2] != 0) {
            FUN_1400020a8();
          }
          lVar9 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar10 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          lVar11 = param_3[2];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0x14);
          lVar12 = param_3[3];
          uVar4 = *(undefined4 *)((longlong)param_3 + 0x1c);
          lVar13 = param_3[4];
          uVar5 = *(undefined4 *)((longlong)param_3 + 0x24);
          lVar14 = param_3[5];
          uVar6 = *(undefined4 *)((longlong)param_3 + 0x2c);
          uVar7 = *(undefined4 *)((longlong)param_3 + 0x34);
          lVar15 = param_3[7];
          uVar8 = *(undefined4 *)((longlong)param_3 + 0x3c);
          *(int *)(plVar17 + 6) = (int)param_3[6];
          *(undefined4 *)((longlong)plVar17 + 0x34) = uVar7;
          *(int *)(plVar17 + 7) = (int)lVar15;
          *(undefined4 *)((longlong)plVar17 + 0x3c) = uVar8;
          *(int *)(plVar17 + 4) = (int)lVar13;
          *(undefined4 *)((longlong)plVar17 + 0x24) = uVar5;
          *(int *)(plVar17 + 5) = (int)lVar14;
          *(undefined4 *)((longlong)plVar17 + 0x2c) = uVar6;
          *(int *)(plVar17 + 2) = (int)lVar11;
          *(undefined4 *)((longlong)plVar17 + 0x14) = uVar3;
          *(int *)(plVar17 + 3) = (int)lVar12;
          *(undefined4 *)((longlong)plVar17 + 0x1c) = uVar4;
          *(int *)plVar17 = (int)lVar9;
          *(undefined4 *)((longlong)plVar17 + 4) = uVar1;
          *(int *)(plVar17 + 1) = (int)lVar10;
          *(undefined4 *)((longlong)plVar17 + 0xc) = uVar2;
          FUN_14021a8de(param_1,*param_4,1);
          *param_4 = iVar18;
          uVar16 = 1;
          goto LAB_14021a8b8;
        }
        iVar18 = (int)plVar17[8];
      } while (iVar18 != -1);
    }
    uVar16 = 0;
  }
LAB_14021a8b8:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar16;
  }
  return;
}



// FUNCTION 14021a8de FUN_14021a8de body=138 status=ok
// SIG undefined FUN_14021a8de(void)

void FUN_14021a8de(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x48 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x48) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      uVar4 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
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
      puVar7 = puVar7 + 0x12;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14021a968 FUN_14021a968 body=470 status=ok
// SIG undefined FUN_14021a968(void)

int * FUN_14021a968(longlong *param_1,int *param_2)

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
      FUN_14021b4e8(param_1,iVar11);
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
    iVar6 = *(int *)(*param_1 + 4 + lVar2 * 0x48);
    *(int *)(param_1 + 6) = iVar6;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x48) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar2 * 0x48 + *param_1;
  return param_2;
}



// FUNCTION 14021ab3e FUN_14021ab3e body=2472 status=ok
// SIG undefined FUN_14021ab3e(void)

undefined8
FUN_14021ab3e(undefined8 *param_1,longlong *param_2,char param_3,char param_4,undefined4 *param_5)

{
  longlong lVar1;
  longlong lVar2;
  short sVar3;
  char cVar4;
  ushort uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  code *pcVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  uint *puVar20;
  int iVar21;
  void *_Src;
  int iVar22;
  int iVar23;
  undefined8 uVar24;
  int iVar25;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  uint local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  wchar_t *local_108;
  code *local_100;
  undefined1 *local_f8;
  code **local_f0;
  code *local_e8;
  code *local_e0;
  char local_ca;
  char local_c9;
  undefined8 *local_c8;
  code *local_c0;
  longlong *local_b8;
  ulonglong local_b0;
  longlong *local_a8;
  code *local_a0;
  void *local_98;
  int local_90;
  undefined4 local_8c;
  code *local_88;
  void *pvStack_80;
  undefined8 local_78;
  longlong local_68;
  undefined8 local_60;
  code *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_ca = param_3;
  local_c9 = param_4;
  (**(code **)*param_1)(param_1,&local_58);
  local_c8 = param_1;
  local_b8 = param_2;
  if (local_50 != 0) {
    local_a8 = param_2 + 1;
    uVar14 = 0;
    local_c0 = local_58;
    pcVar16 = local_58;
    iVar17 = local_50;
    local_b0 = uVar14;
    do {
      while( true ) {
        if (iVar17 == 0) goto LAB_14021acae;
        iVar22 = iVar17 / 2;
        iVar19 = (int)uVar14 + iVar22;
        lVar7 = (longlong)iVar19;
        iVar23 = *(int *)(pcVar16 + lVar7 * 0x28) - (int)*param_2;
        if (iVar23 == 0) {
          iVar23 = *(int *)(pcVar16 + lVar7 * 0x28 + 4) - *(int *)((longlong)param_2 + 4);
        }
        if (iVar23 == 0) {
          plVar8 = (longlong *)FUN_144741050(pcVar16 + lVar7 * 0x28 + 8);
          iVar21 = 0;
          iVar25 = 0;
          uVar24 = 0;
          if (*plVar8 != 0) {
            uVar24 = *(undefined8 *)(*plVar8 + 0x18);
            iVar25 = (int)((ulonglong)uVar24 >> 0x20);
          }
          plVar8 = (longlong *)FUN_144741050(local_a8);
          uVar9 = 0;
          if (*plVar8 != 0) {
            uVar9 = *(undefined8 *)(*plVar8 + 0x18);
            iVar21 = (int)((ulonglong)uVar9 >> 0x20);
          }
          iVar23 = (int)uVar24 - (int)uVar9;
          uVar14 = local_b0;
          pcVar16 = local_c0;
          param_2 = local_b8;
          if (iVar23 == 0) {
            iVar23 = iVar25 - iVar21;
          }
        }
        if (-1 < iVar23) break;
        iVar17 = iVar17 % 2 + iVar22 + -1;
        uVar14 = (ulonglong)(iVar19 + 1);
        local_b0 = uVar14;
      }
      iVar17 = iVar22;
    } while (iVar23 != 0);
    if (param_5 != (undefined4 *)0x0) {
      *param_5 = *(undefined4 *)(local_58 + lVar7 * 0x28 + 0xc);
    }
    uVar24 = 0;
    goto LAB_14021b1a9;
  }
  local_b0 = 0;
LAB_14021acae:
  puVar15 = local_c8;
  plVar8 = (longlong *)FUN_144741050(param_2 + 1);
  local_68 = *plVar8;
  if ((local_68 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_60 = plVar8[1];
  local_88 = (code *)0x0;
  pvStack_80 = (void *)0x0;
  local_78 = 0;
  cVar4 = FUN_144a644ea();
  local_c0 = (code *)0x0;
  _Src = (void *)0x0;
  iVar17 = 0;
  if (cVar4 != '\0') {
    FUN_148112a40(&local_a0,&local_68);
    local_c0 = local_a0;
    pvStack_80 = local_98;
    local_78 = CONCAT44(local_8c,local_90);
    _Src = local_98;
    iVar17 = local_90;
    local_88 = local_c0;
  }
  plVar8 = puVar15 + 2;
  iVar23 = *(int *)(puVar15 + 3);
  *(int *)(puVar15 + 3) = iVar23 + 1;
  if (*(int *)((longlong)puVar15 + 0x1c) == iVar23) {
    FUN_141835126(plVar8,iVar23);
  }
  lVar11 = (longlong)(int)local_b0 * 0x28;
  memmove((void *)(*plVar8 + lVar11 + 0x28),(void *)(*plVar8 + lVar11),
          (ulonglong)(uint)(iVar23 - (int)local_b0) * 0x28);
  lVar10 = *plVar8;
  lVar7 = lVar10 + lVar11;
  FUN_144741050(param_2 + 1);
  plVar8 = (longlong *)(lVar10 + lVar11);
  *plVar8 = *param_2;
  uVar6 = FUN_144830b78(plVar8 + 1);
  *(undefined4 *)(plVar8 + 1) = uVar6;
  *(undefined4 *)((longlong)plVar8 + 0xc) = 0xffffffff;
  plVar8[2] = (longlong)local_c0;
  plVar8[3] = 0;
  *(int *)(plVar8 + 4) = iVar17;
  if (iVar17 == 0) {
    *(undefined4 *)(lVar7 + 0x24) = 0;
  }
  else {
    puVar15 = (undefined8 *)(lVar10 + lVar11 + 0x18);
    FUN_145cec054(puVar15,iVar17,0);
    memcpy((void *)*puVar15,_Src,(longlong)iVar17 * 0x14);
  }
  cVar4 = FUN_14487ac36();
  puVar15 = local_c8;
  if (cVar4 == '\0') {
    if ((short)local_60 == 3) {
      lVar10 = DAT_14cb420c0;
      if (DAT_14cb420c0 != 0) goto LAB_14021af67;
    }
    else if (((((local_68 != 0) && (lVar11 = FUN_1449e2fb2(), local_68 != 0)) && (lVar11 != 0)) &&
             ((lVar1 = *(longlong *)(local_68 + 0x10), lVar1 != 0 &&
              (*(int *)(lVar11 + 0x38) <= *(int *)(lVar1 + 0x38))))) &&
            (lVar10 = local_68,
            *(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) ==
            lVar11 + 0x30)) {
LAB_14021af67:
      if (DAT_14c927740 == 0) {
        local_f0 = &local_a0;
        local_a0 = FUN_1449e2820;
        local_e0 = FUN_14081d0ea;
        local_e8 = FUN_14081d0ea;
        local_f8 = &LAB_146856450;
        local_100 = FUN_1427b121c;
        local_108 = L"Engine";
        uStack_110 = 0;
        local_118 = CONCAT44(local_118._4_4_,0x10000021);
        local_120 = 8;
        local_128 = CONCAT44(local_128._4_4_,0x28);
        FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
        if (DAT_14c927740 == 0) goto LAB_14021af92;
      }
      if ((*(int *)(DAT_14c927740 + 0x38) <= *(int *)(lVar10 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(DAT_14c927740 + 0x38) * 8)
          == DAT_14c927740 + 0x30)) {
        iVar17 = *(int *)(puVar15 + 9);
        *(uint *)(puVar15 + 9) = iVar17 + 1U;
        if (*(uint *)((longlong)puVar15 + 0x4c) < iVar17 + 1U) {
          FUN_140845902(puVar15 + 8,iVar17);
        }
        *(undefined8 *)(puVar15[8] + (longlong)iVar17 * 8) = 0;
        *(int *)(lVar7 + 0xc) = iVar17;
        puVar20 = (uint *)(puVar15 + 0x10);
        uVar18 = 4;
        goto LAB_14021b171;
      }
    }
LAB_14021af92:
    uVar5 = local_60._4_2_;
    if (local_60._4_2_ == 0xffff) {
      if (local_68 == 0) {
LAB_14021b4d9:
        uVar5 = 0;
      }
      else {
        lVar10 = DAT_14cb420c0;
        if ((short)local_60 == 3) goto LAB_14021b361;
        if ((short)local_60 == 1) goto LAB_14021b4d9;
        lVar11 = FUN_1449e2fb2();
        if (local_68 == 0) {
LAB_14021b4b3:
          lVar10 = 0;
        }
        else {
          lVar10 = 0;
          if ((lVar11 != 0) && (lVar1 = *(longlong *)(local_68 + 0x10), lVar1 != 0)) {
            if (*(int *)(lVar1 + 0x38) < *(int *)(lVar11 + 0x38)) goto LAB_14021b4b3;
            lVar10 = 0;
            if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8)
                == lVar11 + 0x30) {
              lVar10 = local_68;
            }
          }
        }
LAB_14021b361:
        sVar3 = (short)*(undefined4 *)(lVar10 + 0x5c);
        uVar5 = -sVar3 & (sVar3 + (short)*(undefined4 *)(lVar10 + 0x58)) - 1U;
      }
      local_60._0_6_ = CONCAT24(uVar5,(undefined4)local_60);
      puVar15 = local_c8;
      param_2 = local_b8;
    }
    uVar18 = (uint)(short)uVar5;
    plVar8 = puVar15 + 4;
    iVar23 = *(int *)(puVar15 + 5);
    *(int *)(lVar7 + 0xc) = iVar23;
    lVar10 = param_2[3];
    if ((int)lVar10 < 1) {
LAB_14021b072:
      *(uint *)(puVar15 + 5) = iVar23 + uVar18;
      if ((uint)(*(int *)((longlong)puVar15 + 0x2c) - iVar23) < uVar18) {
        FUN_1447403be(plVar8);
      }
      memset((void *)((longlong)iVar23 + *plVar8),0,(longlong)(int)uVar18);
      plVar12 = local_b8;
    }
    else {
      plVar12 = (longlong *)FUN_144741050();
      uVar5 = *(ushort *)((longlong)plVar12 + 0xc);
      if (uVar5 == 0xffff) {
        if (*plVar12 == 0) {
LAB_14021b4e0:
          uVar5 = 0;
        }
        else {
          lVar11 = DAT_14cb420c0;
          if ((short)plVar12[1] == 3) goto LAB_14021b3ef;
          if ((short)plVar12[1] == 1) goto LAB_14021b4e0;
          lVar13 = FUN_1449e2fb2();
          lVar1 = *plVar12;
          if (lVar1 == 0) {
LAB_14021b4ba:
            lVar11 = 0;
          }
          else {
            lVar11 = 0;
            if ((lVar13 != 0) && (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 != 0)) {
              if (*(int *)(lVar2 + 0x38) < *(int *)(lVar13 + 0x38)) goto LAB_14021b4ba;
              lVar11 = 0;
              if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar13 + 0x38) * 8)
                  == lVar13 + 0x30) {
                lVar11 = lVar1;
              }
            }
          }
LAB_14021b3ef:
          sVar3 = (short)*(undefined4 *)(lVar11 + 0x5c);
          uVar5 = -sVar3 & (sVar3 + (short)*(undefined4 *)(lVar11 + 0x58)) - 1U;
        }
        *(ushort *)((longlong)plVar12 + 0xc) = uVar5;
        puVar15 = local_c8;
      }
      pcVar16 = local_c0;
      iVar23 = *(int *)(puVar15 + 5);
      if ((int)lVar10 != (int)(short)uVar5) goto LAB_14021b072;
      *(uint *)(puVar15 + 5) = iVar23 + uVar18;
      if ((uint)(*(int *)((longlong)puVar15 + 0x2c) - iVar23) < uVar18) {
        FUN_1447403be(plVar8,iVar23);
      }
      plVar12 = local_b8;
      if ((int)((ulonglong)pcVar16 >> 0x20) < 1 || ((int)local_c0 < 1 || iVar17 < 1)) {
        memcpy((void *)((longlong)*(int *)(lVar7 + 0xc) + *plVar8),(void *)local_b8[2],
               (longlong)(int)uVar18);
      }
      else {
        FUN_1481f8f7c(&local_88,(longlong)*(int *)(lVar7 + 0xc) + *plVar8,local_b8[2],1);
      }
    }
    *(byte *)(puVar15 + 0x10) = *(byte *)(puVar15 + 0x10) | 1;
    lVar10 = DAT_14cb42130;
    if ((DAT_14cb42130 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(DAT_14cb42130);
    }
    if (local_68 == lVar10) {
      if ((short)local_60 == DAT_14cb42138) {
        if (local_60._2_1_ == DAT_14cb4213a) {
          if ((longlong)*(int *)(puVar15 + 0xb) != 0) {
            lVar10 = 0;
            do {
              if (*(longlong *)(puVar15[10] + lVar10) == *plVar12) goto LAB_14021b173;
              lVar10 = lVar10 + 0x20;
            } while ((longlong)*(int *)(puVar15 + 0xb) * 0x20 != lVar10);
          }
          puVar20 = (uint *)(puVar15 + 0x10);
          FUN_1404e1b0c(puVar15,plVar12,&DAT_14c8464e0);
          uVar18 = 8;
          goto LAB_14021b171;
        }
      }
    }
  }
  else {
    plVar8 = local_c8 + 6;
    iVar17 = *(int *)(local_c8 + 7);
    *(uint *)(local_c8 + 7) = iVar17 + 1U;
    if (*(uint *)((longlong)local_c8 + 0x3c) < iVar17 + 1U) {
      FUN_14183529c(plVar8,iVar17);
    }
    *(undefined8 *)(*plVar8 + (longlong)iVar17 * 8) = 0;
    *(int *)(lVar7 + 0xc) = iVar17;
    if (local_ca == '\0') {
      plVar8 = (longlong *)((longlong)iVar17 * 8 + *plVar8);
      lVar10 = 0;
      puVar15 = local_c8;
    }
    else {
      uVar24 = 0;
      lVar10 = 0;
      if ((short)local_60 == 1) {
        lVar10 = local_68;
      }
      if (*(int *)((longlong)local_c8 + 0xc) != 0) {
        uVar18 = *(uint *)(local_c8 + 1);
        uVar24 = 0;
        if ((-1 < (int)uVar18) && ((int)uVar18 < DAT_14c9647dc)) {
          puVar15 = (undefined8 *)
                    ((ulonglong)((uVar18 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar18 >> 0x10) * 8));
          if ((puVar15 == (undefined8 *)0x0) ||
             ((*(int *)(puVar15 + 2) != *(int *)((longlong)local_c8 + 0xc) ||
              ((*(uint *)(puVar15 + 1) & 0x10200000) != 0)))) {
            uVar24 = 0;
          }
          else {
            uVar24 = *puVar15;
          }
        }
      }
      local_118 = 0;
      uStack_110 = 0;
      local_120 = local_120 & 0xffffff00;
      local_128 = 0;
      lVar10 = FUN_141821fc0(uVar24,lVar10,0,9);
      puVar15 = local_c8;
      plVar8 = (longlong *)((longlong)*(int *)(lVar7 + 0xc) * 8 + *plVar8);
      if ((lVar10 != 0) && (DAT_14c950c29 != 0)) {
        FUN_1456cec3c(lVar10);
      }
    }
    *plVar8 = lVar10;
    puVar20 = (uint *)(puVar15 + 0x10);
    uVar18 = 2;
LAB_14021b171:
    *puVar20 = *puVar20 | uVar18;
  }
LAB_14021b173:
  if (local_c9 == '\0') {
    *(int *)((longlong)puVar15 + 0x84) = *(int *)((longlong)puVar15 + 0x84) + 1;
  }
  else {
    FUN_140219f72(puVar15);
  }
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = *(undefined4 *)(lVar7 + 0xc);
  }
  if (pvStack_80 != (void *)0x0) {
    FUN_1400020a8();
  }
  uVar24 = 1;
LAB_14021b1a9:
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar24;
}



// FUNCTION 14021b4e8 FUN_14021b4e8 body=169 status=ok
// SIG undefined FUN_14021b4e8(void)

void FUN_14021b4e8(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0x48;
    if (DAT_14c872d28 != (longlong *)0x0) {
      uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
    }
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x48)) {
      uVar5 = uVar4 / 0x48 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x48,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14021b592 FUN_14021b592 body=1128 status=ok
// SIG undefined FUN_14021b592(void)

void FUN_14021b592(longlong *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  ushort uVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  ulonglong *puVar7;
  longlong *plVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  uint uVar20;
  uint uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  
  plVar8 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar8,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar21 = *(uint *)(param_1 + 9);
  if (uVar21 == 1) {
    if (*plVar8 != 0) {
      FUN_1446efa72(plVar8,0,0,4);
    }
  }
  else {
    if (uVar21 == 0) {
      return;
    }
    FUN_1446efa72(plVar8,0,uVar21,4);
    if ((int)uVar21 < 1) goto LAB_14021b5f8;
  }
  uVar5 = 0;
  do {
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = plVar1;
    }
    *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar5) * 4) =
         0xffffffff;
    uVar5 = uVar5 + 1;
  } while (uVar21 != uVar5);
LAB_14021b5f8:
  iVar6 = (int)param_1[5];
  if (iVar6 == 0) {
    uVar23 = 0;
    uVar22 = 1;
    iVar9 = 0;
    iVar16 = 0;
  }
  else {
    puVar12 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar12 = (uint *)(param_1 + 2);
    }
    uVar21 = *puVar12;
    if (uVar21 == 0) {
      iVar16 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar16 = iVar6 + -1;
      }
      uVar23 = 0;
      uVar22 = (ulonglong)(uint)(iVar16 >> 5);
      if (iVar16 >> 5 < 1) {
        uVar22 = uVar23;
      }
      iVar16 = 0;
      do {
        if (uVar22 == uVar23) {
          return;
        }
        iVar16 = iVar16 + 0x20;
        uVar21 = puVar12[uVar23 + 1];
        uVar23 = uVar23 + 1;
      } while (uVar21 == 0);
    }
    else {
      uVar23 = 0;
      iVar16 = 0;
    }
    uVar22 = (ulonglong)(-uVar21 & uVar21);
    uVar13 = uVar22 * 2 + 1;
    lVar19 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    iVar9 = (iVar16 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
    if (iVar6 <= iVar9) {
      iVar9 = iVar6;
    }
  }
  if (iVar9 < iVar6) {
    uVar21 = 0xffffffff;
    do {
      puVar2 = (undefined8 *)(*param_1 + (longlong)iVar9 * 0x48);
      uVar4 = *puVar2;
      uVar5 = (uint)((ulonglong)uVar4 >> 0x10);
      uVar17 = (uint)uVar4 & 0xffff;
      uVar15 = ((uint)uVar4 << 0x10 | uVar17) + (int)((ulonglong)uVar4 >> 0x20) +
               (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar17 >> 4);
      puVar7 = (ulonglong *)FUN_144741050(puVar2 + 1);
      uVar3 = (ushort)puVar7[1];
      uVar5 = ((uint)(*puVar7 >> 0x14) & 0xffff ^ (uint)(*puVar7 >> 4)) * -0x7a143595;
      uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
      uVar5 = (uint)(uVar3 >> 0xd) ^ (uVar5 >> 0x10 ^ uVar5) - (uint)uVar3;
      uVar17 = uVar5 << 8 ^ (-0x61c88647 - uVar5) - (uint)uVar3;
      uVar18 = uVar17 >> 0xd ^ (uVar3 - uVar5) - uVar17;
      uVar5 = uVar18 >> 0xc ^ (uVar5 - uVar17) - uVar18;
      uVar20 = uVar5 << 0x10 ^ (uVar17 - uVar18) - uVar5;
      uVar17 = uVar20 >> 5 ^ (uVar18 - uVar5) - uVar20;
      uVar18 = uVar17 >> 3 ^ (uVar5 - uVar20) - uVar17;
      uVar5 = uVar18 << 10 ^ (uVar20 - uVar17) - uVar18;
      uVar5 = uVar5 >> 0xf ^ uVar17 - (uVar18 + uVar5);
      iVar6 = uVar5 - *(byte *)((longlong)puVar7 + 10);
      uVar5 = iVar6 * 0x100 ^ 0x9e3779b9 - uVar5;
      uVar18 = uVar5 >> 0xd ^ ((uint)*(byte *)((longlong)puVar7 + 10) - iVar6) - uVar5;
      uVar17 = uVar18 >> 0xc ^ (iVar6 - uVar5) - uVar18;
      uVar5 = uVar17 << 0x10 ^ (uVar5 - uVar18) - uVar17;
      uVar18 = uVar5 >> 5 ^ (uVar18 - uVar17) - uVar5;
      uVar17 = uVar18 >> 3 ^ (uVar17 - uVar5) - uVar18;
      uVar5 = uVar17 << 10 ^ (uVar5 - uVar18) - uVar17;
      uVar5 = uVar15 >> 0xd ^ (uVar5 >> 0xf ^ uVar18 - (uVar17 + uVar5)) - uVar15;
      uVar17 = uVar5 << 8 ^ (-0x61c88647 - uVar15) - uVar5;
      uVar18 = uVar17 >> 0xd ^ (uVar15 - uVar5) - uVar17;
      uVar15 = uVar18 >> 0xc ^ (uVar5 - uVar17) - uVar18;
      uVar5 = uVar15 << 0x10 ^ (uVar17 - uVar18) - uVar15;
      uVar17 = uVar5 >> 5 ^ (uVar18 - uVar15) - uVar5;
      uVar18 = uVar17 >> 3 ^ (uVar15 - uVar5) - uVar17;
      uVar5 = uVar18 << 10 ^ (uVar5 - uVar17) - uVar18;
      uVar13 = (longlong)(int)(uVar5 >> 0xf ^ uVar17 - (uVar18 + uVar5)) &
               (longlong)(int)param_1[9] - 1U;
      iVar6 = (int)uVar13;
      *(int *)((longlong)puVar2 + 0x44) = iVar6;
      plVar8 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar8 = plVar1;
      }
      *(undefined4 *)(puVar2 + 8) =
           *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar13) * 4);
      plVar8 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar8 = plVar1;
      }
      *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar9;
      uVar21 = ~(uint)uVar22 & uVar21;
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = (uint *)(param_1 + 2);
      }
      iVar6 = (int)param_1[5];
      iVar9 = (int)uVar23;
      lVar19 = (longlong)iVar9;
      uVar5 = puVar12[lVar19] & uVar21;
      if (uVar5 == 0) {
        iVar10 = iVar6 + 0x1e;
        if (-1 < iVar6 + -1) {
          iVar10 = iVar6 + -1;
        }
        iVar10 = iVar10 >> 5;
        iVar11 = iVar10;
        if (iVar10 < iVar9) {
          iVar11 = iVar9;
        }
        if (iVar10 <= iVar9) {
          return;
        }
        lVar14 = 0;
        while( true ) {
          iVar16 = iVar16 + 0x20;
          uVar5 = puVar12[lVar19 + lVar14 + 1];
          if (uVar5 != 0) break;
          lVar14 = lVar14 + 1;
          if (iVar11 - lVar19 == lVar14) {
            return;
          }
        }
        uVar23 = (ulonglong)(iVar9 + (int)lVar14 + 1);
        uVar21 = 0xffffffff;
      }
      uVar22 = (ulonglong)(-uVar5 & uVar5);
      uVar13 = uVar22 * 2 + 1;
      lVar19 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      iVar9 = (iVar16 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
    } while (iVar9 < iVar6);
  }
  return;
}



// FUNCTION 14021b9fa FUN_14021b9fa body=216 status=ok
// SIG undefined FUN_14021b9fa(void)

int FUN_14021b9fa(longlong *param_1,longlong *param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  iVar1 = (int)param_1[1];
  iVar5 = iVar1;
  if (0 < iVar1) {
    uVar6 = 0;
    bVar4 = 0;
    do {
      lVar2 = *param_1;
      lVar3 = *param_2;
      if ((lVar3 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar3);
        iVar5 = (int)param_1[1];
      }
      if (*(longlong *)(lVar2 + (longlong)(int)uVar6 * 8) == lVar3) {
        iVar7 = ~uVar6 + iVar5;
        if (iVar7 != 0) {
          if (0 < iVar7) {
            iVar7 = 1;
          }
          memmove((void *)(*param_1 + (longlong)(int)uVar6 * 8),
                  (void *)(*param_1 + (longlong)(iVar5 - iVar7) * 8),(longlong)iVar7 << 3);
          iVar5 = (int)param_1[1];
        }
        uVar6 = uVar6 - 1;
        iVar5 = iVar5 + -1;
        *(int *)(param_1 + 1) = iVar5;
        bVar4 = 1;
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < iVar5);
    if ((bool)(param_3 == '\x01' & bVar4)) {
      FUN_14021c7da(param_1);
      iVar5 = (int)param_1[1];
    }
  }
  return iVar1 - iVar5;
}



// FUNCTION 14021bad2 FUN_14021bad2 body=151 status=ok
// SIG undefined FUN_14021bad2(void)

void FUN_14021bad2(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((((param_2 != 0) && (param_1 != 0)) && (DAT_14cb0d2b0 != 0)) &&
     ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) != 0)) {
    lVar3 = 0;
    do {
      lVar4 = *(longlong *)(*(longlong *)(DAT_14cb0d2b0 + 0x1148) + lVar3);
      if (*(longlong *)(lVar4 + 0x360) == param_1) {
        if (lVar4 == 0) {
          return;
        }
        iVar1 = *(int *)(lVar4 + 0x2b8);
        if ((longlong)iVar1 == 0) {
          return;
        }
        lVar3 = *(longlong *)(lVar4 + 0x2b0);
        lVar4 = 0;
        do {
          lVar2 = *(longlong *)(lVar3 + lVar4);
          if (lVar2 != 0) {
            FUN_14021bb6a(lVar2,param_2);
          }
          lVar4 = lVar4 + 0x10;
        } while ((longlong)iVar1 * 0x10 != lVar4);
        return;
      }
      lVar3 = lVar3 + 8;
    } while ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) * 8 != lVar3);
  }
  return;
}



// FUNCTION 14021bb6a FUN_14021bb6a body=279 status=ok
// SIG undefined FUN_14021bb6a(void)

void FUN_14021bb6a(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  
  cVar2 = (**(code **)(*param_1 + 0x3c0))();
  if ((((((param_2 != 0) && (cVar2 != '\0')) && (DAT_14c76162c == 0)) &&
       ((DAT_14c7615ec != 0 && ((*(uint *)(param_2 + 8) >> 0x1e & 1) == 0)))) &&
      (((*(byte *)(param_2 + 0x65) & 2) == 0 &&
       ((lVar3 = FUN_144a79cc8(param_2), lVar3 != 0 && ((*(uint *)(lVar3 + 8) >> 0x1e & 1) == 0)))))
      ) && ((lVar3 = FUN_144a79cc8(param_2), (*(byte *)(lVar3 + 0x240) & 0x20) == 0 &&
            ((cVar2 = FUN_1449e2a3e(param_2), cVar2 == '\0' && (0 < (longlong)(int)param_1[0x20]))))
           )) {
    uVar5 = (longlong)(int)param_1[0x20] + 1;
    do {
      plVar1 = *(longlong **)(param_1[0x1f] + -0x10 + uVar5 * 8);
      if (plVar1 != (longlong *)0x0) {
        uVar4 = FUN_144a79cc8(param_2);
        cVar2 = (**(code **)(*plVar1 + 0x388))(plVar1,uVar4);
        if (cVar2 != '\0') {
          FUN_143598a62(param_1,param_2,plVar1);
        }
      }
      uVar5 = uVar5 - 1;
    } while (1 < uVar5);
  }
  FUN_14021bc82(param_1 + 0x9a,*(undefined8 *)(param_2 + 0x18));
  plVar1 = (longlong *)param_1[0x106];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x2e0))(plVar1,param_2);
  }
  FUN_14021bd22(param_1[0x10b],param_2);
  return;
}



// FUNCTION 14021bc82 FUN_14021bc82 body=160 status=ok
// SIG undefined FUN_14021bc82(void)

undefined8 FUN_14021bc82(longlong *param_1,longlong param_2)

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
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x18) == param_2) {
          FUN_147023ed8(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x18 + 0x10);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 14021bd22 FUN_14021bd22 body=1772 status=ok
// SIG undefined FUN_14021bd22(void)

void FUN_14021bd22(longlong *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong *plVar4;
  int *piVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  int iVar14;
  longlong lVar15;
  ulonglong *puVar16;
  int iVar17;
  ulonglong uVar18;
  ulonglong *puVar19;
  bool bVar20;
  undefined1 auStack_a8 [32];
  ulonglong local_88;
  longlong *local_80;
  ulonglong local_78;
  ulonglong local_70;
  uint local_64;
  ulonglong *local_60;
  ulonglong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((param_2 != 0) && ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    uVar3 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar4 +
                    (ulonglong)((int)param_1[9] - 1U & (uVar3 >> 0x10 ^ uVar3)) * 4);
    if (iVar7 != -1) {
      do {
        puVar1 = (undefined8 *)(*param_1 + (longlong)iVar7 * 0x18);
        puVar19 = (ulonglong *)*puVar1;
        if (*puVar19 == param_2) {
          if (puVar1 != (undefined8 *)0x0) {
            uVar13 = 0;
            local_70 = 0;
            local_78 = 0;
            if (DAT_14caf2744 == '\x01') {
              uVar6 = FUN_144a79cc8(param_2);
              lVar15 = FUN_144b00ba4(uVar6);
              local_78 = *(ulonglong *)(lVar15 + 0x18);
              local_70 = local_78 >> 0x20;
              puVar19 = (ulonglong *)*puVar1;
            }
            iVar7 = (int)puVar19[0xb];
            uVar18 = 1;
            iVar17 = 0;
            iVar14 = 0;
            if (iVar7 == 0) goto LAB_14021be2a;
            puVar16 = (ulonglong *)puVar19[10];
            if ((ulonglong *)puVar19[10] == (ulonglong *)0x0) {
              puVar16 = puVar19 + 8;
            }
            uVar3 = (uint)*puVar16;
            if (uVar3 != 0) {
              uVar13 = 0;
              goto LAB_14021bf57;
            }
            iVar14 = iVar7 + 0x1e;
            if (-1 < iVar7 + -1) {
              iVar14 = iVar7 + -1;
            }
            uVar13 = 0;
            uVar18 = (ulonglong)(uint)(iVar14 >> 5);
            if (iVar14 >> 5 < 1) {
              uVar18 = uVar13;
            }
            iVar17 = 0;
            goto LAB_14021bf3d;
          }
          break;
        }
        iVar7 = *(int *)(puVar1 + 2);
      } while (iVar7 != -1);
    }
  }
  goto LAB_14021bdb9;
  while (iVar7 = *(int *)(lVar15 + 0x58), iVar7 != -1) {
LAB_14021c368:
    lVar15 = *local_80 + (longlong)iVar7 * 0x60;
    if (*(ulonglong *)(*local_80 + (longlong)iVar7 * 0x60) == local_88) {
      if ((lVar15 + 8 != 0 && lVar15 != 0) &&
         (FUN_14021c410(lVar15 + 8,param_2), *(int *)(lVar15 + 0x10) == *(int *)(lVar15 + 0x3c))) {
        FUN_147be0eb0(local_80,local_88);
      }
      break;
    }
  }
LAB_14021c08c:
  uVar3 = local_64 & ~(uint)uVar18;
  puVar16 = (ulonglong *)puVar19[10];
  if ((ulonglong *)puVar19[10] == (ulonglong *)0x0) {
    puVar16 = puVar19 + 8;
  }
  iVar7 = (int)puVar19[0xb];
  iVar14 = (int)uVar13;
  lVar15 = (longlong)iVar14;
  uVar8 = *(uint *)((longlong)puVar16 + lVar15 * 4) & uVar3;
  if (uVar8 == 0) {
    iVar9 = iVar7 + 0x1e;
    if (-1 < iVar7 + -1) {
      iVar9 = iVar7 + -1;
    }
    iVar9 = iVar9 >> 5;
    iVar10 = iVar9;
    if (iVar9 < iVar14) {
      iVar10 = iVar14;
    }
    if (iVar9 <= iVar14) goto LAB_14021be32;
    lVar12 = 0;
    while( true ) {
      iVar17 = iVar17 + 0x20;
      uVar8 = *(uint *)((longlong)puVar16 + lVar12 * 4 + lVar15 * 4 + 4);
      if (uVar8 != 0) break;
      lVar12 = lVar12 + 1;
      if (iVar10 - lVar15 == lVar12) goto LAB_14021be32;
    }
    uVar13 = (ulonglong)(iVar14 + (int)lVar12 + 1);
    uVar3 = 0xffffffff;
  }
  uVar18 = (ulonglong)(-uVar8 & uVar8);
  uVar2 = uVar18 * 2 + 1;
  lVar15 = 0x3f;
  if (uVar2 != 0) {
    for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
    }
  }
  iVar14 = (iVar17 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
  if (iVar7 <= iVar14) goto LAB_14021be32;
  goto LAB_14021bf90;
  while( true ) {
    iVar17 = iVar17 + 0x20;
    uVar3 = *(uint *)((longlong)puVar16 + uVar13 * 4 + 4);
    uVar13 = uVar13 + 1;
    if (uVar3 != 0) break;
LAB_14021bf3d:
    if (uVar18 == uVar13) goto LAB_14021be32;
  }
LAB_14021bf57:
  uVar18 = (ulonglong)(-uVar3 & uVar3);
  uVar2 = uVar18 * 2 + 1;
  lVar15 = 0x3f;
  if (uVar2 != 0) {
    for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
    }
  }
  iVar14 = (iVar17 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
  if (iVar7 <= iVar14) {
    iVar14 = iVar7;
  }
LAB_14021be2a:
  if (iVar14 < iVar7) {
    local_60 = puVar19 + 6;
    uVar3 = 0xffffffff;
LAB_14021bf90:
    iVar7 = *(int *)(*local_60 + 4 + (longlong)iVar14 * 0x10);
    local_64 = uVar3;
    if (((((iVar7 == 0) || (uVar3 = *(uint *)(*local_60 + (longlong)iVar14 * 0x10), (int)uVar3 < 0))
         || (DAT_14c9647dc <= (int)uVar3)) ||
        ((puVar16 = (ulonglong *)
                    ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
         puVar16 == (ulonglong *)0x0 || ((int)puVar16[2] != iVar7)))) ||
       (((puVar16[1] & 0x10200000) != 0 || (uVar2 = *puVar16, uVar2 == 0)))) {
      if (DAT_14caf2744 != '\0') {
        local_58 = 0;
LAB_14021c397:
        FUN_147be0c8e(param_1 + 0x3c,&local_58);
      }
LAB_14021c13f:
      FUN_14096bd5a(local_60,iVar14);
    }
    else {
      if (*(int *)(uVar2 + 0x134) == 1) {
        if (DAT_14caf2744 != '\0') {
          local_50 = 0;
          FUN_14485c47a();
          local_58 = local_50;
          goto LAB_14021c397;
        }
        goto LAB_14021c13f;
      }
      uVar3 = *(uint *)(uVar2 + 0xc);
      local_50 = (ulonglong)uVar3;
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar15 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar15 = 0;
      }
      uVar8 = *(uint *)(lVar15 + 0x10);
      local_88 = uVar2;
      if (*(uint *)(lVar15 + 0x10) == 0) {
        LOCK();
        iVar7 = DAT_14c964868 + 1;
        UNLOCK();
        iVar14 = DAT_14c964868 + 1;
        local_80 = (longlong *)CONCAT44(local_80._4_4_,iVar14);
        bVar20 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar7;
        if (bVar20) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar14);
        }
        LOCK();
        uVar8 = *(uint *)(lVar15 + 0x10);
        bVar20 = uVar8 == 0;
        if (bVar20) {
          *(uint *)(lVar15 + 0x10) = (uint)local_80;
          uVar8 = 0;
        }
        UNLOCK();
        uVar3 = (uint)local_50;
        if (bVar20) {
          uVar8 = (uint)local_80;
        }
      }
      local_50._0_4_ = uVar3;
      local_50 = CONCAT44(uVar8,(uint)local_50);
      piVar5 = (int *)FUN_14021c682(param_1 + 0x28,uVar8 ^ (uint)local_50,&local_50);
      *piVar5 = *piVar5 + -1;
      if (DAT_14caf2744 == '\x01') {
        local_50 = 0;
        FUN_14485c47a(&local_50,local_88);
        iVar7 = (uint)local_50;
        local_88 = CONCAT44(local_88._4_4_,local_50._4_4_);
        uVar3 = FUN_144a78877(local_50 & 0xffffffff);
        if ((int)param_1[0x3d] != *(int *)((longlong)param_1 + 0x214)) {
          plVar4 = param_1 + 0x43;
          if ((longlong *)param_1[0x44] != (longlong *)0x0) {
            plVar4 = (longlong *)param_1[0x44];
          }
          iVar14 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[0x45] - 1U & uVar3) * 4);
          if (iVar14 != -1) {
            lVar15 = param_1[0x3c];
            do {
              lVar11 = (longlong)iVar14 * 0x60;
              lVar12 = lVar15 + lVar11;
              if ((*(int *)(lVar15 + lVar11) == iVar7) &&
                 (*(int *)(lVar15 + 4 + lVar11) == (int)local_88)) {
                local_80 = (longlong *)(lVar12 + 8);
                if ((local_80 != (longlong *)0x0 && lVar12 != 0) &&
                   (*(int *)(lVar12 + 0x10) != *(int *)(lVar12 + 0x3c))) {
                  uVar3 = (uint)(local_78 >> 0x10);
                  uVar8 = (uint)local_78 & 0xffff;
                  lVar15 = lVar12 + 0x40;
                  if (*(longlong *)(lVar12 + 0x48) != 0) {
                    lVar15 = *(longlong *)(lVar12 + 0x48);
                  }
                  iVar7 = *(int *)(lVar15 + (ulonglong)
                                            (*(int *)(lVar12 + 0x50) - 1U &
                                            (uint)local_78 * 0x10000 + (int)local_70 + uVar8 +
                                            (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar8 >> 4)) * 4);
                  if (iVar7 != -1) {
                    local_88 = local_78 & 0xffffffff | local_70 << 0x20;
                    goto LAB_14021c368;
                  }
                }
                break;
              }
              iVar14 = *(int *)(lVar12 + 0x58);
            } while (iVar14 != -1);
          }
        }
      }
    }
    goto LAB_14021c08c;
  }
LAB_14021be32:
  FUN_14021c410(param_1,param_2);
  FUN_14021c410(param_1 + 10,param_2);
  FUN_14021c410(param_1 + 0x14,param_2);
  if ((DAT_14caf2744 != '\0') && ((int)param_1[0x33] != *(int *)((longlong)param_1 + 0x1c4))) {
    uVar3 = (uint)(local_78 >> 0x10);
    uVar8 = (uint)local_78 & 0xffff;
    plVar4 = param_1 + 0x39;
    if ((longlong *)param_1[0x3a] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[0x3a];
    }
    iVar7 = *(int *)((longlong)plVar4 +
                    (ulonglong)
                    ((int)param_1[0x3b] - 1U &
                    (uint)local_78 * 0x10000 + (int)local_70 + uVar8 +
                    (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar8 >> 4)) * 4);
    if (iVar7 != -1) {
      uVar13 = local_78 & 0xffffffff | local_70 << 0x20;
      lVar15 = param_1[0x32];
      do {
        lVar12 = lVar15 + (longlong)iVar7 * 0x60;
        if (*(ulonglong *)(lVar15 + (longlong)iVar7 * 0x60) == uVar13) {
          if ((lVar12 + 8 != 0 && lVar12 != 0) &&
             (FUN_14021c410(lVar12 + 8,param_2), *(int *)(lVar12 + 0x10) == *(int *)(lVar12 + 0x3c))
             ) {
            FUN_147be0eb0(param_1 + 0x32,uVar13);
          }
          break;
        }
        iVar7 = *(int *)(lVar12 + 0x58);
      } while (iVar7 != -1);
    }
  }
LAB_14021bdb9:
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14021c410 FUN_14021c410 body=253 status=ok
// SIG undefined FUN_14021c410(void)

undefined8 FUN_14021c410(longlong *param_1,ulonglong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  int *piVar6;
  int iVar7;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar4 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar5 +
                    ((longlong)(int)(uVar4 >> 0x10 ^ uVar4) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar7 != -1) {
      do {
        puVar2 = (undefined8 *)(*param_1 + (longlong)iVar7 * 0x18);
        if (*(ulonglong *)*puVar2 == param_2) {
          iVar3 = *(int *)((longlong)plVar5 + (longlong)*(int *)((longlong)puVar2 + 0x14) * 4);
          if (iVar3 == iVar7) {
            piVar6 = (int *)((longlong)plVar5 + (longlong)*(int *)((longlong)puVar2 + 0x14) * 4);
          }
          else {
            do {
              piVar6 = (int *)(*param_1 + (longlong)iVar3 * 0x18 + 0x10);
              iVar3 = *piVar6;
            } while (iVar3 != iVar7);
          }
          *piVar6 = *(int *)(puVar2 + 2);
          plVar5 = *(longlong **)(*param_1 + 8 + (longlong)iVar7 * 0x18);
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar5 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plVar5)(plVar5);
              LOCK();
              piVar6 = (int *)((longlong)plVar5 + 0xc);
              *piVar6 = *piVar6 + -1;
              UNLOCK();
              if (*piVar6 == 0) {
                (**(code **)(*plVar5 + 0x10))(plVar5);
              }
            }
          }
          FUN_14021c50e(param_1,iVar7);
          return 1;
        }
        iVar7 = *(int *)(puVar2 + 2);
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 14021c50e FUN_14021c50e body=114 status=ok
// SIG undefined FUN_14021c50e(void)

void FUN_14021c50e(longlong *param_1,int param_2)

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



// FUNCTION 14021c580 FUN_14021c580 body=113 status=ok
// SIG undefined FUN_14021c580(void)

void FUN_14021c580(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 200) = 0;
    if (*(longlong *)(lVar1 + 0xc0) != 0) {
      FUN_1400020a8();
    }
    FUN_14021c5f2(lVar1 + 0x80);
    *(undefined4 *)(lVar1 + 0x78) = 0;
    if (*(longlong *)(lVar1 + 0x70) != 0) {
      FUN_1400020a8();
    }
    FUN_14021c5f2(lVar1 + 0x30);
    FUN_1400020a8(lVar1);
    return;
  }
  return;
}



// FUNCTION 14021c5f2 FUN_14021c5f2 body=53 status=ok
// SIG undefined FUN_14021c5f2(void)

void FUN_14021c5f2(longlong *param_1)

{
  FUN_14021c628();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14021c628 FUN_14021c628 body=90 status=ok
// SIG undefined FUN_14021c628(void)

void FUN_14021c628(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14472eb64(param_1,0);
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



// FUNCTION 14021c682 FUN_14021c682 body=238 status=ok
// SIG undefined FUN_14021c682(void)

longlong FUN_14021c682(longlong *param_1,uint param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      lVar5 = *param_1;
      do {
        local_48 = *param_3;
        lVar4 = (longlong)iVar2;
        local_40 = *(undefined8 **)(lVar5 + lVar4 * 0x14);
        cVar1 = FUN_14021c772(&local_40,&local_48);
        lVar5 = *param_1;
        if (cVar1 != '\0') {
          if (lVar5 + lVar4 * 0x14 != 0) {
            lVar5 = lVar5 + lVar4 * 0x14;
            goto LAB_14021c74c;
          }
          break;
        }
        iVar2 = *(int *)(lVar5 + 0xc + lVar4 * 0x14);
      } while (iVar2 != -1);
    }
  }
  local_40 = param_3;
  FUN_1456e767e(param_1,&local_48,param_2);
  lVar5 = *param_1 + (longlong)(int)local_48 * 0x14;
LAB_14021c74c:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar5 + 8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14021c772 FUN_14021c772 body=104 status=ok
// SIG undefined FUN_14021c772(void)

ulonglong FUN_14021c772(uint *param_1,uint *param_2)

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



// FUNCTION 14021c7da FUN_14021c7da body=64 status=ok
// SIG undefined FUN_14021c7da(void)

void FUN_14021c7da(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14021c81a(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 14021c81a FUN_14021c81a body=87 status=ok
// SIG undefined FUN_14021c81a(void)

ulonglong FUN_14021c81a(undefined8 param_1,uint param_2,uint param_3)

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



// FUNCTION 14021c872 FUN_14021c872 body=244 status=ok
// SIG undefined FUN_14021c872(void)

void FUN_14021c872(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(param_1 + 0x28) != 0x7fffffff) {
    local_58 = 0;
    uStack_50 = 0;
    FUN_1448ff602();
    iVar1 = *(int *)(param_1 + 0xb8);
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(param_1 + 0xb0);
      lVar3 = 0;
      do {
        lVar4 = *(longlong *)(lVar2 + lVar3);
        if ((*(byte *)(lVar4 + 0x90) & 0x88) == 0) {
          FUN_14021c968(param_1,lVar4,&local_58);
        }
        lVar3 = lVar3 + 8;
      } while ((longlong)iVar1 * 8 != lVar3);
    }
    lVar2 = local_58;
    lVar3 = (longlong)(int)uStack_50;
    if (lVar3 != 0) {
      lVar4 = 0;
      do {
        if (*(longlong *)(lVar2 + lVar4) != 0) {
          local_40 = *(longlong *)(lVar2 + lVar4);
          (*(code *)*param_2)(param_2[1],&local_40);
        }
        lVar4 = lVar4 + 8;
      } while (lVar3 * 8 != lVar4);
    }
    if (local_58 != 0) {
      FUN_1400020a8(local_58);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14021c968 FUN_14021c968 body=346 status=ok
// SIG undefined FUN_14021c968(void)

void FUN_14021c968(longlong param_1,longlong *param_2,longlong *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  char cVar13;
  longlong lVar14;
  
  lVar10 = param_2[1];
  if ((longlong)(int)lVar10 != 0) {
    lVar6 = *param_2;
    lVar14 = 0;
    do {
      plVar7 = *(longlong **)(lVar6 + lVar14);
      if ((((0.0 < *(float *)(plVar7 + 8)) || (0.0 < *(float *)((longlong)plVar7 + 0x44))) &&
          (plVar8 = (longlong *)*plVar7, plVar8 != (longlong *)0x0)) &&
         (1 < *(byte *)((longlong)plVar8 + 0xc))) {
        lVar11 = *plVar8;
        lVar12 = (longlong)(int)plVar8[1];
        lVar9 = *(longlong *)(lVar11 + 0x278);
        fVar1 = *(float *)(lVar9 + 8 + lVar12 * 0xc);
        fVar2 = *(float *)(lVar9 + 4 + lVar12 * 0xc);
        fVar3 = *(float *)(lVar9 + lVar12 * 0xc);
        if (*(float *)(plVar7 + 8) <= fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2) {
LAB_14021cab0:
          cVar13 = '\0';
        }
        else {
          lVar9 = *(longlong *)(lVar11 + 0x290);
          fVar1 = *(float *)(lVar9 + 8 + lVar12 * 0xc);
          fVar2 = *(float *)(lVar9 + lVar12 * 0xc);
          fVar3 = *(float *)(lVar9 + 4 + lVar12 * 0xc);
          if (*(float *)((longlong)plVar7 + 0x44) <= fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3)
          goto LAB_14021cab0;
          cVar4 = *(char *)(*(longlong *)(lVar11 + 0x4e8) + lVar12);
          cVar13 = cVar4 + '\x01';
          if (*(int *)(param_1 + 0x28) <= (int)cVar4) {
            iVar5 = (int)param_3[1];
            *(uint *)(param_3 + 1) = iVar5 + 1U;
            if (*(uint *)((longlong)param_3 + 0xc) < iVar5 + 1U) {
              FUN_1406b7a4a(param_3,iVar5);
            }
            *(longlong **)(*param_3 + (longlong)iVar5 * 8) = plVar8;
            lVar11 = *plVar8;
            lVar12 = (longlong)(int)plVar8[1];
          }
        }
        *(char *)(*(longlong *)(lVar11 + 0x4e8) + lVar12) = cVar13;
      }
      lVar14 = lVar14 + 8;
    } while ((longlong)(int)lVar10 * 8 != lVar14);
  }
  return;
}



// FUNCTION 14021cac2 FUN_14021cac2 body=98 status=ok
// SIG undefined FUN_14021cac2(void)

undefined8 FUN_14021cac2(longlong *param_1)

{
  longlong lVar1;
  float *in_stack_00000028;
  float *in_stack_00000030;
  
  *in_stack_00000028 = 0.0;
  *in_stack_00000030 = 0.0;
  if ((((param_1 != (longlong *)0x0) && (1 < *(byte *)((longlong)param_1 + 0xc))) &&
      (*(char *)(*(longlong *)(*param_1 + 0x4b8) + (longlong)(int)param_1[1]) != '\x01')) &&
     (lVar1 = FUN_140185558(), lVar1 != 0)) {
    *in_stack_00000028 = (float)*(double *)(lVar1 + 0x40);
    *in_stack_00000030 = (float)*(double *)(lVar1 + 0x48);
    return 1;
  }
  return 0;
}



// FUNCTION 14021cb24 FUN_14021cb24 body=258 status=ok
// SIG undefined FUN_14021cb24(void)

undefined8 FUN_14021cb24(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_14021cc20;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14021cc20;
    }
    FUN_1400841de(param_1 + 0x18,&local_28);
  }
  else {
LAB_14021cc20:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14021cbd7;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))();
      uVar6 = 1;
      goto LAB_14021cbd7;
    }
  }
  uVar6 = 0;
LAB_14021cbd7:
  if (local_28 != 0) {
    FUN_140113f3a(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14021cc5e FUN_14021cc5e body=93 status=ok
// SIG undefined FUN_14021cc5e(void)

void FUN_14021cc5e(longlong param_1,int param_2)

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
    FUN_14021ccbc();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14021ccbc FUN_14021ccbc body=469 status=ok
// SIG undefined FUN_14021ccbc(void)

void FUN_14021ccbc(undefined8 *param_1,undefined8 param_2,uint param_3,longlong param_4)

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
  
  if (((int)param_3 < 0) || (param_4 - 0x80000000U < 0xffffffff80000001)) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(param_3,param_4);
  }
  _Size = (ulonglong)param_3 * param_4;
  _Src = (void *)*param_1;
  if (_Size == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_14021cdec:
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
LAB_14021ce29:
    *param_1 = _Dst;
    return;
  }
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_14021cd26;
LAB_14021cd1b:
  FUN_14472e504(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_14021cd26:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 7U & 0xfffffffffffffff8);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (_Size < 0xffa1) goto code_r0x00014021cd53;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x60,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    *(ulonglong *)(puVar4 + 0x10) = (longlong)puVar4 + _Size + 0x60;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_14021cda9:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_14021ce29;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_14021cdec;
code_r0x00014021cd53:
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
      goto LAB_14021cda9;
    }
  }
  goto LAB_14021cd1b;
}



// FUNCTION 14021ce91 FUN_14021ce91 body=319 status=ok
// SIG undefined FUN_14021ce91(void)

void FUN_14021ce91(ulonglong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar11 = FUN_144821ef4();
  local_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0x3f800000;
  FUN_14021cfd2(*param_2,lVar11,param_4);
  iVar9 = *(int *)(lVar11 + 0x30) + *(int *)(lVar11 + 0x20);
  iVar10 = iVar9 + *(int *)(lVar11 + 0x40);
  if (iVar10 != 0 && SCARRY4(iVar9,*(int *)(lVar11 + 0x40)) == iVar10 < 0) {
    puVar12 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar12 + 0xb;
    if ((undefined8 *)param_1[1] < puVar13) {
      FUN_140023dd8(param_1,0x60);
      puVar12 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar13 = puVar12 + 0xb;
    }
    *param_1 = (ulonglong)puVar13;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar12;
    param_1[6] = (ulonglong)(puVar12 + 1);
    uVar5 = *(undefined8 *)(lVar11 + 0x38);
    uVar1 = *(undefined4 *)(lVar11 + 0x40);
    uVar6 = *(undefined8 *)(lVar11 + 0x28);
    uVar2 = *(undefined4 *)(lVar11 + 0x30);
    uVar7 = *(undefined8 *)(lVar11 + 0x18);
    uVar3 = *(undefined4 *)(lVar11 + 0x20);
    uVar8 = *(undefined8 *)(lVar11 + 8);
    uVar4 = *(undefined4 *)(lVar11 + 0x10);
    puVar12[1] = 0;
    *puVar12 = &PTR_FUN_14a1e7fd8;
    puVar12[2] = param_3;
    puVar12[3] = uVar8;
    *(undefined4 *)(puVar12 + 4) = uVar4;
    puVar12[5] = uVar7;
    *(undefined4 *)(puVar12 + 6) = uVar3;
    puVar12[7] = uVar6;
    *(undefined4 *)(puVar12 + 8) = uVar2;
    puVar12[9] = uVar5;
    *(undefined4 *)(puVar12 + 10) = uVar1;
    *(undefined8 *)(lVar11 + 8) = 0;
    *(undefined4 *)(lVar11 + 0x10) = 0;
    *(undefined8 *)(lVar11 + 0x18) = 0;
    *(undefined4 *)(lVar11 + 0x20) = 0;
    *(undefined8 *)(lVar11 + 0x28) = 0;
    *(undefined4 *)(lVar11 + 0x30) = 0;
    *(undefined8 *)(lVar11 + 0x38) = 0;
    *(undefined4 *)(lVar11 + 0x40) = 0;
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14021cfd2 FUN_14021cfd2 body=152 status=ok
// SIG undefined FUN_14021cfd2(void)

void FUN_14021cfd2(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1447e4d96(param_1,param_2,*(undefined8 *)(param_3 + 0x18));
  FUN_14021d06c(param_1 + 0xe0,param_2,param_4);
  if (*(short *)(param_1 + 0xf6) != 0) {
    local_2c = 0;
    if (*(int *)(param_3 + 0x1dd0) != 0) {
      local_2c = *(undefined4 *)(param_3 + 0x1dd4);
    }
    FUN_1448fc859(param_2,param_1 + 0xf2,&local_2c,0);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14021d06c FUN_14021d06c body=173 status=ok
// SIG undefined FUN_14021d06c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14021d06c(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_a8 [32];
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
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = *param_3;
  uStack_80 = param_3[1];
  local_78 = 0;
  uStack_70 = 0;
  local_68 = _DAT_14c846250;
  uStack_60 = DAT_14c846258;
  local_58 = _DAT_14c846260;
  uStack_50 = _DAT_14c846268;
  local_48 = _DAT_14c846270;
  uStack_40 = _DAT_14c846278;
  local_38 = DAT_14c846280;
  uStack_34 = DAT_14c846284;
  uStack_30 = DAT_14c846288;
  uStack_2c = DAT_14c84628c;
  FUN_1449dacb8(param_2,param_1,&local_88,0);
  FUN_1449dacb8(param_2,param_1 + 6,&local_78,0);
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14021d11a FUN_14021d11a body=379 status=ok
// SIG undefined FUN_14021d11a(void)

void FUN_14021d11a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  float *pfVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*DAT_14cbd65b8 == '\x01') {
    DAT_14cbd6608 = (float)*DAT_14cbd6600 * 100.0 * (float)*DAT_14cbd6600 * 100.0;
    DAT_14cbd6d84 = (float)*DAT_14cbd65e8 * 100.0;
    DAT_14cbd6d88 = *DAT_14cbd65d0;
  }
  else if ((ABS(DAT_14cbd6608) <= 1e-08) || (ABS(DAT_14cbd6d84) <= 1e-08)) {
    FUN_1449027d0(param_1 + -0x38,&local_38);
    pfVar3 = *(float **)(local_38 + 0x260);
    AcquireSRWLockShared((PSRWLOCK)(pfVar3 + 0x24));
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
    DAT_14cbd6608 = *pfVar3;
    DAT_14cbd6d84 = (float)(int)pfVar3[2];
    DAT_14cbd6d88 = pfVar3[4];
    ReleaseSRWLockShared((PSRWLOCK)(pfVar3 + 0x24));
  }
  FUN_1448fffc6(param_1 + -8);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14021d296 FUN_14021d296 body=412 status=ok
// SIG undefined FUN_14021d296(void)

ulonglong FUN_14021d296(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  lVar9 = DAT_14caa8580;
  lpCriticalSection = (LPCRITICAL_SECTION)(DAT_14caa8580 + 0x250);
  EnterCriticalSection(lpCriticalSection);
  if (*(int *)(lVar9 + 0x130) != *(int *)(lVar9 + 0x15c)) {
    lVar3 = *param_1;
    uVar4 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar5 = (uint)lVar3 & 0xffff;
    lVar8 = lVar9 + 0x160;
    if (*(longlong *)(lVar9 + 0x168) != 0) {
      lVar8 = *(longlong *)(lVar9 + 0x168);
    }
    iVar6 = *(int *)(lVar8 + (ulonglong)
                             (*(int *)(lVar9 + 0x170) - 1U &
                             (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar5) +
                             (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar6 != -1) {
      do {
        lVar8 = *(longlong *)(lVar9 + 0x128) + (longlong)iVar6 * 0x20;
        if (*(longlong *)(*(longlong *)(lVar9 + 0x128) + (longlong)iVar6 * 0x20) == lVar3) {
          if ((lVar8 + 8U & 0xfffffffffffffff7) != 0) {
            lVar9 = *(longlong *)(lVar8 + 8);
            plVar7 = *(longlong **)(lVar8 + 0x10);
            if (plVar7 == (longlong *)0x0) {
              plVar7 = (longlong *)0x0;
            }
            else {
              LOCK();
              *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
              UNLOCK();
            }
            goto LAB_14021d372;
          }
          break;
        }
        iVar6 = *(int *)(lVar8 + 0x18);
      } while (iVar6 != -1);
    }
  }
  plVar7 = (longlong *)0x0;
  lVar9 = 0;
LAB_14021d372:
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  if ((lVar9 != 0) && (lVar3 = *param_2, lVar3 != 0)) {
    if ((longlong)*(int *)(lVar9 + 0x10) != 0) {
      lVar8 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar9 + 8) + lVar8) == lVar3) {
          param_2 = (longlong *)CONCAT71((int7)((ulonglong)param_2 >> 8),1);
          goto LAB_14021d3e2;
        }
        lVar8 = lVar8 + 8;
      } while ((longlong)*(int *)(lVar9 + 0x10) * 8 != lVar8);
    }
    if ((longlong)*(int *)(lVar9 + 0x20) != 0) {
      lVar8 = 0;
      do {
        bVar10 = *(longlong *)(*(longlong *)(lVar9 + 0x18) + lVar8) == lVar3;
        param_2 = (longlong *)CONCAT71((int7)((ulonglong)param_2 >> 8),bVar10);
        if (bVar10) break;
        bVar10 = (longlong)*(int *)(lVar9 + 0x20) * 8 + -8 != lVar8;
        lVar8 = lVar8 + 8;
      } while (bVar10);
      goto LAB_14021d3e2;
    }
  }
  param_2 = (longlong *)0x0;
LAB_14021d3e2:
  if (plVar7 != (longlong *)0x0) {
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
  return (ulonglong)param_2 & 0xffffffff;
}



// FUNCTION 14021d432 FUN_14021d432 body=227 status=ok
// SIG undefined FUN_14021d432(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14021d432(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  *param_1 = *param_3;
  puVar2 = (undefined8 *)*param_2;
  LOCK();
  *(int *)(param_2 + 1) = *(int *)(param_2 + 1) + 1;
  UNLOCK();
  for (; puVar2 != (undefined8 *)0x0; puVar2 = (undefined8 *)*puVar2) {
    lVar3 = puVar2[2];
    if ((lVar3 != 0) && ((*(uint *)(lVar3 + 8) & 0x40018000) == 0)) {
      uVar1 = *(uint *)(lVar3 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar3 = *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        if ((*(uint *)(lVar3 + 8 + (ulonglong)(uVar1 & 0xffff) * 0x18) >> 0x15 & 1) == 0) {
          lVar3 = lVar3 + (ulonglong)(uVar1 & 0xffff) * 0x18;
LAB_14021d4a0:
          if ((*(uint *)(lVar3 + 8) >> 0x1c & 1) == 0) goto LAB_14021d4b5;
        }
      }
      else if ((_DAT_00000008 >> 0x15 & 1) == 0) {
        lVar3 = 0;
        goto LAB_14021d4a0;
      }
    }
  }
  puVar2 = (undefined8 *)0x0;
LAB_14021d4b5:
  param_1[1] = puVar2;
  param_1[2] = param_2;
  LOCK();
  *(int *)(param_2 + 1) = *(int *)(param_2 + 1) + 1;
  UNLOCK();
  param_1[3] = param_1;
  FUN_14021d516(param_1 + 1);
  LOCK();
  *(int *)(param_2 + 1) = *(int *)(param_2 + 1) + -1;
  UNLOCK();
  LOCK();
  *(int *)(param_2 + 1) = *(int *)(param_2 + 1) + 1;
  UNLOCK();
  param_1[4] = 0;
  param_1[5] = param_2;
  LOCK();
  *(int *)(param_2 + 1) = *(int *)(param_2 + 1) + 1;
  UNLOCK();
  param_1[6] = param_1;
  FUN_14021d516(param_1 + 4);
  LOCK();
  *(int *)(param_2 + 1) = *(int *)(param_2 + 1) + -1;
  UNLOCK();
  return param_1;
}



// FUNCTION 14021d516 FUN_14021d516 body=63 status=ok
// SIG undefined FUN_14021d516(void)

void FUN_14021d516(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  while ((lVar2 != 0 &&
         (plVar1 = (longlong *)param_1[2], lVar2 = FUN_1447210f0(*(undefined8 *)(lVar2 + 0x10)),
         lVar2 != *plVar1))) {
    lVar2 = FUN_144b39bc4(*(undefined8 *)*param_1);
    *param_1 = lVar2;
  }
  return;
}



// FUNCTION 14021d556 FUN_14021d556 body=502 status=ok
// SIG undefined FUN_14021d556(void)

void FUN_14021d556(longlong *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [8];
  double local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1 != (longlong *)0x0) {
    (**(code **)(*param_1 + 0x680))(param_1,local_88);
    fVar5 = cosf((float)(local_80 * -0.017453292519943295));
    fVar6 = sinf((float)(local_80 * -0.017453292519943295));
    dVar2 = *param_2 * (double)fVar5 - (double)fVar6 * param_2[1];
    dVar1 = *param_2 * (double)fVar6 + param_2[1] * (double)fVar5;
    fVar6 = (float)SQRT(dVar2 * dVar2 + dVar1 * dVar1);
    fVar5 = fVar6 / DAT_14cbd6d84;
    if (1.0 <= fVar5) {
      fVar5 = 1.0;
    }
    if (fVar5 <= 0.0) {
      fVar5 = 0.0;
    }
    if (1e-08 < ABS(DAT_14cbd6d88)) {
      fVar5 = logf(DAT_14cbd6d88 * fVar5 + 1.0);
      fVar7 = logf(DAT_14cbd6d88 + 1.0);
      fVar5 = fVar5 / fVar7;
    }
    dVar3 = DAT_14c8463f8;
    dVar4 = DAT_14c8463f0;
    if (0.0001 < fVar6) {
      dVar3 = dVar1 * (1.0 / (double)fVar6);
      dVar4 = dVar2 * (1.0 / (double)fVar6);
    }
    *param_3 = dVar4 * (double)fVar5 * 100.0;
    param_3[1] = dVar3 * (double)fVar5 * 100.0;
  }
  if ((local_70 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14021d74e FUN_14021d74e body=122 status=ok
// SIG undefined FUN_14021d74e(void)

void FUN_14021d74e(longlong *param_1,int param_2)

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



// FUNCTION 14021d7c8 FUN_14021d7c8 body=449 status=ok
// SIG undefined FUN_14021d7c8(void)

void FUN_14021d7c8(longlong *param_1)

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



// FUNCTION 14021d98a FUN_14021d98a body=313 status=ok
// SIG undefined FUN_14021d98a(void)

bool FUN_14021d98a(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x40);
  if (lVar1 != 0) {
    lVar2 = FUN_1403ca227();
    *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_1 + 0x40);
    uVar3 = FUN_1447210f0();
    *(undefined8 *)(param_1 + 0xa0) = uVar3;
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(lVar2 + 0x148);
    (**(code **)(**(longlong **)(param_1 + 0x40) + 0x718))
              (*(longlong **)(param_1 + 0x40),param_1 + 0x68,param_1 + 0x80);
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined8 *)(param_1 + 0xb0) = 0;
    *(undefined2 *)(param_1 + 0xb8) = 0x100;
    *(undefined4 *)(param_1 + 0xba) = 0;
    *(undefined1 *)(param_1 + 0xbe) = 0;
    *(undefined2 *)(param_1 + 0xbf) = 0x101;
    *(undefined4 *)(param_1 + 0xc4) = 0;
    *(undefined1 *)(param_1 + 200) = 0;
    *(undefined4 *)(param_1 + 0xcc) = 0;
    *(undefined2 *)(param_1 + 0xd0) = 0x101;
    if (*(longlong *)(param_1 + 0xf8) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0xf8) = 0;
    *(undefined8 *)(param_1 + 0x100) = 0x800000000;
    if (*(longlong *)(param_1 + 0x118) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x118) = 0;
    *(undefined8 *)(param_1 + 0x120) = 0x400000000;
    *(undefined8 *)(param_1 + 0xa8) = DAT_14cbc2ca0;
    if (*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x3d0) != 0) {
      FUN_144a85a22(param_1 + 0xa8);
    }
  }
  return lVar1 != 0;
}



// FUNCTION 14021dac4 FUN_14021dac4 body=115 status=ok
// SIG undefined FUN_14021dac4(void)

undefined8 * FUN_14021dac4(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14a345bd0;
  if (param_1[0x14] != 0) {
    FUN_1456e7cba(param_1[0x14],param_1);
  }
  *param_1 = &PTR_FUN_14a348fc0;
  puVar1 = TlsGetValue(DAT_14c760b80);
  if (puVar1 == param_1) {
    TlsSetValue(DAT_14c760b80,(LPVOID)0x0);
  }
  FUN_144902b9c(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14021db38 FUN_14021db38 body=127 status=ok
// SIG undefined FUN_14021db38(void)

void FUN_14021db38(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa0));
  iVar1 = *(int *)(param_1 + 0xd0);
  *(uint *)(param_1 + 0xd0) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0xd4) < iVar1 + 1U) {
    FUN_1449031f2((longlong *)(param_1 + 200),iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 200);
  uVar3 = *param_2;
  *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x30) = 0;
  *(undefined8 *)(lVar2 + 8 + (longlong)iVar1 * 0x30) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00014021dba3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa0));
  return;
}



// FUNCTION 14021dbb8 FUN_14021dbb8 body=255 status=ok
// SIG undefined FUN_14021dbb8(void)

void FUN_14021dbb8(longlong param_1,int param_2)

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



// FUNCTION 14021dcb8 FUN_14021dcb8 body=201 status=ok
// SIG undefined FUN_14021dcb8(void)

void FUN_14021dcb8(longlong *param_1,undefined8 *param_2)

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



// FUNCTION 14021dd82 FUN_14021dd82 body=716 status=ok
// SIG undefined FUN_14021dd82(void)

longlong FUN_14021dd82(longlong param_1,longlong param_2)

{
  int iVar1;
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
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  void *pvVar18;
  void *pvVar19;
  
  FUN_144903306();
  *(undefined8 *)(param_1 + 0x980) = 0;
  iVar1 = *(int *)(param_2 + 0x988);
  pvVar18 = *(void **)(param_2 + 0x980);
  *(int *)(param_1 + 0x988) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x98c) = 8;
  }
  else {
    pvVar19 = (void *)(param_2 + 0x8c0);
    if (pvVar18 != (void *)0x0) {
      pvVar19 = pvVar18;
    }
    FUN_14021e4e0((void *)(param_1 + 0x8c0),iVar1,0);
    pvVar18 = *(void **)(param_1 + 0x980);
    if (*(void **)(param_1 + 0x980) == (void *)0x0) {
      pvVar18 = (void *)(param_1 + 0x8c0);
    }
    memcpy(pvVar18,pvVar19,(longlong)iVar1 * 0x18);
  }
  *(undefined8 *)(param_1 + 0xa10) = 0;
  iVar1 = *(int *)(param_2 + 0xa18);
  pvVar18 = *(void **)(param_2 + 0xa10);
  *(int *)(param_1 + 0xa18) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0xa1c) = 8;
  }
  else {
    pvVar19 = (void *)(param_2 + 0x990);
    if (pvVar18 != (void *)0x0) {
      pvVar19 = pvVar18;
    }
    FUN_14021e04e((void *)(param_1 + 0x990),iVar1,0);
    pvVar18 = *(void **)(param_1 + 0xa10);
    if (*(void **)(param_1 + 0xa10) == (void *)0x0) {
      pvVar18 = (void *)(param_1 + 0x990);
    }
    memcpy(pvVar18,pvVar19,(longlong)iVar1 << 4);
  }
  *(undefined8 *)(param_1 + 0xa20) = 0;
  iVar1 = *(int *)(param_2 + 0xa28);
  pvVar18 = *(void **)(param_2 + 0xa20);
  *(int *)(param_1 + 0xa28) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0xa2c) = 0;
  }
  else {
    FUN_1411312f2((undefined8 *)(param_1 + 0xa20),iVar1,0);
    memcpy(*(void **)(param_1 + 0xa20),pvVar18,(longlong)iVar1 << 3);
  }
  *(undefined1 *)(param_1 + 0xa60) = *(undefined1 *)(param_2 + 0xa60);
  uVar2 = *(undefined4 *)(param_2 + 0xa30);
  uVar3 = *(undefined4 *)(param_2 + 0xa34);
  uVar4 = *(undefined4 *)(param_2 + 0xa38);
  uVar5 = *(undefined4 *)(param_2 + 0xa3c);
  uVar6 = *(undefined4 *)(param_2 + 0xa40);
  uVar7 = *(undefined4 *)(param_2 + 0xa44);
  uVar8 = *(undefined4 *)(param_2 + 0xa48);
  uVar9 = *(undefined4 *)(param_2 + 0xa4c);
  uVar10 = *(undefined4 *)(param_2 + 0xa54);
  uVar11 = *(undefined4 *)(param_2 + 0xa58);
  uVar12 = *(undefined4 *)(param_2 + 0xa5c);
  *(undefined4 *)(param_1 + 0xa50) = *(undefined4 *)(param_2 + 0xa50);
  *(undefined4 *)(param_1 + 0xa54) = uVar10;
  *(undefined4 *)(param_1 + 0xa58) = uVar11;
  *(undefined4 *)(param_1 + 0xa5c) = uVar12;
  *(undefined4 *)(param_1 + 0xa40) = uVar6;
  *(undefined4 *)(param_1 + 0xa44) = uVar7;
  *(undefined4 *)(param_1 + 0xa48) = uVar8;
  *(undefined4 *)(param_1 + 0xa4c) = uVar9;
  *(undefined4 *)(param_1 + 0xa30) = uVar2;
  *(undefined4 *)(param_1 + 0xa34) = uVar3;
  *(undefined4 *)(param_1 + 0xa38) = uVar4;
  *(undefined4 *)(param_1 + 0xa3c) = uVar5;
  *(undefined8 *)(param_1 + 0xa68) = 0;
  iVar1 = *(int *)(param_2 + 0xa70);
  pvVar18 = *(void **)(param_2 + 0xa68);
  *(int *)(param_1 + 0xa70) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0xa74) = 0;
  }
  else {
    FUN_1446dd670((undefined8 *)(param_1 + 0xa68),iVar1,0);
    memcpy(*(void **)(param_1 + 0xa68),pvVar18,(longlong)iVar1 * 2);
  }
  *(undefined8 *)(param_1 + 0xa98) = 0;
  *(undefined4 *)(param_1 + 0xaa0) = 0;
  *(undefined8 *)(param_1 + 0xa78) = 0;
  *(undefined8 *)(param_1 + 0xa80) = 0;
  *(undefined8 *)(param_1 + 0xaa4) = 0xffffffff00000080;
  *(undefined4 *)(param_1 + 0xaac) = 0;
  *(undefined8 *)(param_1 + 0xab8) = 0;
  *(undefined4 *)(param_1 + 0xac0) = 0;
  FUN_14021e144(param_1 + 0xa78,param_2 + 0xa78);
  *(undefined8 *)(param_1 + 0xac8) = 0;
  iVar1 = *(int *)(param_2 + 0xad0);
  pvVar18 = *(void **)(param_2 + 0xac8);
  *(int *)(param_1 + 0xad0) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0xad4) = 0;
  }
  else {
    FUN_1447a127e((undefined8 *)(param_1 + 0xac8),iVar1,0);
    memcpy(*(void **)(param_1 + 0xac8),pvVar18,(longlong)iVar1);
  }
  uVar13 = *(undefined8 *)(param_2 + 0xad8);
  uVar14 = *(undefined8 *)(param_2 + 0xae0);
  uVar15 = *(undefined8 *)(param_2 + 0xae8);
  uVar16 = *(undefined8 *)(param_2 + 0xaf0);
  uVar17 = *(undefined8 *)(param_2 + 0xb00);
  *(undefined8 *)(param_1 + 0xaf8) = *(undefined8 *)(param_2 + 0xaf8);
  *(undefined8 *)(param_1 + 0xb00) = uVar17;
  *(undefined8 *)(param_1 + 0xae8) = uVar15;
  *(undefined8 *)(param_1 + 0xaf0) = uVar16;
  *(undefined8 *)(param_1 + 0xad8) = uVar13;
  *(undefined8 *)(param_1 + 0xae0) = uVar14;
  return param_1;
}



// FUNCTION 14021e04e FUN_14021e04e body=104 status=ok
// SIG undefined FUN_14021e04e(void)

void FUN_14021e04e(longlong param_1,uint param_2,int param_3)

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
      uVar2 = FUN_144a3809e((longlong)(int)param_2 << 4,0);
      iVar1 = (int)(uVar2 >> 4);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar1) {
        iVar3 = iVar1;
      }
    }
  }
  if (param_3 < iVar3) {
    FUN_14021e0b6(param_1,0,iVar3,0x10);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0x8c) = param_3;
  return;
}



// FUNCTION 14021e0b6 FUN_14021e0b6 body=141 status=ok
// SIG undefined FUN_14021e0b6(void)

void FUN_14021e0b6(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x80);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x80,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x80),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x80,param_2,param_3,param_4);
  return;
}



// FUNCTION 14021e144 FUN_14021e144 body=154 status=ok
// SIG undefined FUN_14021e144(void)

longlong FUN_14021e144(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  void *_Dst;
  void *_Src;
  
  if (param_1 == param_2) {
    return param_1;
  }
  iVar2 = *(int *)(param_2 + 0x48);
  plVar1 = (longlong *)(param_1 + 0x40);
  if ((ulonglong)(longlong)iVar2 < 2) {
    if (*plVar1 != 0) {
      FUN_1446efa72(plVar1,0,0,4);
    }
    if (iVar2 == 0) goto LAB_14021e170;
  }
  else {
    FUN_1446efa72(plVar1,0,iVar2,4);
  }
  _Dst = (void *)(param_1 + 0x38);
  if ((void *)*plVar1 != (void *)0x0) {
    _Dst = (void *)*plVar1;
  }
  _Src = (void *)(param_2 + 0x38);
  if (*(void **)(param_2 + 0x40) != (void *)0x0) {
    _Src = *(void **)(param_2 + 0x40);
  }
  memcpy(_Dst,_Src,(longlong)iVar2 << 2);
LAB_14021e170:
  *(int *)(param_1 + 0x48) = iVar2;
  FUN_14021e1de(param_1,param_2);
  return param_1;
}



// FUNCTION 14021e1de FUN_14021e1de body=352 status=ok
// SIG undefined FUN_14021e1de(void)

longlong * FUN_14021e1de(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  longlong *plVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong *_Dst;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_14021e33e(param_1,(ulonglong)uVar1);
    lVar5 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar5 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar5) < uVar1) {
      FUN_1447711aa(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    uVar6 = (int)param_2[5] + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar6) ||
       (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
      uVar7 = 0x80;
      if (0x80 < (int)uVar6) {
        uVar7 = uVar6;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar7;
      FUN_1446efbd8(param_1 + 2);
    }
    iVar2 = (int)param_2[5];
    *(int *)(param_1 + 5) = iVar2;
    if (iVar2 != 0) {
      plVar8 = (longlong *)param_2[4];
      if ((longlong *)param_2[4] == (longlong *)0x0) {
        plVar8 = param_2 + 2;
      }
      _Dst = param_1 + 2;
      if ((longlong *)param_1[4] != (longlong *)0x0) {
        _Dst = (longlong *)param_1[4];
      }
      memcpy(_Dst,plVar8,(ulonglong)(iVar2 + 0x1fU >> 3 & 0xfffffffc));
    }
    if (0 < (int)uVar1) {
      lVar5 = *param_1;
      lVar3 = *param_2;
      lVar9 = 0;
      uVar10 = 0;
      do {
        plVar8 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar8 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar8 + (uVar10 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar10 & 0x1f) &
            1) == 0) {
          *(undefined4 *)(lVar5 + lVar9) = *(undefined4 *)(lVar3 + lVar9);
          *(undefined4 *)(lVar5 + 4 + lVar9) = *(undefined4 *)(lVar3 + 4 + lVar9);
        }
        else {
          *(undefined8 *)(lVar5 + lVar9) = *(undefined8 *)(lVar3 + lVar9);
          *(undefined8 *)(lVar5 + 8 + lVar9) = *(undefined8 *)(lVar3 + 8 + lVar9);
          lVar4 = *(longlong *)(lVar3 + 0x10 + lVar9);
          *(longlong *)(lVar5 + 0x10 + lVar9) = lVar4;
          if (lVar4 != 0) {
            LOCK();
            *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
            UNLOCK();
          }
          *(undefined8 *)(lVar5 + 0x18 + lVar9) = *(undefined8 *)(lVar3 + 0x18 + lVar9);
        }
        uVar10 = uVar10 + 1;
        lVar9 = lVar9 + 0x20;
      } while (uVar1 != uVar10);
    }
  }
  return param_1;
}



// FUNCTION 14021e33e FUN_14021e33e body=416 status=ok
// SIG undefined FUN_14021e33e(void)

void FUN_14021e33e(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  uint uVar5;
  uint uVar6;
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
      plVar4 = *(longlong **)(*local_78 + 0x10 + (longlong)iStack_5c * 0x20);
      if (plVar4 != (longlong *)0x0) {
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
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1446f4a44(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar6 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar6) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar5 = 0x80;
    if (0x80 < (int)uVar6) {
      uVar5 = uVar6;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar5;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14021e4e0 FUN_14021e4e0 body=121 status=ok
// SIG undefined FUN_14021e4e0(void)

void FUN_14021e4e0(longlong param_1,uint param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 8;
    if (8 < param_2) {
      uVar1 = FUN_144a3809e((longlong)(int)param_2 * 0x18,0);
      iVar2 = (int)(uVar1 / 0x18);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar2) {
        iVar3 = iVar2;
      }
    }
  }
  if (param_3 < iVar3) {
    FUN_14021e55a(param_1,0,iVar3,0x18);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xcc) = param_3;
  return;
}



// FUNCTION 14021e55a FUN_14021e55a body=149 status=ok
// SIG undefined FUN_14021e55a(void)

void FUN_14021e55a(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0xc0);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x18);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0xc0,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0xc0),param_1,(longlong)param_2 * 0x18);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0xc0,param_2,param_3,param_4);
  return;
}



// FUNCTION 14021e5ef FUN_14021e5ef body=94 status=ok
// SIG undefined FUN_14021e5ef(void)

void FUN_14021e5ef(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    bVar2 = DAT_14c950c29;
    do {
      *(undefined4 *)(param_1 + lVar3) = *(undefined4 *)(param_2 + lVar3);
      lVar1 = *(longlong *)(param_2 + 8 + lVar3);
      *(longlong *)(param_1 + 8 + lVar3) = lVar1;
      if (((bVar2 & 1) != 0) && (lVar1 != 0)) {
        FUN_1456cec3c();
        bVar2 = DAT_14c950c29;
      }
      lVar3 = lVar3 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14021e64e FUN_14021e64e body=224 status=ok
// SIG undefined FUN_14021e64e(void)

void FUN_14021e64e(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_2 != 0) {
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



// FUNCTION 14021e72e FUN_14021e72e body=446 status=ok
// SIG undefined FUN_14021e72e(void)

void FUN_14021e72e(void *param_1,int param_2)

{
  uint uVar1;
  void *_Src;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)((longlong)param_1 + 0x110);
  if ((int)uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar1);
  }
  if (uVar1 < 5) {
    *(undefined4 *)((longlong)param_1 + 0x114) = 4;
    _Src = *(void **)((longlong)param_1 + 0x100);
joined_r0x00014021e884:
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 6);
    param_2 = 0;
    uVar4 = 0;
  }
  else {
    uVar3 = (ulonglong)(int)uVar1;
    if (4 < *(uint *)((longlong)param_1 + 0x114)) {
      uVar3 = uVar3 + (uVar3 * 3 >> 3) + 0x10;
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
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0);
      }
    }
    uVar4 = uVar4 >> 6;
    uVar2 = (uint)uVar4;
    if ((int)uVar2 < (int)uVar1) {
      *(undefined4 *)((longlong)param_1 + 0x114) = 0x7fffffff;
      uVar4 = 0x7fffffff;
      _Src = *(void **)((longlong)param_1 + 0x100);
    }
    else {
      *(uint *)((longlong)param_1 + 0x114) = uVar2;
      _Src = *(void **)((longlong)param_1 + 0x100);
      if (uVar2 < 5) goto joined_r0x00014021e884;
    }
    if (_Src == (void *)0x0) {
      FUN_1446efa72((longlong)param_1 + 0x100,0,uVar4,0x40);
      memmove(*(void **)((longlong)param_1 + 0x100),param_1,(longlong)param_2 << 6);
      return;
    }
  }
  FUN_1446efa72((longlong)param_1 + 0x100,param_2,uVar4,0x40);
  return;
}



// FUNCTION 14021e8ec FUN_14021e8ec body=44 status=ok
// SIG undefined FUN_14021e8ec(void)

void FUN_14021e8ec(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_14021e918(param_1 + 0x120);
  if (cVar1 == '\0') {
    FUN_14021e994(param_1);
    return;
  }
  return;
}



// FUNCTION 14021e918 FUN_14021e918 body=123 status=ok
// SIG undefined FUN_14021e918(void)

ulonglong FUN_14021e918(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined8 unaff_RSI;
  ulonglong uVar5;
  undefined7 uVar6;
  
  uVar6 = (undefined7)((ulonglong)unaff_RSI >> 8);
  uVar5 = CONCAT71(uVar6,2);
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    cVar3 = FUN_143881f24();
    if (cVar3 != '\0') {
      lVar2 = *(longlong *)(param_1 + 0xe8);
      if (*(float *)(lVar2 + 0x178) <= 0.0) {
        uVar5 = 0;
      }
      else {
        iVar1 = *(int *)(lVar2 + 0x4f0);
        if ((-1 < (longlong)iVar1) && (iVar1 < *(int *)(lVar2 + 0x880))) {
          lVar4 = lVar2 + 0x4f8;
          if (*(longlong *)(lVar2 + 0x878) != 0) {
            lVar4 = *(longlong *)(lVar2 + 0x878);
          }
          uVar5 = CONCAT71(uVar6,((longlong)iVar1 * 0x38 + lVar4 == 0) * '\x02');
        }
      }
    }
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 14021e994 FUN_14021e994 body=348 status=ok
// SIG undefined FUN_14021e994(void)

ulonglong FUN_14021e994(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  undefined8 unaff_RDI;
  ulonglong uVar12;
  bool bVar14;
  undefined7 uVar13;
  
  plVar3 = *(longlong **)(param_1 + 0xf0);
  uVar13 = (undefined7)((ulonglong)unaff_RDI >> 8);
  uVar12 = CONCAT71(uVar13,2);
  if (plVar3 == (longlong *)0x0) goto LAB_14021ea93;
  iVar8 = (int)plVar3[1];
  do {
    if (iVar8 == 0) goto LAB_14021ea93;
    LOCK();
    iVar6 = (int)plVar3[1];
    bVar14 = iVar8 == iVar6;
    if (bVar14) {
      *(int *)(plVar3 + 1) = iVar8 + 1;
      iVar6 = iVar8;
    }
    iVar8 = iVar6;
    UNLOCK();
  } while (!bVar14);
  lVar4 = *(longlong *)(param_1 + 0xe8);
  uVar12 = CONCAT71(uVar13,2);
  if ((lVar4 != 0) && (lVar10 = *(longlong *)(param_1 + 0xd8), lVar10 != 0)) {
    lVar5 = *(longlong *)(param_1 + 0x48);
    if ((*(int *)(lVar5 + 0x19c) == 2) && (*(char *)(lVar5 + 0x7b) != '\x01')) {
      uVar12 = 0;
    }
    else {
      plVar2 = (longlong *)(param_1 + 0xd8);
      if (*(char *)(lVar5 + 0x1a0) == '\x01') {
        cVar7 = FUN_14021eaf0(param_1);
        if (cVar7 == '\0') goto LAB_14021ea8d;
        lVar10 = *plVar2;
        if (((*(uint *)(lVar5 + 0x19c) & 0xfffffffe) != 2) &&
           (*(longlong *)(lVar4 + 0x390) != lVar10)) {
          FUN_140c50aa0(lVar4,plVar2);
          lVar10 = *plVar2;
        }
      }
      if (*(char *)(lVar10 + 0x150) != '\x03') {
        uVar11 = *(uint *)(lVar5 + 0x19c) & 0xfffffffe;
        uVar9 = FUN_144903750(lVar4,plVar2,(*(byte *)(lVar5 + 0x1a1) ^ 1) & uVar11 != 2);
        if ((char)uVar9 == '\x01') {
          uVar12 = CONCAT71(uVar13,uVar11 != 2);
          *(undefined1 *)(param_1 + 0xf8) = 1;
        }
        else {
          uVar12 = (ulonglong)uVar9;
          if ((uVar9 & 0xff) != 2) {
            uVar12 = (ulonglong)CONCAT31((int3)(uVar9 >> 8),(uVar11 == 2) * '\x02');
          }
        }
      }
    }
  }
LAB_14021ea8d:
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
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
LAB_14021ea93:
  return uVar12 & 0xffffffff;
}



// FUNCTION 14021eaf0 FUN_14021eaf0 body=1395 status=ok
// SIG undefined FUN_14021eaf0(void)

ulonglong FUN_14021eaf0(longlong *param_1)

{
  int *piVar1;
  code *pcVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined8 ****ppppuVar9;
  undefined4 *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  uint uVar13;
  undefined7 uVar15;
  ulonglong uVar14;
  bool bVar16;
  undefined1 auStack_238 [40];
  longlong local_210;
  longlong *local_208;
  longlong local_200;
  longlong *local_1f8;
  undefined8 ***local_188 [3];
  ushort local_170;
  byte local_168;
  longlong *local_128;
  undefined1 local_120 [8];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined1 uStack_e8;
  undefined7 uStack_e7;
  undefined1 uStack_e0;
  undefined8 uStack_df;
  undefined4 local_d7;
  undefined1 local_d3;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined2 local_b8;
  undefined1 local_b6;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  ushort local_90;
  byte local_88;
  char local_80;
  undefined2 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  longlong *plStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_238;
  local_210 = 0;
  plVar11 = (longlong *)param_1[0x1e];
  local_208 = plVar11;
  if (plVar11 == (longlong *)0x0) {
LAB_14021eb62:
    plVar11 = (longlong *)0x0;
  }
  else {
    iVar6 = (int)plVar11[1];
    do {
      if (iVar6 == 0) {
        local_208 = (longlong *)0x0;
        goto LAB_14021eb62;
      }
      LOCK();
      iVar4 = (int)plVar11[1];
      bVar16 = iVar6 == iVar4;
      if (bVar16) {
        *(int *)(plVar11 + 1) = iVar6 + 1;
        iVar4 = iVar6;
      }
      iVar6 = iVar4;
      UNLOCK();
    } while (!bVar16);
    if (plVar11 == (longlong *)0x0) goto LAB_14021eb62;
    local_210 = param_1[0x1d];
  }
  uVar14 = 0;
  if (local_210 == 0) goto LAB_14021ef82;
  local_120[0] = 0;
  local_118 = DAT_14cb1c860;
  uStack_110 = DAT_14cb1c868;
  local_108 = DAT_14cb1c870;
  local_100 = 0;
  uStack_f8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  uStack_e7 = 0;
  uStack_e0 = 0;
  uStack_df = 0;
  local_d7 = 0x1010001;
  local_d3 = 0;
  local_d0 = DAT_14c8464e0;
  uStack_c8 = DAT_14c8464e8;
  local_c0 = DAT_14c8464f0;
  local_b8 = 0;
  local_b6 = 0;
  local_b0 = 0;
  local_90 = 0x18;
  local_98 = DAT_14c846508;
  local_a8 = (undefined4)DAT_14c8464f8;
  uStack_a4 = DAT_14c8464f8._4_4_;
  uStack_a0 = (undefined4)DAT_14c846500;
  uStack_9c = DAT_14c846500._4_4_;
  local_88 = 5;
  local_80 = ((DAT_14c9a8ab4 & 0x20) == 0) * '\x05';
  local_78 = 0x100;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  plStack_48 = (longlong *)0x0;
  (**(code **)(*param_1 + 0x120))(param_1,local_120);
  FUN_1437fe554(local_120,&local_210);
  cVar5 = FUN_14496c27c(local_120);
  if (cVar5 == '\0') goto LAB_14021ef17;
  if ((param_1[0x1b] != 0) && (cVar5 = FUN_14496c27c(param_1[0x1b] + 0x158), cVar5 != '\0')) {
    lVar8 = param_1[0x1b];
    uVar7 = (**(code **)(*param_1 + 0x128))(param_1);
    FUN_140383854(local_120,&local_200);
    cVar5 = FUN_140382f22(lVar8 + 0x158,&local_200,uVar7);
    if (local_128 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_128 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_128 + 0x10))();
      }
    }
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_168 * 0x120));
    if (pcVar2 != (code *)0x0) {
      ppppuVar9 = (undefined8 ****)local_188[0];
      if (local_170 < 0x19) {
        ppppuVar9 = local_188;
      }
      (*pcVar2)(ppppuVar9);
    }
    if (0x18 < local_170) {
      FUN_1400020a8(local_188[0]);
    }
    uVar14 = CONCAT71((int7)((ulonglong)(lVar8 + 0x158) >> 8),1);
    if (cVar5 != '\0') goto LAB_14021ef17;
  }
  lVar8 = FUN_1405f939e(param_1);
  uVar7 = DAT_14cb1c840;
  if (lVar8 == 0) {
LAB_14021ef15:
    uVar14 = 0;
  }
  else {
    if (DAT_14c9a7d10 == (undefined8 *)0x0) {
      DAT_14c9a7d10 = (undefined8 *)FUN_14001cc68(0x20,0x10);
      *DAT_14c9a7d10 = 0;
      DAT_14c9a7d10[1] = 0;
      DAT_14c9a7d10[2] = 0;
      DAT_14c9a7d10[3] = 0;
    }
    FUN_14005915a(DAT_14c9a7d10,&local_200,uVar7,lVar8);
    plVar11 = local_1f8;
    lVar8 = local_200;
    if ((local_200 == 0) || (local_1f8 == (longlong *)0x0)) {
      plVar11 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(local_1f8 + 1) = (int)local_1f8[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)((longlong)local_1f8 + 0xc) = *(int *)((longlong)local_1f8 + 0xc) + 1;
      UNLOCK();
      LOCK();
      plVar12 = local_1f8 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
        (**(code **)*local_1f8)(local_1f8);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
    }
    plVar12 = local_1f8;
    if (local_1f8 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_1f8 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_1f8)(local_1f8);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
    if (plVar11 == (longlong *)0x0) goto LAB_14021ef15;
    iVar6 = (int)plVar11[1];
    do {
      plVar12 = (longlong *)0x0;
      if (iVar6 == 0) break;
      LOCK();
      iVar4 = (int)plVar11[1];
      bVar16 = iVar6 == iVar4;
      if (bVar16) {
        *(int *)(plVar11 + 1) = iVar6 + 1;
        iVar4 = iVar6;
      }
      iVar6 = iVar4;
      UNLOCK();
      plVar12 = plVar11;
    } while (!bVar16);
    LOCK();
    piVar1 = (int *)((longlong)plVar11 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
    }
    if (plVar12 == (longlong *)0x0) goto LAB_14021ef15;
    if (lVar8 == 0) {
LAB_14021eeed:
      LOCK();
      plVar11 = plVar12 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 != 0) goto LAB_14021ef15;
      (**(code **)*plVar12)(plVar12);
      uVar13 = 0;
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      uVar14 = 0;
      if (*piVar1 == 0) goto LAB_14021ef08;
    }
    else {
      FUN_140381eae(lVar8 + 0x58,&local_200,local_120);
      plVar11 = local_1f8;
      if (param_1 + 0x1b != &local_200) {
        param_1[0x1b] = local_200;
        local_200 = 0;
        plVar3 = (longlong *)param_1[0x1c];
        if (local_1f8 != plVar3) {
          local_1f8 = (longlong *)0x0;
          param_1[0x1c] = (longlong)plVar11;
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            plVar11 = plVar3 + 1;
            *(int *)plVar11 = (int)*plVar11 + -1;
            UNLOCK();
            if ((int)*plVar11 == 0) {
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
        }
      }
      plVar11 = local_1f8;
      if (local_1f8 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_1f8 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_1f8)(local_1f8);
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
          }
        }
      }
      *(undefined1 *)(param_1 + 0x1f) = 0;
      if ((param_1[0x1b] == 0) || (cVar5 = FUN_14496c27c(param_1[0x1b] + 0x158), cVar5 == '\0'))
      goto LAB_14021eeed;
      LOCK();
      plVar3 = plVar12 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      uVar15 = (undefined7)((ulonglong)plVar11 >> 8);
      uVar14 = CONCAT71(uVar15,1);
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        uVar13 = (uint)CONCAT71((int7)((ulonglong)param_1 >> 8),1);
        uVar14 = CONCAT71(uVar15,1);
        if (*piVar1 != 0) goto LAB_14021ef17;
LAB_14021ef08:
        (**(code **)(*plVar12 + 0x10))(plVar12);
        uVar14 = (ulonglong)uVar13;
      }
    }
  }
LAB_14021ef17:
  if (plStack_48 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_48 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plStack_48 + 0x10))();
    }
  }
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_88 * 0x120));
  if (pcVar2 != (code *)0x0) {
    if (local_90 < 0x19) {
      puVar10 = &local_a8;
    }
    else {
      puVar10 = (undefined4 *)CONCAT44(uStack_a4,local_a8);
    }
    (*pcVar2)(puVar10);
  }
  plVar11 = local_208;
  if (0x18 < local_90) {
    FUN_1400020a8(CONCAT44(uStack_a4,local_a8));
    plVar11 = local_208;
  }
LAB_14021ef82:
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar11 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar14 & 0xffffffff;
}



// FUNCTION 14021f064 FUN_14021f064 body=166 status=ok
// SIG undefined FUN_14021f064(void)

undefined4 FUN_14021f064(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0x80) != 0) {
    plVar2 = (longlong *)FUN_144741050(param_1 + 0x88);
    if (*plVar2 != 0) {
      local_38 = *(undefined4 *)(param_1 + 0x88);
      local_40 = *(undefined8 *)(param_1 + 0x80);
      local_30 = 0;
      uStack_28 = 0;
      local_48 = 0;
      uVar1 = (**(code **)(*param_2 + 0x10))(param_2,&local_40,0,1);
      if (local_30 != 0) {
        FUN_1400020a8();
      }
      goto LAB_14021f086;
    }
  }
  uVar1 = 0;
LAB_14021f086:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14021f10b FUN_14021f10b body=391 status=ok
// SIG undefined FUN_14021f10b(void)

void FUN_14021f10b(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  iVar5 = (int)param_2[1];
  if (0 < iVar5) {
    lVar7 = 0;
    do {
      lVar3 = *(longlong *)(*param_2 + 0x3108 + lVar7 * 0x13c10);
      if (lVar3 != 0) {
        *(undefined8 *)(lVar3 + 0x1c60) = 0;
        lVar1 = lVar3 + 0x1c78;
        local_68 = 0x100000000;
        local_58 = 0xffffffff;
        local_50 = 0;
        iVar5 = 0;
        local_60 = lVar1;
        if (*(int *)(lVar3 + 0x1c90) != 0) {
          FUN_1449c0562(&local_68);
          iVar5 = *(int *)(lVar3 + 0x1c90);
        }
        plVar2 = (longlong *)(lVar3 + 0x1c68);
        local_78 = local_58;
        uVar4 = local_78;
        local_70 = local_50;
        local_6c = local_4c;
        local_88 = local_68;
        local_80 = local_60;
        local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
        iVar6 = local_78._4_4_;
        local_90 = plVar2;
        if ((local_78._4_4_ != iVar5) || (local_78 = uVar4, local_60 != lVar1)) {
          do {
            do {
              local_78 = uVar4;
              *(undefined8 *)(*local_90 + 8 + (longlong)iVar6 * 0x18) = 0;
              local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
              FUN_1449c0562(&local_88);
              iVar6 = local_78._4_4_;
              uVar4 = local_78;
            } while (local_78._4_4_ != *(int *)(lVar3 + 0x1c90));
          } while ((local_80 != lVar1) || (local_90 != plVar2));
        }
        FUN_14021f294(plVar2,0);
        iVar5 = (int)param_2[1];
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar5);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14021f294 FUN_14021f294 body=107 status=ok
// SIG undefined FUN_14021f294(void)

void FUN_14021f294(longlong param_1,uint param_2)

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
LAB_14021f2e3:
      FUN_14021f300(param_1,param_2);
      *(int *)(param_1 + 0x48) = iVar3;
      FUN_1471b1340(param_1);
      return;
    }
  }
  else if (*(int *)(param_1 + 0x48) != iVar3) goto LAB_14021f2e3;
  FUN_14021f37c(param_1);
  FUN_14021f300(param_1,param_2);
  return;
}



// FUNCTION 14021f300 FUN_14021f300 body=123 status=ok
// SIG undefined FUN_14021f300(void)

void FUN_14021f300(longlong param_1,int param_2)

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



// FUNCTION 14021f37c FUN_14021f37c body=335 status=ok
// SIG undefined FUN_14021f37c(void)

void FUN_14021f37c(longlong *param_1)

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



// FUNCTION 14021f4cc FUN_14021f4cc body=595 status=ok
// SIG undefined FUN_14021f4cc(void)

ulonglong FUN_14021f4cc(longlong param_1)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined2 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  undefined1 *local_48;
  code *local_40;
  code *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(longlong *)(param_1 + 0x30) == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x360);
  }
  lVar4 = FUN_14021f720(param_1);
  if (lVar4 == 0) {
    bVar8 = false;
  }
  else {
    bVar8 = *(int *)(lVar4 + 0xec) != 0;
  }
  uVar7 = 0;
  if ((lVar6 == 0) || (bVar8)) goto LAB_14021f62d;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    uVar7 = *(ulonglong *)(*(longlong *)(param_1 + 0x30) + 0x2a0);
    if ((uVar7 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(uVar7);
    }
    else if (uVar7 == 0) goto LAB_14021f563;
    if ((*(byte *)(uVar7 + 0x6c) & 2) != 0) {
LAB_14021f663:
      uVar7 = 0;
      goto LAB_14021f62d;
    }
  }
LAB_14021f563:
  uVar7 = CONCAT71((int7)(uVar7 >> 8),1);
  if (0 < *(int *)(lVar6 + 0x238)) {
    lVar4 = 0;
    do {
      iVar1 = *(int *)(*(longlong *)(lVar6 + 0x230) + 4 + lVar4 * 8);
      if ((((iVar1 != 0) &&
           (uVar2 = *(uint *)(*(longlong *)(lVar6 + 0x230) + lVar4 * 8), -1 < (int)uVar2)) &&
          ((int)uVar2 < DAT_14c9647dc)) &&
         (((plVar5 = (longlong *)
                     ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
           plVar5 != (longlong *)0x0 && ((int)plVar5[2] == iVar1)) &&
          (((*(uint *)(plVar5 + 1) & 0x10200000) == 0 &&
           (plVar5 = (longlong *)*plVar5, plVar5 != (longlong *)0x0)))))) {
        if (DAT_14cbadd90 == 0) {
          local_50 = &local_30;
          local_30 = FUN_141030f22;
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
        if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(plVar5[2] + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(plVar5[2] + 0x30) + (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) ==
            DAT_14cbadd90 + 0x30)) {
          cVar3 = (**(code **)(*plVar5 + 0x6c8))(plVar5);
          if ((cVar3 != '\0') &&
             (((plVar5[0x46e] != 0 && ((int)plVar5[0x46f] - 1U < 0xfffffffe)) ||
              ((char)plVar5[0x477] != '\0')))) goto LAB_14021f663;
        }
      }
      lVar4 = lVar4 + 1;
    } while ((int)lVar4 < *(int *)(lVar6 + 0x238));
  }
LAB_14021f62d:
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14021f720 FUN_14021f720 body=105 status=ok
// SIG undefined FUN_14021f720(void)

void FUN_14021f720(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_14021f7d6();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_14021f78a(param_1 + 0x100,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14021f78a FUN_14021f78a body=76 status=ok
// SIG undefined FUN_14021f78a(void)

void FUN_14021f78a(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_14021f7d6();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_14021f7c7;
    }
  }
  lVar2 = 0;
LAB_14021f7c7:
  FUN_1448a6f9c(param_1,lVar2);
  return;
}



// FUNCTION 14021f7d6 FUN_14021f7d6 body=228 status=ok
// SIG undefined FUN_14021f7d6(void)

longlong FUN_14021f7d6(void)

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
  undefined1 *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbabf80 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_1417ad04a;
    local_28 = &LAB_14599887c;
    local_38 = &LAB_148c28771;
    local_40 = FUN_145a27b6a;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x160;
    FUN_14081cfa3(L"/Script/OakGame",L"OakLoadingScreenSubsystem",&DAT_14cbabf80,&DAT_148c28770);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbabf80;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14021f8e8 FUN_14021f8e8 body=260 status=ok
// SIG undefined FUN_14021f8e8(void)

void FUN_14021f8e8(longlong param_1,undefined4 param_2,longlong *param_3,int param_4)

{
  longlong lVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  
  FUN_14019cc7c();
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  lVar1 = param_1 + (longlong)param_4 * 0x20;
  *(undefined8 *)(lVar1 + 0x168) = param_3;
  *(int *)(param_1 + 0x278) = *(int *)(param_1 + 0x278) + 1;
  lVar4 = *(longlong *)(lVar1 + 0x180);
  if (lVar4 == 0) {
    lVar4 = param_3[1];
    if ((*(byte *)((longlong)param_3 + 0x53) & lVar4 != 0) == 0) {
      if ((lVar4 != 0) && (*(char *)((longlong)param_3 + 0x55) == '\0')) {
        (**(code **)(*param_3 + 0x20))(param_3);
      }
      param_3[1] = 0;
    }
    else {
      lVar4 = 0;
    }
    *(longlong *)(lVar1 + 0x180) = lVar4;
  }
  FUN_142b0f1bc(param_1,param_2,lVar4,*(undefined4 *)(lVar1 + 0x170));
  *(undefined8 *)(lVar1 + 0x168) = 0;
  iVar2 = *(int *)(param_1 + 0x270);
  *(uint *)(param_1 + 0x270) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x274) < iVar2 + 1U) {
    FUN_14170b9ba(param_1 + 0x268,iVar2);
  }
  *(longlong **)(*(longlong *)(param_1 + 0x268) + (longlong)iVar2 * 8) = param_3;
  *(undefined4 *)(lVar1 + 0x170) = 0;
  cVar3 = FUN_144976b20(param_1);
  if (cVar3 != '\0') {
    FUN_1449d54ce(param_1);
  }
  *(int *)(param_1 + 0x278) = *(int *)(param_1 + 0x278) + -1;
                    /* WARNING: Could not recover jumptable at 0x00014021f9e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return;
}



// FUNCTION 14021f9ec FUN_14021f9ec body=984 status=ok
// SIG undefined FUN_14021f9ec(void)

void FUN_14021f9ec(longlong param_1,undefined8 param_2,uint *param_3,undefined1 param_4)

{
  longlong lVar1;
  longlong lVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  ulonglong *puVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auStack_88 [40];
  uint *local_60;
  uint local_54;
  undefined8 local_50;
  uint *local_48;
  uint **local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140220676(param_1,param_3,1);
  lVar2 = *(longlong *)(param_1 + 0x1c8);
  iVar9 = *(int *)(lVar2 + 0xc0);
  uVar5 = *param_3;
  if ((longlong)iVar9 == -1) {
    if (((uVar5 != 0) && (param_3[1] != 0)) && (uVar5 != DAT_14c948000)) {
      puVar7 = &DAT_14c948028;
      goto LAB_14021fa5e;
    }
LAB_14021fd66:
    puVar7 = (ulonglong *)((longlong)&DAT_14c948618 + 4);
    uVar5 = (uint)DAT_14c948618;
  }
  else {
    if (((uVar5 == 0) || (uVar8 = param_3[1], uVar8 == 0)) || (uVar5 == DAT_14c948000))
    goto LAB_14021fd66;
    puVar3 = param_3 + 2;
    if (0 < (int)param_3[9]) {
      puVar3 = *(uint **)(param_3 + 6);
    }
    if (1 < (int)uVar8) {
      puVar3 = *(uint **)(param_3 + 6);
    }
    if (uVar8 == 1 && 0 < iVar9) {
      puVar4 = (uint *)&DAT_14c948618;
      if (*(int *)(lVar2 + 0xc4) == 1) {
        puVar4 = puVar3;
      }
      uVar5 = *puVar4;
      puVar7 = (ulonglong *)(puVar4 + 1);
    }
    else {
      if ((int)uVar8 <= iVar9) goto LAB_14021fd66;
      puVar7 = (ulonglong *)(puVar3 + (longlong)iVar9 * 3 + 1);
      uVar5 = puVar3[(longlong)iVar9 * 3];
    }
  }
LAB_14021fa5e:
  uVar6 = (uint)(*puVar7 >> 0x20);
  uVar8 = uVar5;
  if (*puVar7 >> 0x20 != 0) {
    uVar8 = uVar6 >> 0xd ^ uVar5 - uVar6;
    uVar10 = uVar8 << 8 ^ (-0x61c88647 - uVar8) - uVar6;
    uVar12 = uVar10 >> 0xd ^ (uVar6 - uVar8) - uVar10;
    uVar8 = uVar12 >> 0xc ^ (uVar8 - uVar10) - uVar12;
    uVar13 = uVar8 << 0x10 ^ (uVar10 - uVar12) - uVar8;
    uVar10 = uVar13 >> 5 ^ (uVar12 - uVar8) - uVar13;
    uVar12 = uVar10 >> 3 ^ (uVar8 - uVar13) - uVar10;
    uVar8 = uVar12 << 10 ^ (uVar13 - uVar10) - uVar12;
    uVar8 = uVar8 >> 0xf ^ uVar10 - (uVar12 + uVar8);
  }
  if (*(int *)(lVar2 + 0x78) != *(int *)(lVar2 + 0xa4)) {
    lVar11 = lVar2 + 0xa8;
    if (*(longlong *)(lVar2 + 0xb0) != 0) {
      lVar11 = *(longlong *)(lVar2 + 0xb0);
    }
    iVar9 = *(int *)(lVar11 + (ulonglong)(*(int *)(lVar2 + 0xb8) - 1U & uVar8) * 4);
    if (iVar9 != -1) {
      lVar2 = *(longlong *)(lVar2 + 0x70);
      do {
        lVar11 = (longlong)iVar9 * 0x20;
        if ((*(uint *)(lVar2 + lVar11) == uVar5) &&
           (lVar1 = lVar2 + lVar11, *(uint *)(lVar1 + 8) == uVar6)) {
          if ((undefined8 *)(lVar1 + 0x10) != (undefined8 *)0x0 && lVar1 != 0) {
            local_60 = *(uint **)(lVar1 + 0x10);
            if (local_60 != (uint *)0x0) goto LAB_14021fc53;
            local_60 = (uint *)0x0;
          }
          break;
        }
        iVar9 = *(int *)(lVar2 + 0x18 + lVar11);
      } while (iVar9 != -1);
    }
  }
  puVar3 = (uint *)FUN_14001cc68(0x70,0x10);
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[10] = 0;
  puVar3[0xb] = 0;
  puVar3[0] = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  *(undefined1 *)((longlong)puVar3 + 0x2a) = 0xff;
  puVar3[0xc] = 0;
  puVar3[0xd] = 0;
  puVar3[0xe] = 0;
  puVar3[0xf] = 0;
  puVar3[0x10] = 0xffffffff;
  puVar3[0x11] = 0xffffffff;
  puVar3[0x12] = 0;
  puVar3[0x13] = 0;
  puVar3[0x14] = 0;
  puVar3[0x15] = 0;
  puVar3[0x16] = 0;
  puVar3[0x17] = 0;
  puVar3[0x18] = 0;
  puVar3[0x19] = 0;
  puVar3[0x1a] = 0;
  puVar3[0x1b] = 0;
  *(undefined2 *)(puVar3 + 10) = *(undefined2 *)(param_1 + 0xb6);
  local_60 = puVar3;
  FUN_1447715ec(puVar3,param_3);
  *(undefined1 *)((longlong)puVar3 + 0x2a) = param_4;
  lVar2 = *(longlong *)(param_1 + 0x1c8);
  *(longlong *)(puVar3 + 0x1a) = lVar2;
  iVar9 = *(int *)(lVar2 + 0xc0);
  local_54 = *puVar3;
  if ((longlong)iVar9 == -1) {
    if (((local_54 != 0) && (puVar3[1] != 0)) && (local_54 != DAT_14c948000)) {
      puVar3 = (uint *)&DAT_14c948028;
      goto LAB_14021fc23;
    }
  }
  else if (((local_54 != 0) && (uVar5 = puVar3[1], uVar5 != 0)) && (local_54 != DAT_14c948000)) {
    puVar4 = puVar3 + 2;
    if (0 < (int)puVar3[9]) {
      puVar4 = *(uint **)(puVar3 + 6);
    }
    if (1 < (int)uVar5) {
      puVar4 = *(uint **)(puVar3 + 6);
    }
    if (uVar5 == 1 && 0 < iVar9) {
      puVar3 = (uint *)&DAT_14c948618;
      if (*(int *)(lVar2 + 0xc4) == 1) {
        puVar3 = puVar4;
      }
      local_54 = *puVar3;
      puVar3 = puVar3 + 1;
      goto LAB_14021fc23;
    }
    if (iVar9 < (int)uVar5) {
      puVar3 = puVar4 + (longlong)iVar9 * 3 + 1;
      local_54 = puVar4[(longlong)iVar9 * 3];
      goto LAB_14021fc23;
    }
  }
  puVar3 = (uint *)((longlong)&DAT_14c948618 + 4);
  local_54 = (uint)DAT_14c948618;
LAB_14021fc23:
  local_50 = *(undefined8 *)puVar3;
  local_48 = &local_54;
  local_40 = &local_60;
  FUN_14021fdc6(lVar2 + 0x70,local_34,&local_48,0);
LAB_14021fc53:
  FUN_14022002e(param_1,local_60,param_2);
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14021fdc6 FUN_14021fdc6 body=448 status=ok
// SIG undefined FUN_14021fdc6(void)

undefined4 *
FUN_14021fdc6(longlong param_1,undefined4 *param_2,longlong *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  uint *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1402203aa(param_1,local_50);
  puVar1 = (undefined8 *)*param_3;
  puVar2 = (undefined8 *)param_3[1];
  local_48[2] = *(uint *)(puVar1 + 1);
  *(undefined8 *)local_48 = *puVar1;
  *(undefined8 *)(local_48 + 4) = *puVar2;
  local_48[6] = 0xffffffff;
  local_54 = local_50[0];
  uVar5 = local_48[2];
  uVar4 = *local_48;
  if (uVar5 != 0) {
    uVar4 = uVar5 >> 0xd ^ uVar4 - uVar5;
    uVar7 = uVar4 << 8 ^ (-0x61c88647 - uVar5) - uVar4;
    uVar8 = uVar7 >> 0xd ^ (uVar5 - uVar4) - uVar7;
    uVar4 = uVar8 >> 0xc ^ (uVar4 - uVar7) - uVar8;
    uVar5 = uVar4 << 0x10 ^ (uVar7 - uVar8) - uVar4;
    uVar7 = uVar5 >> 5 ^ (uVar8 - uVar4) - uVar5;
    uVar4 = uVar7 >> 3 ^ (uVar4 - uVar5) - uVar7;
    uVar5 = uVar4 << 10 ^ (uVar5 - uVar7) - uVar4;
    uVar4 = uVar5 >> 0xf ^ uVar7 - (uVar4 + uVar5);
  }
  local_68 = param_4;
  cVar3 = FUN_14021ff88(param_1,uVar4,local_48,&local_54);
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar5 < 4) {
      iVar9 = 1;
    }
    else {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar10 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar9 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      local_48[7] = uVar4;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      local_48[6] = *(uint *)(lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                       (longlong)(int)uVar4) * 4);
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar9;
      FUN_140220ed2(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14021ff88 FUN_14021ff88 body=166 status=ok
// SIG undefined FUN_14021ff88(void)

void FUN_14021ff88(longlong *param_1,uint param_2,int *param_3,int *param_4,undefined1 *param_5)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 uVar7;
  longlong *plVar8;
  int iVar9;
  longlong lVar10;
  
  uVar7 = 0;
  if (((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) &&
     (uVar7 = 0, (int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1)) {
    plVar8 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[8];
    }
    iVar9 = *(int *)((longlong)plVar8 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar9 != -1) {
      lVar2 = *param_1;
      do {
        lVar10 = (longlong)iVar9 * 0x20;
        if ((*(int *)(lVar2 + lVar10) == *param_3) &&
           (piVar1 = (int *)(lVar2 + lVar10), piVar1[2] == param_3[2])) {
          iVar3 = *param_3;
          iVar4 = param_3[1];
          iVar5 = param_3[2];
          iVar6 = param_3[3];
          *(undefined8 *)(piVar1 + 4) = *(undefined8 *)(param_3 + 4);
          *piVar1 = iVar3;
          piVar1[1] = iVar4;
          piVar1[2] = iVar5;
          piVar1[3] = iVar6;
          FUN_1456e7d2a(iVar3,*param_4,1);
          *param_4 = iVar9;
          uVar7 = 1;
          goto LAB_14022001d;
        }
        iVar9 = *(int *)(lVar2 + 0x18 + lVar10);
      } while (iVar9 != -1);
    }
    uVar7 = 0;
  }
LAB_14022001d:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar7;
  }
  return;
}



// FUNCTION 14022002e FUN_14022002e body=809 status=ok
// SIG undefined FUN_14022002e(void)

void FUN_14022002e(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  char cVar8;
  char cVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong *plVar15;
  bool bVar16;
  bool bVar17;
  undefined1 auStack_88 [45];
  undefined2 local_5b;
  undefined1 local_59;
  undefined8 local_58;
  longlong *local_50;
  undefined2 local_44;
  undefined2 local_42;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 != 0) {
    cVar8 = (**(code **)(*param_1 + 0x308))();
    plVar13 = (longlong *)(param_2 + 0x58);
    plVar10 = *(longlong **)(param_2 + 0x58);
    if (plVar10 == (longlong *)0x0) {
LAB_140220096:
      cVar8 = (**(code **)(*param_1 + 0x308))(param_1);
      plVar10 = (longlong *)FUN_14001cc68(0x30,0x10);
      *plVar10 = 0;
      *(undefined4 *)(plVar10 + 2) = 0xffffffff;
      plVar10[3] = 0;
      plVar10[4] = 0;
      plVar10[5] = 0;
      plVar10[1] = param_1[0x1a];
      if (cVar8 == '\0') {
        local_42 = 0x101;
        FUN_14000954c(param_3,&local_58);
      }
      else {
        local_58 = *param_3;
        local_50 = (longlong *)param_3[1];
        if (local_50 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_50 + 1) = (int)local_50[1] + 1;
          UNLOCK();
        }
      }
      FUN_1446dcc2e(plVar10 + 3,&local_58);
      plVar15 = local_50;
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_50 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar2 = (int *)((longlong)plVar15 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar15 + 0x10))(plVar15);
          }
        }
      }
      lVar11 = param_1[0x1a];
      *(undefined4 *)(plVar10 + 2) = *(undefined4 *)(lVar11 + 0x168);
      *plVar10 = param_2;
    }
    else {
      lVar11 = param_1[0x1a];
      plVar15 = plVar13;
      if (lVar11 != plVar10[1]) {
        do {
          plVar15 = plVar10;
          plVar10 = (longlong *)plVar15[5];
          if (plVar10 == (longlong *)0x0) goto LAB_140220096;
        } while (lVar11 != plVar10[1]);
        plVar15 = plVar15 + 5;
      }
      if (*(char *)(lVar11 + 0x158) == '\x01') {
        FUN_140220358(param_2);
        local_5b = 0x101;
        local_59 = 1;
        cVar9 = FUN_1470920bc(param_3,plVar10 + 3);
        if (cVar9 == '\0') {
          iVar5 = DAT_14c9a1758 + 1;
          *(int *)(param_2 + 0x44) = DAT_14c9a1758;
          DAT_14c9a1758 = iVar5;
          FUN_140220358(param_2);
          *(byte *)(param_2 + 0x2c) = *(byte *)(param_2 + 0x2c) | 8;
        }
      }
      *(undefined4 *)(plVar10 + 2) = *(undefined4 *)(param_1[0x1a] + 0x168);
      if (cVar8 == '\0') {
        local_44 = 0x101;
        FUN_14000954c(param_3,&local_58);
      }
      else {
        local_58 = *param_3;
        local_50 = (longlong *)param_3[1];
        if (local_50 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_50 + 1) = (int)local_50[1] + 1;
          UNLOCK();
        }
      }
      FUN_1446dcc2e(plVar10 + 3,&local_58);
      plVar1 = local_50;
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_50 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar1 + 0x10))(plVar1);
          }
        }
      }
      if ((*(byte *)(param_1[0x1a] + 0x160) & 1) == 0) goto LAB_1402201cc;
      *plVar15 = plVar10[5];
      plVar10[5] = 0;
      lVar11 = param_1[0x1a];
    }
    if (*(char *)(lVar11 + 0x158) == '\x01') {
      iVar5 = DAT_14c9a1758 + 1;
      *(int *)(param_2 + 0x44) = DAT_14c9a1758;
      DAT_14c9a1758 = iVar5;
      FUN_140220358(param_2);
      *(byte *)(param_2 + 0x2c) = *(byte *)(param_2 + 0x2c) | 8;
    }
    lVar11 = *plVar13;
    if (lVar11 == 0) {
LAB_1402201c2:
      lVar11 = 0;
    }
    else {
      lVar14 = *(longlong *)(lVar11 + 8);
      if (lVar14 != 0) {
        lVar6 = plVar10[1];
        iVar5 = *(int *)(lVar6 + 0x15c);
        lVar12 = lVar11;
        do {
          iVar4 = *(int *)(lVar14 + 0x15c);
          bVar17 = SBORROW4(iVar5,iVar4);
          iVar7 = iVar5 - iVar4;
          bVar16 = false;
          lVar11 = lVar12;
          if (iVar5 == iVar4) {
            bVar17 = SBORROW4(*(int *)(lVar6 + 0x98),*(int *)(lVar14 + 0x98));
            iVar7 = *(int *)(lVar6 + 0x98) - *(int *)(lVar14 + 0x98);
            bVar16 = iVar7 == 0;
            if (!bVar16) goto LAB_140220185;
            if (*(float *)(lVar14 + 0x9c) <= *(float *)(lVar6 + 0x9c)) break;
          }
          else {
LAB_140220185:
            if (!bVar16 && bVar17 == iVar7 < 0) break;
          }
          lVar11 = *(longlong *)(lVar12 + 0x28);
          plVar13 = (longlong *)(lVar12 + 0x28);
          if (lVar11 == 0) goto LAB_1402201c2;
          lVar14 = *(longlong *)(lVar11 + 8);
          lVar12 = lVar11;
        } while (lVar14 != 0);
      }
    }
    plVar10[5] = lVar11;
    *plVar13 = (longlong)plVar10;
  }
LAB_1402201cc:
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140220358 FUN_140220358 body=81 status=ok
// SIG undefined FUN_140220358(void)

void FUN_140220358(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_1 + 0x2b) != '\0') {
    *(undefined1 *)(param_1 + 0x2b) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    plVar3 = *(longlong **)(param_1 + 0x50);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x50) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x0001402203a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar3 + 0x10))(plVar3);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 1402203aa FUN_1402203aa body=715 status=ok
// SIG undefined FUN_1402203aa(void)

int * FUN_1402203aa(longlong *param_1,int *param_2)

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
      FUN_1447711aa(param_1,iVar15);
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
                    if (((&DAT_14c841d90)[uVar17 & 0xffffffff] & 0xf) == 0) goto LAB_140220568;
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
LAB_140220568:
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
    iVar8 = *(int *)(*param_1 + 4 + lVar5 * 0x20);
    *(int *)(param_1 + 6) = iVar8;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar8 * 0x20) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar5 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 140220676 FUN_140220676 body=2138 status=ok
// SIG undefined FUN_140220676(void)

void FUN_140220676(longlong param_1,uint *param_2,char param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  ulonglong *puVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  uint *puVar14;
  uint *puVar15;
  byte bVar16;
  uint uVar17;
  int iVar18;
  longlong lVar19;
  ulonglong uVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  undefined4 *puVar24;
  int iVar25;
  undefined1 auStack_a8 [32];
  ulonglong local_88;
  undefined8 local_80;
  uint local_78;
  uint local_70;
  ulonglong local_6c;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  puVar15 = *(uint **)(param_1 + 0x1c8);
  uVar17 = *param_2;
  if ((puVar15 != (uint *)0x0) && (uVar17 == *puVar15)) {
    if (param_3 == '\0') goto LAB_140220768;
    lVar11 = FUN_1400e3e52(param_1,puVar15);
    *(longlong *)(param_1 + 0x1c8) = lVar11;
    if (lVar11 != 0) goto LAB_140220768;
    uVar17 = *param_2;
  }
  iVar6 = *(int *)(param_1 + 0x338);
  if ((longlong)iVar6 == -1) {
    if (((uVar17 != 0) && (param_2[1] != 0)) && (uVar17 != DAT_14c948000)) {
      puVar9 = &DAT_14c948028;
      local_70 = uVar17;
      goto LAB_1402206ea;
    }
LAB_140220879:
    puVar9 = (ulonglong *)((longlong)&DAT_14c948618 + 4);
    local_70 = (uint)DAT_14c948618;
  }
  else {
    if (((uVar17 == 0) || (uVar8 = param_2[1], uVar8 == 0)) || (uVar17 == DAT_14c948000))
    goto LAB_140220879;
    puVar15 = param_2 + 2;
    if (0 < (int)param_2[9]) {
      puVar15 = *(uint **)(param_2 + 6);
    }
    if (1 < (int)uVar8) {
      puVar15 = *(uint **)(param_2 + 6);
    }
    if (uVar8 == 1 && 0 < iVar6) {
      puVar14 = (uint *)&DAT_14c948618;
      if (*(int *)(param_1 + 0x33c) == 1) {
        puVar14 = puVar15;
      }
      local_70 = *puVar14;
      puVar9 = (ulonglong *)(puVar14 + 1);
    }
    else {
      if ((int)uVar8 <= iVar6) goto LAB_140220879;
      puVar9 = (ulonglong *)(puVar15 + (longlong)iVar6 * 3 + 1);
      local_70 = puVar15[(longlong)iVar6 * 3];
    }
  }
LAB_1402206ea:
  plVar1 = (longlong *)(param_1 + 0x2e8);
  local_6c = *puVar9;
  uVar17 = local_70;
  if (local_6c >> 0x20 != 0) {
    uVar8 = (uint)(local_6c >> 0x20);
    uVar17 = uVar8 >> 0xd ^ local_70 - uVar8;
    uVar21 = uVar17 << 8 ^ (-0x61c88647 - uVar17) - uVar8;
    uVar22 = uVar21 >> 0xd ^ (uVar8 - uVar17) - uVar21;
    uVar8 = uVar22 >> 0xc ^ (uVar17 - uVar21) - uVar22;
    uVar17 = uVar8 << 0x10 ^ (uVar21 - uVar22) - uVar8;
    uVar21 = uVar17 >> 5 ^ (uVar22 - uVar8) - uVar17;
    uVar8 = uVar21 >> 3 ^ (uVar8 - uVar17) - uVar21;
    uVar17 = uVar8 << 10 ^ (uVar17 - uVar21) - uVar8;
    uVar17 = uVar17 >> 0xf ^ uVar21 - (uVar8 + uVar17);
  }
  iVar6 = FUN_1447fa34e(plVar1,uVar17,&local_70);
  if (iVar6 != -1) {
    if ((*plVar1 + (longlong)iVar6 * 0x20 != 0) &&
       (plVar10 = (longlong *)((longlong)iVar6 * 0x20 + *plVar1 + 0x10), plVar10 != (longlong *)0x0)
       ) {
      lVar11 = *plVar10;
      if (param_3 != '\0') {
        lVar11 = FUN_1400e3e52(param_1,lVar11);
      }
      *(longlong *)(param_1 + 0x1c8) = lVar11;
      if (lVar11 != 0) goto LAB_140220768;
    }
  }
  puVar12 = (undefined8 *)FUN_14001cc68(200,0x10);
  *puVar12 = 0;
  puVar12[1] = 0;
  *(undefined4 *)(puVar12 + 2) = 0;
  puVar12[3] = 0;
  puVar12[4] = 0;
  *(undefined2 *)((longlong)puVar12 + 0x2a) = 0xff;
  *(byte *)((longlong)puVar12 + 0x2c) = *(byte *)((longlong)puVar12 + 0x2c) & 0xc0;
  puVar12[6] = 0;
  puVar12[7] = 0;
  puVar12[8] = 0xffffffffffffffff;
  puVar12[0x12] = 0;
  *(undefined4 *)(puVar12 + 0x13) = 0;
  puVar12[9] = 0;
  puVar12[10] = 0;
  puVar12[0xb] = 0;
  puVar12[0xc] = 0;
  puVar12[0xd] = 0;
  puVar12[0xe] = 0;
  puVar12[0xf] = 0;
  *(undefined8 *)((longlong)puVar12 + 0x9c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar12 + 0xa4) = 0;
  puVar12[0x16] = 0;
  *(undefined4 *)(puVar12 + 0x17) = 0;
  puVar12[0x18] = &DAT_100000001;
  *(undefined8 **)(param_1 + 0x1c8) = puVar12;
  *(undefined2 *)(puVar12 + 5) = *(undefined2 *)(param_1 + 0xb6);
  puVar12[0xd] = puVar12;
  if (((*param_2 == 0) || (uVar17 = param_2[1], uVar17 == 0)) || (*param_2 == DAT_14c948000)) {
LAB_140220d35:
    local_78 = DAT_14c948620;
    local_80 = CONCAT44(DAT_14c948618._4_4_,(uint)DAT_14c948618);
  }
  else {
    if (((int)uVar17 < 2) && ((int)param_2[9] < 1)) {
      param_2 = param_2 + 2;
    }
    else {
      param_2 = *(uint **)(param_2 + 6);
    }
    if ((int)uVar17 < 1) goto LAB_140220d35;
    local_78 = param_2[2];
    local_80 = *(undefined8 *)param_2;
  }
  FUN_1448075d0(&local_70,&local_80);
  FUN_1404e49fa(*(undefined8 *)(param_1 + 0x1c8),&local_70);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  puVar15 = *(uint **)(param_1 + 0x1c8);
  iVar6 = *(int *)(param_1 + 0x338);
  uVar17 = *puVar15;
  if ((longlong)iVar6 == -1) {
    if (((uVar17 != 0) && (puVar15[1] != 0)) && (uVar17 != DAT_14c948000)) {
      puVar9 = &DAT_14c948028;
      goto LAB_1402209e3;
    }
LAB_140220d00:
    puVar9 = (ulonglong *)((longlong)&DAT_14c948618 + 4);
    uVar17 = (uint)DAT_14c948618;
  }
  else {
    if (((uVar17 == 0) || (uVar8 = puVar15[1], uVar8 == 0)) || (uVar17 == DAT_14c948000))
    goto LAB_140220d00;
    puVar14 = puVar15 + 2;
    if (0 < (int)puVar15[9]) {
      puVar14 = *(uint **)(puVar15 + 6);
    }
    if (1 < (int)uVar8) {
      puVar14 = *(uint **)(puVar15 + 6);
    }
    if (uVar8 == 1 && 0 < iVar6) {
      puVar15 = (uint *)&DAT_14c948618;
      if (*(int *)(param_1 + 0x33c) == 1) {
        puVar15 = puVar14;
      }
      uVar17 = *puVar15;
      puVar9 = (ulonglong *)(puVar15 + 1);
    }
    else {
      if ((int)uVar8 <= iVar6) goto LAB_140220d00;
      puVar9 = (ulonglong *)(puVar14 + (longlong)iVar6 * 3 + 1);
      uVar17 = puVar14[(longlong)iVar6 * 3];
    }
  }
LAB_1402209e3:
  uVar20 = *puVar9;
  if (*(int *)(param_1 + 0x31c) == 0) {
    iVar6 = *(int *)(param_1 + 0x2f0);
    *(int *)(param_1 + 0x2f0) = iVar6 + 1;
    if (*(int *)(param_1 + 0x2f4) == iVar6) {
      FUN_1447711aa(plVar1,iVar6);
    }
    iVar25 = *(int *)(param_1 + 0x310);
    if (iVar25 == 0) {
      iVar7 = -1;
    }
    else {
      iVar7 = iVar25 + 0x1e;
      if (-1 < iVar25 + -1) {
        iVar7 = iVar25 + -1;
      }
      iVar7 = iVar7 >> 5;
    }
    lVar19 = param_1 + 0x2f8;
    iVar18 = iVar25 + 1;
    iVar23 = iVar25 + 0x1f;
    if (-1 < iVar25) {
      iVar23 = iVar25;
    }
    if (iVar23 >> 5 == iVar7) {
      *(int *)(param_1 + 0x310) = iVar18;
    }
    else {
      if (*(int *)(param_1 + 0x314) <= iVar25) {
        uVar8 = iVar25 + 0x20;
        local_88 = (ulonglong)uVar8;
        if (uVar8 < 0xa0) {
          iVar18 = 0x80;
          iVar7 = iVar25;
        }
        else {
          uVar8 = uVar8 >> 5;
          local_88 = (ulonglong)uVar8;
          if (*(int *)(param_1 + 0x314) + 0x1fU < 0xa0) {
            uVar21 = 4;
            if (4 < uVar8) {
              uVar21 = uVar8;
            }
          }
          else {
            uVar21 = (uVar8 * 3 >> 3) + uVar8 + 0x10;
          }
          uVar13 = FUN_144a3809e(uVar21 << 2,0);
          iVar7 = (int)(uVar13 >> 2);
          iVar18 = -0x20;
          if ((int)local_88 <= iVar7) {
            iVar18 = iVar7 << 5;
          }
          iVar7 = *(int *)(param_1 + 0x310);
        }
        *(int *)(param_1 + 0x314) = iVar18;
        FUN_1446efbd8(lVar19,iVar7);
        iVar18 = *(int *)(param_1 + 0x310) + 1;
      }
      iVar7 = iVar18 + 0x1f;
      if (-1 < iVar18) {
        iVar7 = iVar18;
      }
      *(int *)(param_1 + 0x310) = iVar18;
      if (iVar18 % 0x20 != 0) {
        lVar11 = *(longlong *)(param_1 + 0x308);
        if (*(longlong *)(param_1 + 0x308) == 0) {
          lVar11 = lVar19;
        }
        bVar16 = -(char)(iVar18 % 0x20);
        *(uint *)(lVar11 + (longlong)(iVar7 >> 5) * 4) =
             (uint)(*(int *)(lVar11 + (longlong)(iVar7 >> 5) * 4) << (bVar16 & 0x1f)) >>
             (bVar16 & 0x1f);
      }
    }
    lVar11 = (longlong)iVar6;
    if (*(longlong *)(param_1 + 0x308) != 0) {
      lVar19 = *(longlong *)(param_1 + 0x308);
    }
    bVar16 = (byte)iVar25 & 0x1f;
    puVar15 = (uint *)(lVar19 + (longlong)(iVar23 >> 5) * 4);
    *puVar15 = *puVar15 & (-2 << bVar16 | 0xfffffffeU >> 0x20 - bVar16);
  }
  else {
    iVar6 = *(int *)(param_1 + 0x318);
    lVar11 = (longlong)iVar6;
    iVar25 = *(int *)(*(longlong *)(param_1 + 0x2e8) + 4 + lVar11 * 0x20);
    *(int *)(param_1 + 0x318) = iVar25;
    iVar7 = *(int *)(param_1 + 0x31c) + -1;
    *(int *)(param_1 + 0x31c) = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x2e8) + (longlong)iVar25 * 0x20) = 0xffffffff;
    }
  }
  iVar25 = 1;
  lVar19 = param_1 + 0x2f8;
  if (*(longlong *)(param_1 + 0x308) != 0) {
    lVar19 = *(longlong *)(param_1 + 0x308);
  }
  iVar7 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar7 = iVar6;
  }
  puVar15 = (uint *)(lVar19 + (longlong)(iVar7 >> 5) * 4);
  *puVar15 = *puVar15 | 1 << ((byte)iVar6 & 0x1f);
  lVar19 = *(longlong *)(param_1 + 0x2e8);
  lVar11 = lVar11 * 0x20;
  *(uint *)(lVar19 + lVar11) = uVar17;
  *(ulonglong *)(lVar19 + 4 + lVar11) = uVar20;
  *(undefined8 *)(lVar19 + 0x10 + lVar11) = *(undefined8 *)(param_1 + 0x1c8);
  *(undefined4 *)(lVar19 + 0x18 + lVar11) = 0xffffffff;
  if (uVar20 >> 0x20 != 0) {
    uVar8 = (uint)(uVar20 >> 0x20);
    uVar17 = uVar8 >> 0xd ^ uVar17 - uVar8;
    uVar21 = uVar17 << 8 ^ (-0x61c88647 - uVar17) - uVar8;
    uVar8 = uVar21 >> 0xd ^ (uVar8 - uVar17) - uVar21;
    uVar17 = uVar8 >> 0xc ^ (uVar17 - uVar21) - uVar8;
    uVar22 = uVar17 << 0x10 ^ (uVar21 - uVar8) - uVar17;
    uVar8 = uVar22 >> 5 ^ (uVar8 - uVar17) - uVar22;
    uVar21 = uVar8 >> 3 ^ (uVar17 - uVar22) - uVar8;
    uVar17 = uVar21 << 10 ^ (uVar22 - uVar8) - uVar21;
    uVar17 = uVar17 >> 0xf ^ uVar8 - (uVar21 + uVar17);
  }
  puVar24 = (undefined4 *)(lVar19 + lVar11);
  if (*(int *)(param_1 + 0x2f0) - *(int *)(param_1 + 0x31c) == 1) {
    uVar8 = 1;
  }
  else {
    iVar7 = FUN_1447fa34e(plVar1,uVar17,puVar24);
    if (iVar7 != -1) {
      lVar11 = *plVar1;
      uVar2 = *puVar24;
      uVar3 = puVar24[1];
      uVar4 = puVar24[2];
      uVar5 = puVar24[3];
      *(undefined8 *)(lVar11 + 0x10 + (longlong)iVar7 * 0x20) = *(undefined8 *)(puVar24 + 4);
      puVar24 = (undefined4 *)(lVar11 + (longlong)iVar7 * 0x20);
      *puVar24 = uVar2;
      puVar24[1] = uVar3;
      puVar24[2] = uVar4;
      puVar24[3] = uVar5;
      FUN_14709f6cc(plVar1,iVar6);
      goto LAB_140220768;
    }
    uVar8 = *(int *)(param_1 + 0x2f0) - *(int *)(param_1 + 0x31c);
    if (3 < uVar8) {
      uVar20 = (ulonglong)(uVar8 & 0xfffffffe) + 0xf;
      lVar11 = 0x3f;
      if (uVar20 != 0) {
        for (; uVar20 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar25 = 1 << ((byte)lVar11 & 0x1f);
    }
  }
  if (((int)uVar8 < 1) || (iVar25 <= *(int *)(param_1 + 0x330))) {
    uVar17 = *(int *)(param_1 + 0x330) - 1U & uVar17;
    puVar24[7] = uVar17;
    lVar11 = *(longlong *)(param_1 + 0x328);
    if (*(longlong *)(param_1 + 0x328) == 0) {
      lVar11 = param_1 + 800;
    }
    puVar24[6] = *(undefined4 *)
                  (lVar11 + ((longlong)*(int *)(param_1 + 0x330) - 1U & (longlong)(int)uVar17) * 4);
    lVar11 = *(longlong *)(param_1 + 0x328);
    if (*(longlong *)(param_1 + 0x328) == 0) {
      lVar11 = param_1 + 800;
    }
    *(int *)(lVar11 + ((longlong)*(int *)(param_1 + 0x330) - 1U & (longlong)(int)uVar17) * 4) =
         iVar6;
  }
  else {
    *(int *)(param_1 + 0x330) = iVar25;
    FUN_1402211e2(plVar1);
  }
LAB_140220768:
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140220ed2 FUN_140220ed2 body=783 status=ok
// SIG undefined FUN_140220ed2(void)

void FUN_140220ed2(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  uint *puVar10;
  ulonglong uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  
  plVar5 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar5,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar12 = *(uint *)(param_1 + 9);
  if (uVar12 == 1) {
    if (*plVar5 != 0) {
      FUN_1446efa72(plVar5,0,0,4);
    }
  }
  else {
    if (uVar12 == 0) {
      return;
    }
    FUN_1446efa72(plVar5,0,uVar12,4);
    if ((int)uVar12 < 1) goto LAB_140220f47;
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
  } while (uVar12 != uVar2);
LAB_140220f47:
  iVar6 = (int)param_1[5];
  if (iVar6 == 0) {
    uVar3 = 0;
    uVar11 = 1;
    iVar15 = 0;
    iVar4 = 0;
  }
  else {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = (uint *)(param_1 + 2);
    }
    uVar12 = *puVar10;
    if (uVar12 == 0) {
      iVar15 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar15 = iVar6 + -1;
      }
      uVar3 = 0;
      uVar11 = (ulonglong)(uint)(iVar15 >> 5);
      if (iVar15 >> 5 < 1) {
        uVar11 = uVar3;
      }
      iVar4 = 0;
      do {
        if (uVar11 == uVar3) {
          return;
        }
        iVar4 = iVar4 + 0x20;
        uVar12 = puVar10[uVar3 + 1];
        uVar3 = uVar3 + 1;
      } while (uVar12 == 0);
    }
    else {
      uVar3 = 0;
      iVar4 = 0;
    }
    uVar11 = (ulonglong)(-uVar12 & uVar12);
    uVar7 = uVar11 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar7 != 0) {
      for (; uVar7 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar15 = (iVar4 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    if (iVar6 <= iVar15) {
      iVar15 = iVar6;
    }
  }
  if (iVar15 < iVar6) {
    uVar12 = 0xffffffff;
    do {
      lVar9 = *param_1;
      lVar8 = (longlong)iVar15 * 0x20;
      uVar2 = *(uint *)(lVar9 + lVar8);
      uVar17 = *(uint *)(lVar9 + 8 + lVar8);
      if (uVar17 != 0) {
        uVar16 = uVar17 >> 0xd ^ uVar2 - uVar17;
        uVar2 = uVar16 << 8 ^ (-0x61c88647 - uVar17) - uVar16;
        uVar17 = uVar2 >> 0xd ^ (uVar17 - uVar16) - uVar2;
        uVar16 = uVar17 >> 0xc ^ (uVar16 - uVar2) - uVar17;
        uVar2 = uVar16 << 0x10 ^ (uVar2 - uVar17) - uVar16;
        uVar17 = uVar2 >> 5 ^ (uVar17 - uVar16) - uVar2;
        uVar16 = uVar17 >> 3 ^ (uVar16 - uVar2) - uVar17;
        uVar2 = uVar16 << 10 ^ (uVar2 - uVar17) - uVar16;
        uVar2 = uVar2 >> 0xf ^ uVar17 - (uVar16 + uVar2);
      }
      uVar7 = (longlong)(int)uVar2 & (longlong)(int)param_1[9] - 1U;
      iVar6 = (int)uVar7;
      *(int *)(lVar9 + lVar8 + 0x1c) = iVar6;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar9 + lVar8 + 0x18) =
           *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(int *)((longlong)plVar5 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar15;
      uVar12 = uVar12 & ~(uint)uVar11;
      puVar10 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar10 = (uint *)(param_1 + 2);
      }
      iVar6 = (int)param_1[5];
      iVar15 = (int)uVar3;
      lVar9 = (longlong)iVar15;
      uVar2 = puVar10[lVar9] & uVar12;
      if (uVar2 == 0) {
        iVar13 = iVar6 + 0x1e;
        if (-1 < iVar6 + -1) {
          iVar13 = iVar6 + -1;
        }
        iVar13 = iVar13 >> 5;
        iVar14 = iVar13;
        if (iVar13 < iVar15) {
          iVar14 = iVar15;
        }
        if (iVar13 <= iVar15) {
          return;
        }
        lVar8 = 0;
        while( true ) {
          iVar4 = iVar4 + 0x20;
          uVar2 = puVar10[lVar9 + lVar8 + 1];
          if (uVar2 != 0) break;
          lVar8 = lVar8 + 1;
          if (iVar14 - lVar9 == lVar8) {
            return;
          }
        }
        uVar3 = (ulonglong)(iVar15 + (int)lVar8 + 1);
        uVar12 = 0xffffffff;
      }
      uVar11 = (ulonglong)(-uVar2 & uVar2);
      uVar7 = uVar11 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar15 = (iVar4 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    } while (iVar15 < iVar6);
  }
  return;
}



// FUNCTION 1402211e2 FUN_1402211e2 body=795 status=ok
// SIG undefined FUN_1402211e2(void)

void FUN_1402211e2(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  uint *puVar10;
  ulonglong uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  
  plVar5 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar5,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar12 = *(uint *)(param_1 + 9);
  if (uVar12 == 1) {
    if (*plVar5 != 0) {
      FUN_1446efa72(plVar5,0,0,4);
    }
  }
  else {
    if (uVar12 == 0) {
      return;
    }
    FUN_1446efa72(plVar5,0,uVar12,4);
    if ((int)uVar12 < 1) goto LAB_140221257;
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
  } while (uVar12 != uVar2);
LAB_140221257:
  iVar6 = (int)param_1[5];
  if (iVar6 == 0) {
    uVar3 = 0;
    uVar11 = 1;
    iVar15 = 0;
    iVar4 = 0;
  }
  else {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = (uint *)(param_1 + 2);
    }
    uVar12 = *puVar10;
    if (uVar12 == 0) {
      iVar15 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar15 = iVar6 + -1;
      }
      uVar3 = 0;
      uVar11 = (ulonglong)(uint)(iVar15 >> 5);
      if (iVar15 >> 5 < 1) {
        uVar11 = uVar3;
      }
      iVar4 = 0;
      do {
        if (uVar11 == uVar3) {
          return;
        }
        iVar4 = iVar4 + 0x20;
        uVar12 = puVar10[uVar3 + 1];
        uVar3 = uVar3 + 1;
      } while (uVar12 == 0);
    }
    else {
      uVar3 = 0;
      iVar4 = 0;
    }
    uVar11 = (ulonglong)(-uVar12 & uVar12);
    uVar7 = uVar11 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar7 != 0) {
      for (; uVar7 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar15 = (iVar4 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    if (iVar6 <= iVar15) {
      iVar15 = iVar6;
    }
  }
  if (iVar15 < iVar6) {
    uVar12 = 0xffffffff;
    do {
      lVar9 = *param_1;
      lVar8 = (longlong)iVar15 * 0x20;
      uVar2 = *(uint *)(lVar9 + lVar8);
      uVar17 = *(uint *)(lVar9 + 8 + lVar8);
      if (uVar17 != 0) {
        uVar16 = uVar17 >> 0xd ^ uVar2 - uVar17;
        uVar2 = uVar16 << 8 ^ (-0x61c88647 - uVar17) - uVar16;
        uVar17 = uVar2 >> 0xd ^ (uVar17 - uVar16) - uVar2;
        uVar16 = uVar17 >> 0xc ^ (uVar16 - uVar2) - uVar17;
        uVar2 = uVar16 << 0x10 ^ (uVar2 - uVar17) - uVar16;
        uVar17 = uVar2 >> 5 ^ (uVar17 - uVar16) - uVar2;
        uVar16 = uVar17 >> 3 ^ (uVar16 - uVar2) - uVar17;
        uVar2 = uVar16 << 10 ^ (uVar2 - uVar17) - uVar16;
        uVar2 = uVar2 >> 0xf ^ uVar17 - (uVar16 + uVar2);
      }
      uVar7 = (longlong)(int)uVar2 & (longlong)(int)param_1[9] - 1U;
      iVar6 = (int)uVar7;
      *(int *)(lVar9 + lVar8 + 0x1c) = iVar6;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar9 + lVar8 + 0x18) =
           *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(int *)((longlong)plVar5 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar15;
      uVar12 = uVar12 & ~(uint)uVar11;
      puVar10 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar10 = (uint *)(param_1 + 2);
      }
      iVar6 = (int)param_1[5];
      iVar15 = (int)uVar3;
      lVar9 = (longlong)iVar15;
      uVar2 = puVar10[lVar9] & uVar12;
      if (uVar2 == 0) {
        iVar13 = iVar6 + 0x1e;
        if (-1 < iVar6 + -1) {
          iVar13 = iVar6 + -1;
        }
        iVar13 = iVar13 >> 5;
        iVar14 = iVar13;
        if (iVar13 < iVar15) {
          iVar14 = iVar15;
        }
        if (iVar13 <= iVar15) {
          return;
        }
        lVar8 = 0;
        while( true ) {
          iVar4 = iVar4 + 0x20;
          uVar2 = puVar10[lVar9 + lVar8 + 1];
          if (uVar2 != 0) break;
          lVar8 = lVar8 + 1;
          if (iVar14 - lVar9 == lVar8) {
            return;
          }
        }
        uVar3 = (ulonglong)(iVar15 + (int)lVar8 + 1);
        uVar12 = 0xffffffff;
      }
      uVar11 = (ulonglong)(-uVar2 & uVar2);
      uVar7 = uVar11 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar15 = (iVar4 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    } while (iVar15 < iVar6);
  }
  return;
}



// FUNCTION 1402214fe FUN_1402214fe body=231 status=ok
// SIG undefined FUN_1402214fe(void)

void FUN_1402214fe(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  longlong local_50;
  int local_48;
  int local_44;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x56c8));
  lVar3 = *(longlong *)(param_1 + 0x56f0);
  *(undefined8 *)(param_1 + 0x56f0) = 0;
  iVar1 = *(int *)(param_1 + 0x56f8);
  iVar2 = *(int *)(param_1 + 0x56fc);
  *(undefined8 *)(param_1 + 0x56f8) = 0;
  if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar2);
  }
  if (iVar2 != 0) {
    FUN_1402215fa(param_1 + 0x56f0,iVar2);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x56c8));
  if (iVar1 < 1) {
    if (lVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_98);
    }
  }
  else {
    local_68 = 0;
    local_58 = &PTR_LAB_14a2e9720;
    local_78 = FUN_142fcf6bc;
    local_50 = lVar3;
    local_48 = iVar1;
    local_44 = iVar2;
    FUN_1407461b0(1);
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402215fa FUN_1402215fa body=315 status=ok
// SIG undefined FUN_1402215fa(void)

void FUN_1402215fa(longlong param_1,int param_2)

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
    uVar3 = (longlong)param_2 * 8;
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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_140221664;
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
LAB_140221664:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,8,4);
  }
  return;
}



// FUNCTION 140221736 FUN_140221736 body=341 status=ok
// SIG undefined FUN_140221736(void)

undefined4 FUN_140221736(longlong *param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  byte bVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  longlong *local_38;
  undefined1 local_30;
  byte local_2f;
  undefined1 local_2e;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar8 = FUN_1402218d6(param_2);
  if (lVar8 == 0) {
    uVar7 = 0;
  }
  else {
    local_50 = 0;
    local_48 = CONCAT44(DAT_14c966e80._4_4_,(undefined4)DAT_14c966e80);
    uStack_40 = CONCAT44(DAT_14c966e88._4_4_,(undefined4)DAT_14c966e88);
    local_38 = DAT_14c966e90;
    bVar6 = 1;
    if (DAT_14c966e90 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_14c966e90 + 1) = (int)DAT_14c966e90[1] + 1;
      UNLOCK();
      bVar6 = (local_2f & 0xfc) + 1;
    }
    local_30 = 7;
    local_2e = 0;
    local_2c = 0;
    local_2f = bVar6;
    FUN_14022188c(param_2,&local_50);
    plVar1 = local_38;
    local_48 = *(undefined8 *)(param_2 + 0x28);
    uStack_40 = *(undefined8 *)(param_2 + 0x30);
    plVar4 = *(longlong **)(param_2 + 0x38);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_38 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        puVar5 = (undefined8 *)*local_38;
        local_38 = plVar4;
        (*(code *)*puVar5)(plVar1);
        LOCK();
        piVar3 = (int *)((longlong)plVar1 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        plVar4 = local_38;
        if (*piVar3 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
          plVar4 = local_38;
        }
      }
    }
    local_38 = plVar4;
    local_2f = (local_2f & 0xfc) + 1;
    uVar7 = (**(code **)(*param_1 + 0x2c8))(param_1,&local_50,param_3);
    plVar4 = local_38;
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_38 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_38)(local_38);
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
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14022188c FUN_14022188c body=73 status=ok
// SIG undefined FUN_14022188c(void)

undefined8 * FUN_14022188c(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = FUN_1402218d6();
  if ((lVar1 != 0) && (plVar2 = (longlong *)FUN_1402218d6(param_1), plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x2a0))(plVar2,param_2,param_1);
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}


