# $NetBSD: Makefile,v 1.47 2019/01/02 15:35:12 tnn Exp $

DISTNAME=		tint2-v16.6.1
PKGNAME=		${DISTNAME:S/-v/-/}
CATEGORIES=		x11
MASTER_SITES=		https://gitlab.com/o9000/tint2/-/archive/v16.6.1/
EXTRACT_SUFX=		.tar.bz2

MAINTAINER=		fernandotcl@gmail.com
HOMEPAGE=		https://gitlab.com/o9000/tint2
COMMENT=		Lightweight panel/taskbar for Linux and BSD
LICENSE=		gnu-gpl-v2

USE_LANGUAGES=		c c++ # XXX CMake. pkg does not really need c++
USE_CMAKE=		yes
USE_LIBTOOL=		yes
USE_TOOLS+=		pkg-config

INSTALLATION_DIRS=	share/examples/tint2
OWN_DIRS=		${PKG_SYSCONFDIR}/xdg/tint2
CONF_FILES=		${PREFIX}/share/examples/tint2/tint2rc \
			${PKG_SYSCONFDIR}/xdg/tint2/tint2rc

CMAKE_ARGS.Linux=	-DENABLE_BATTERY=ON
CMAKE_ARGS.*=		-DENABLE_BATTERY=OFF

post-install:
	${INSTALL_DATA} ${WRKSRC}/themes/tint2rc \
		${DESTDIR}${PREFIX}/share/examples/tint2

.include "../../devel/cmake/buildlink3.mk"
.include "../../graphics/hicolor-icon-theme/buildlink3.mk"
.include "../../graphics/imlib2/buildlink3.mk"
.include "../../graphics/librsvg/buildlink3.mk"
.include "../../sysutils/desktop-file-utils/desktopdb.mk"
.include "../../x11/gtk2/buildlink3.mk"
.include "../../x11/libXcomposite/buildlink3.mk"
.include "../../x11/libXdamage/buildlink3.mk"
.include "../../x11/libXinerama/buildlink3.mk"
.include "../../x11/libXrandr/buildlink3.mk"
.include "../../x11/startup-notification/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
