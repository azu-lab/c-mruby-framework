/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef sTerminateRoutineBody_TECSGEN_H
#define sTerminateRoutineBody_TECSGEN_H

/*
 * signature   :  sTerminateRoutineBody
 * global name :  sTerminateRoutineBody
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* �����˥���ǥ�������ץ� #_SD_# */
struct tag_sTerminateRoutineBody_VDES {
    struct tag_sTerminateRoutineBody_VMT *VMT;
};

/* �����˥���ؿ��ơ��֥� #_SFT_# */
struct tag_sTerminateRoutineBody_VMT {
    void           (*main__T)( const struct tag_sTerminateRoutineBody_VDES *edp );
};

/* �����˥���ǥ�������ץ�(ưŪ�����) #_SDES_# */
typedef struct { struct tag_sTerminateRoutineBody_VDES *vdes; } Descriptor( sTerminateRoutineBody );
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_STERMINATEROUTINEBODY_MAIN      (1)

#endif /* sTerminateRoutineBody_TECSGEN_H */