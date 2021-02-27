/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "VAM-PDU-Descriptions"
 * 	found in "asn1/TS103300-3v211-VAM.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -R`
 */

#ifndef	_VruMotionPredictionContainer_H_
#define	_VruMotionPredictionContainer_H_


#include "asn_application.h"

/* Including external dependencies */
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PathHistory;
struct SequenceOfVruPathPoint;
struct SequenceOfVruSafeDistanceIndication;
struct SequenceOfTrajectoryInterceptionIndication;
struct AccelerationChangeIndication;
struct HeadingChangeIndication;
struct StabilityChangeIndication;

/* VruMotionPredictionContainer */
typedef struct VruMotionPredictionContainer {
	struct PathHistory	*pathHistory;	/* OPTIONAL */
	struct SequenceOfVruPathPoint	*pathPrediction;	/* OPTIONAL */
	struct SequenceOfVruSafeDistanceIndication	*safeDistance;	/* OPTIONAL */
	struct SequenceOfTrajectoryInterceptionIndication	*trajectoryInterceptionIndication;	/* OPTIONAL */
	struct AccelerationChangeIndication	*accelerationChangeIndication;	/* OPTIONAL */
	struct HeadingChangeIndication	*headingChangeIndication;	/* OPTIONAL */
	struct StabilityChangeIndication	*stabilityChangeIndication;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} VruMotionPredictionContainer_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_VruMotionPredictionContainer;
extern asn_SEQUENCE_specifics_t asn_SPC_VruMotionPredictionContainer_specs_1;
extern asn_TYPE_member_t asn_MBR_VruMotionPredictionContainer_1[7];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "PathHistory.h"
#include "SequenceOfVruPathPoint.h"
#include "SequenceOfVruSafeDistanceIndication.h"
#include "SequenceOfTrajectoryInterceptionIndication.h"
#include "AccelerationChangeIndication.h"
#include "HeadingChangeIndication.h"
#include "StabilityChangeIndication.h"

#endif	/* _VruMotionPredictionContainer_H_ */
#include "asn_internal.h"
