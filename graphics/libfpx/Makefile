# $NetBSD: Makefile,v 1.4 2017/12/03 11:09:46 wiz Exp $

libfpx_ver=	1.3.1
DISTNAME=	libfpx-${libfpx_ver}-9
PKGNAME=	libfpx-${libfpx_ver}
PKGREVISION=	1
CATEGORIES=	graphics
MASTER_SITES=	ftp://ftp.imagemagick.org/pub/ImageMagick/delegates/
MASTER_SITES+=	http://www.imagemagick.org/download/delegates/
EXTRACT_SUFX=	.tar.xz

MAINTAINER=	nros@NetBSD.org
HOMEPAGE=	http://www.imagemagick.org/
COMMENT=	Library for reading and writing FlashPix images
LICENSE=	flashpix-license

GNU_CONFIGURE=	yes
USE_LANGUAGES=	c c++
USE_LIBTOOL=	yes

docdir=		 share/doc/${PKGBASE}
INSTALLATION_DIRS+=${docdir}
post-install:
	${INSTALL_DATA} ${WRKSRC}/flashpix.h \
		${DESTDIR}${PREFIX}/${docdir}/copyright-notice
	${INSTALL_DATA} ${WRKSRC}/README \
		${DESTDIR}${PREFIX}/${docdir}
	${INSTALL_DATA} ${WRKSRC}/AUTHORS \
		${DESTDIR}${PREFIX}/${docdir}
	${INSTALL_DATA} ${WRKSRC}/ChangeLog \
		${DESTDIR}${PREFIX}/${docdir}
	${INSTALL_DATA} ${WRKSRC}/doc/readme.txt \
		${DESTDIR}${PREFIX}/${docdir}

.include "../../mk/bsd.pkg.mk"
