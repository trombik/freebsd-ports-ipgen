PORTNAME=	ipgen
DISTVERSION=	1.30
DISTVERSIONPREFIX=	v
CATEGORIES=	net
MASTER_SITES=

MAINTAINER=	y@trombik.org
COMMENT=	Iinteractive packet generator

LIB_DEPENDS=	libevent.so:devel/libevent

USE_GITHUB=	yes
GH_TUPLE=	iij:${PORTNAME}:${DISTVERSIONPREFIX}${DISTVERSION}
WWW=	https://github.com/iij/ipgen

USES=	gmake perl5 ssl:build ncurses shebangfix

MAKEFILE=	GNUmakefile
MAKE_ENV=	\
	STRIP=${STRIP} \
	BINMODE=${BINMODE} \
	SHAREMODE=${SHAREMODE} \
	MANMODE=${MANMODE} \
	INSTALL=${INSTALL}

SHEBANG_FILES= ${WRKSRC}/script/log2graph

pre-build:
	@${ECHO_MSG} "===>  Building depend for ${PKGNAME}"
	(cd ${WRKSRC} && ${DO_MAKE_BUILD} depend)

.include <bsd.port.mk>
