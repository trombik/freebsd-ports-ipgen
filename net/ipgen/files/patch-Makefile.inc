--- Makefile.inc.orig	2024-05-15 07:49:03 UTC
+++ Makefile.inc
@@ -1,3 +1,14 @@ MANDIR?=	${PREFIX}/share/man
 PREFIX?=	/usr/local
 LOCALBASE?=	${PREFIX}
 MANDIR?=	${PREFIX}/share/man
+
+INSTALL?= install
+STRIP?=
+BINMODE?=   555
+SHAREMODE?=	444
+MANMODE?=	444
+
+INSTALL_PROGRAM?=	${INSTALL} ${STRIP} -m ${BINMODE}
+INSTALL_MAN?=   ${INSTALL} -m ${MANMODE}
+INSTALL_DATA?=	${INSTALL} -m ${SHAREMODE}
+INSTALL_SCRIPT?=    ${INSTALL} -m ${BINMODE}
