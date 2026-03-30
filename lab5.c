#include <stdio.h>
#include <unistd.h>

main ( )
{
    // execlp تبحث عن البرنامج في مسارات النظام (PATH) تلقائياً[span_5](start_span)[span_5](end_span)
    execlp ("ls",	/* اسم البرنامج المراد تشغيله[span_6](start_span)[span_6](end_span) */
    "ls",	        /* اسم البرنامج الذي يرسل للذاكرة[span_7](start_span)[span_7](end_span) */
    "-l",	        /* معامل عرض التفاصيل[span_8](start_span)[span_8](end_span) */
    "-a",	        /* معامل عرض الملفات المخفية[span_9](start_span)[span_9](end_span) */
    NULL);	        /* علامة نهاية المعاملات[span_10](start_span)[span_10](end_span) */

    // السطر التالي لن يطبع إلا في حال فشل الاستدعاء[span_11](start_span)[span_11](end_span)
    printf ("EXEC Failed\n") ;
}
