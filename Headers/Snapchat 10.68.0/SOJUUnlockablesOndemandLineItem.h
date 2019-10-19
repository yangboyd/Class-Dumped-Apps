//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUUnlockablesOndemandLineItem-Protocol.h"

@class NSArray, NSNumber, NSString, SOJUUnlockablesOndemandApprovalStatus, SOJUUnlockablesOndemandAsset, SOJUUnlockablesOndemandAutoApprovalResult, SOJUUnlockablesOndemandCancellation, SOJUUnlockablesOndemandCountry, SOJUUnlockablesOndemandLease, SOJUUnlockablesOndemandLineItemProperties, SOJUUnlockablesOndemandMobilePayment, SOJUUnlockablesOndemandOwner, SOJUUnlockablesOndemandPayment, SOJUUnlockablesOndemandPriceCalculation, SOJUUnlockablesOndemandSchedule, SOJUUnlockablesOndemandServing, SOJUUnlockablesOndemandSubmission, SOJUUnlockablesOndemandTargeting;

@interface SOJUUnlockablesOndemandLineItem : NSObject <SOJUUnlockablesOndemandLineItem>
{
    NSString *_idValue;
    SOJUUnlockablesOndemandSubmission *_submission;
    SOJUUnlockablesOndemandOwner *_owner;
    SOJUUnlockablesOndemandAsset *_asset;
    NSArray *_assets;
    SOJUUnlockablesOndemandTargeting *_targeting;
    SOJUUnlockablesOndemandSchedule *_schedule;
    SOJUUnlockablesOndemandLineItemProperties *_properties;
    SOJUUnlockablesOndemandPriceCalculation *_offer;
    SOJUUnlockablesOndemandPayment *_payment;
    SOJUUnlockablesOndemandApprovalStatus *_approval;
    SOJUUnlockablesOndemandServing *_serving;
    SOJUUnlockablesOndemandCancellation *_cancellation;
    NSString *_locale;
    NSString *_tosVersion;
    SOJUUnlockablesOndemandCountry *_country;
    NSString *_orgCountry;
    SOJUUnlockablesOndemandLease *_lease;
    NSString *_userAgent;
    SOJUUnlockablesOndemandMobilePayment *_mobilePayment;
    NSString *_preRenderingAssetsStructuredId;
    NSString *_templateId;
    NSString *_discountCode;
    NSString *_templateInstanceId;
    SOJUUnlockablesOndemandAutoApprovalResult *_autoApprovalResult;
    NSString *_productType;
    NSString *_previewRequestId;
    NSNumber *_paymentCollectedBeforeSubmission;
    NSString *_bundleLineitemId;
    NSNumber *_canSubmitRedesignForAccepted;
    NSNumber *_canResubmitRejectedFilter;
    NSNumber *_paymentOnSubmission;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSNumber *paymentOnSubmission; // @synthesize paymentOnSubmission=_paymentOnSubmission;
@property(readonly, copy, nonatomic) NSNumber *canResubmitRejectedFilter; // @synthesize canResubmitRejectedFilter=_canResubmitRejectedFilter;
@property(readonly, copy, nonatomic) NSNumber *canSubmitRedesignForAccepted; // @synthesize canSubmitRedesignForAccepted=_canSubmitRedesignForAccepted;
@property(readonly, copy, nonatomic) NSString *bundleLineitemId; // @synthesize bundleLineitemId=_bundleLineitemId;
@property(readonly, copy, nonatomic) NSNumber *paymentCollectedBeforeSubmission; // @synthesize paymentCollectedBeforeSubmission=_paymentCollectedBeforeSubmission;
@property(readonly, copy, nonatomic) NSString *previewRequestId; // @synthesize previewRequestId=_previewRequestId;
@property(readonly, copy, nonatomic) NSString *productType; // @synthesize productType=_productType;
@property(readonly, copy, nonatomic) SOJUUnlockablesOndemandAutoApprovalResult *autoApprovalResult; // @synthesize autoApprovalResult=_autoApprovalResult;
@property(readonly, copy, nonatomic) NSString *templateInstanceId; // @synthesize templateInstanceId=_templateInstanceId;
@property(readonly, copy, nonatomic) NSString *discountCode; // @synthesize discountCode=_discountCode;
@property(readonly, copy, nonatomic) NSString *templateId; // @synthesize templateId=_templateId;
@property(readonly, copy, nonatomic) NSString *preRenderingAssetsStructuredId; // @synthesize preRenderingAssetsStructuredId=_preRenderingAssetsStructuredId;
@property(readonly, copy, nonatomic) SOJUUnlockablesOndemandMobilePayment *mobilePayment; // @synthesize mobilePayment=_mobilePayment;
@property(readonly, copy, nonatomic) NSString *userAgent; // @synthesize userAgent=_userAgent;
@property(readonly, copy, nonatomic) SOJUUnlockablesOndemandLease *lease; // @synthesize lease=_lease;
@property(readonly, copy, nonatomic) NSString *orgCountry; // @synthesize orgCountry=_orgCountry;
@property(readonly, copy, nonatomic) SOJUUnlockablesOndemandCountry *country; // @synthesize country=_country;
@property(readonly, copy, nonatomic) NSString *tosVersion; // @synthesize tosVersion=_tosVersion;
@property(readonly, copy, nonatomic) NSString *locale; // @synthesize locale=_locale;
@property(readonly, copy, nonatomic) SOJUUnlockablesOndemandCancellation *cancellation; // @synthesize cancellation=_cancellation;
@property(readonly, copy, nonatomic) SOJUUnlockablesOndemandServing *serving; // @synthesize serving=_serving;
@property(readonly, copy, nonatomic) SOJUUnlockablesOndemandApprovalStatus *approval; // @synthesize approval=_approval;
@property(readonly, copy, nonatomic) SOJUUnlockablesOndemandPayment *payment; // @synthesize payment=_payment;
@property(readonly, copy, nonatomic) SOJUUnlockablesOndemandPriceCalculation *offer; // @synthesize offer=_offer;
@property(readonly, copy, nonatomic) SOJUUnlockablesOndemandLineItemProperties *properties; // @synthesize properties=_properties;
@property(readonly, copy, nonatomic) SOJUUnlockablesOndemandSchedule *schedule; // @synthesize schedule=_schedule;
@property(readonly, copy, nonatomic) SOJUUnlockablesOndemandTargeting *targeting; // @synthesize targeting=_targeting;
@property(readonly, copy, nonatomic) NSArray *assets; // @synthesize assets=_assets;
@property(readonly, copy, nonatomic) SOJUUnlockablesOndemandAsset *asset; // @synthesize asset=_asset;
@property(readonly, copy, nonatomic) SOJUUnlockablesOndemandOwner *owner; // @synthesize owner=_owner;
@property(readonly, copy, nonatomic) SOJUUnlockablesOndemandSubmission *submission; // @synthesize submission=_submission;
@property(readonly, copy, nonatomic) NSString *idValue; // @synthesize idValue=_idValue;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)decodeWithFasterDecoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdValue:(id)arg1 submission:(id)arg2 owner:(id)arg3 asset:(id)arg4 assets:(id)arg5 targeting:(id)arg6 schedule:(id)arg7 properties:(id)arg8 offer:(id)arg9 payment:(id)arg10 approval:(id)arg11 serving:(id)arg12 cancellation:(id)arg13 locale:(id)arg14 tosVersion:(id)arg15 country:(id)arg16 orgCountry:(id)arg17 lease:(id)arg18 userAgent:(id)arg19 mobilePayment:(id)arg20 preRenderingAssetsStructuredId:(id)arg21 templateId:(id)arg22 discountCode:(id)arg23 templateInstanceId:(id)arg24 autoApprovalResult:(id)arg25 productType:(id)arg26 previewRequestId:(id)arg27 paymentCollectedBeforeSubmission:(id)arg28 bundleLineitemId:(id)arg29 canSubmitRedesignForAccepted:(id)arg30 canResubmitRejectedFilter:(id)arg31 paymentOnSubmission:(id)arg32;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (_Bool)paymentOnSubmissionValue;
- (_Bool)canResubmitRejectedFilterValue;
- (_Bool)canSubmitRedesignForAcceptedValue;
- (_Bool)paymentCollectedBeforeSubmissionValue;
- (long long)productTypeEnum;
- (long long)orgCountryEnum;
- (id)setPendingLineItemStatus:(id)arg1 itemId:(id)arg2;
- (id)setPendingLineItemStatus:(id)arg1;
- (_Bool)canResubmitForApproved;
- (_Bool)canResubmitForRejected;
- (_Bool)canCreateDraft;
- (id)stringForRejectionCode;
- (_Bool)flightTimeLessThan24Hours;
- (_Bool)shouldPayOnSubmission:(id)arg1;
- (_Bool)canCollectPaymentFirst;
- (_Bool)autoRejected;
- (_Bool)autoApproved;
- (_Bool)shouldEnableCancellation;
- (_Bool)shouldShowManageSection;
- (_Bool)shouldShowMetrics;
- (_Bool)shouldShowRejectionReason;
- (id)statusMessage;
- (_Bool)isUnsubmitted;
- (id)localizedPrice;
- (_Bool)isFreeGeoFilter;
- (_Bool)notificationHasShown;
- (void)setPaymentSource:(id)arg1;
- (id)paymentSource;
- (void)setNotificationHasShown:(_Bool)arg1;
- (id)validationErrorWithCode:(unsigned long long)arg1;
- (id)validationAndFixWithGeofilterSession:(id)arg1;
- (id)submissionInvalidInfo;
- (void)setSubmissionInvalidInfo:(id)arg1;
- (id)lineItemStatusColor;
- (id)lineItemStatusBackgroundColor;
- (id)lineItemApprovalStatusMessage;
- (unsigned long long)lineItemApprovalStatus;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

