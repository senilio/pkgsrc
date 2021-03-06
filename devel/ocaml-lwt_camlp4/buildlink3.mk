# $NetBSD: buildlink3.mk,v 1.3 2019/03/05 17:41:04 jaapb Exp $

BUILDLINK_TREE+=	ocaml-lwt_camlp4

.if !defined(OCAML_LWT_CAMLP4_BUILDLINK3_MK)
OCAML_LWT_CAMLP4_BUILDLINK3_MK:=

BUILDLINK_API_DEPENDS.ocaml-lwt_camlp4+=	ocaml-lwt_camlp4>=20180325nb4
BUILDLINK_PKGSRCDIR.ocaml-lwt_camlp4?=	../../devel/ocaml-lwt_camlp4

.include "../../devel/ocaml-lwt/buildlink3.mk"
.include "../../lang/camlp4/buildlink3.mk"
.endif	# OCAML_LWT_CAMLP4_BUILDLINK3_MK

BUILDLINK_TREE+=	-ocaml-lwt_camlp4
