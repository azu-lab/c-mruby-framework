/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef siSemaphore_TECSGEN_H
#define siSemaphore_TECSGEN_H

/*
 * signature   :  siSemaphore
 * global name :  siSemaphore
 * context     :  non-task
 */

#ifndef TOPPERS_MACRO_ONLY

/* �����˥���ǥ�������ץ� #_SD_# */
struct tag_siSemaphore_VDES {
    struct tag_siSemaphore_VMT *VMT;
};

/* �����˥���ؿ��ơ��֥� #_SFT_# */
struct tag_siSemaphore_VMT {
    ER             (*signal__T)( const struct tag_siSemaphore_VDES *edp );
};

/* �����˥���ǥ�������ץ�(ưŪ�����) #_SDES_# */
typedef struct { struct tag_siSemaphore_VDES *vdes; } Descriptor( siSemaphore );
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SISEMAPHORE_SIGNAL              (1)

#endif /* siSemaphore_TECSGEN_H */