# $NetBSD: Makefile,v 1.15 2018/07/03 05:03:12 adam Exp $

DISTNAME=	jersey-0.1.5
PKGNAME=	${PYPKGPREFIX}-${DISTNAME}
PKGREVISION=	1
CATEGORIES=	devel python
MASTER_SITES=	${MASTER_SITE_PYPI:=j/jersey/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	https://pypi.python.org/pypi/jersey
COMMENT=	Framework for building Twisted Python command-line interfaces
LICENSE=	modified-bsd

#BUILD_DEPENDS+=	${PYPKGPREFIX}-twisted>=10.0.0:../../net/py-twisted
DEPENDS+=	${PYPKGPREFIX}-twisted>=10.0.0:../../net/py-twisted
DEPENDS+=	${PYPKGPREFIX}-automat-[0-9]*:../../devel/py-automat

PYTHON_VERSIONS_INCOMPATIBLE=	34 35 36 37 # as of 0.1.5

.include "../../lang/python/egg.mk"
.include "../../mk/bsd.pkg.mk"
