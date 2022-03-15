/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef nMruby_tULongPointer_TECSGEN_H
#define nMruby_tULongPointer_TECSGEN_H

/*
 * celltype          :  tULongPointer
 * global name       :  nMruby_tULongPointer
 * idx_is_id(actual) :  no(no)
 * singleton         :  yes
 * has_CB            :  false
 * has_INIB          :  false
 * rom               :  yes
 * CB initializer    :  no
 */

/* �������Х�إå� #_IGH_# */
#include "global_tecsgen.h"

/* �����˥���إå� #_ISH_# */
#include "nMruby_sInitializeTECSBridge_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* ���� CB (���ߡ�)����� #_CCDP_# */
typedef struct tag_nMruby_tULongPointer_CB {
    int  dummy;
} nMruby_tULongPointer_CB;
/* ���󥰥�ȥ󥻥� CB �ץ��ȥ�������� #_SCP_# */


/* ���륿���פ�IDX�� #_CTIX_# */
typedef int   nMruby_tULongPointer_IDX;

/* �������ؿ��ץ��ȥ�������� #_EPP_# */
/* nMruby_sInitializeTECSBridge */
void         nMruby_tULongPointer_eInitialize_initializeBridge( mrb_state* mrb, struct RClass * TECS);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY


/* ����CB������ޥ��� #_GCB_# */
#define nMruby_tULongPointer_GET_CELLCB(idx) ((void *)0)
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* ������������ȥ�ؿ��ץ��ȥ����������VMT���׺�Ŭ���ˤ�껲�Ȥ����Ρ� #_EPSP_# */
/* eInitialize */
void           nMruby_tULongPointer_eInitialize_initializeBridge_skel( const struct tag_nMruby_sInitializeTECSBridge_VDES *epd, mrb_state* mrb, struct RClass * TECS);

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY


/* ����CB������ޥ���(û�̷�) #_GCBA_# */
#define GET_CELLCB(idx)  nMruby_tULongPointer_GET_CELLCB(idx)

/* CELLCB ��(û�̷�) #_CCT_# */
#define CELLCB	nMruby_tULongPointer_CB

/* ���륿���פ�IDX��(û�̷�) #_CTIXA_# */
#define CELLIDX	nMruby_tULongPointer_IDX

#define tULongPointer_IDX  nMruby_tULongPointer_IDX

/* �������ؿ��ޥ�����û�̷��� #_EPM_# */
#define eInitialize_initializeBridge nMruby_tULongPointer_eInitialize_initializeBridge

/* CB ������ޥ��� #_CIM_# */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* nMruby_tULongPointer_TECSGENH */