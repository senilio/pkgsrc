# $NetBSD: Makefile,v 1.1 2019/03/21 10:16:01 he Exp $

DISTNAME=	Math-Int128-0.22
PKGNAME=	p5-${DISTNAME}
CATEGORIES=	math perl5
MASTER_SITES=	${MASTER_SITE_PERL_CPAN:=Math/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	https://metacpan.org/release/Math-Int128
COMMENT=	Manipulate 128 bits integers in Perl
LICENSE=	${PERL5_LICENSE}

DEPENDS+=	p5-Math-Int64-[0-9]*:../../math/p5-Math-Int64

PERL5_PACKLIST=	auto/Math/Int128/.packlist

.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"
