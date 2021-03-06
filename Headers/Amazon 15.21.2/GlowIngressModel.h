//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class CustomerIntentModel, NSNumber, NSString;
@protocol Optional;

@interface GlowIngressModel : JSONModel
{
    _Bool _launchAutoGPSFlow;
    _Bool _blacklistedPage;
    _Bool _isToasterEligible;
    _Bool _glowShouldBeVisible;
    NSString<Optional> *_deliveryLine1;
    NSString<Optional> *_deliveryLine2;
    NSString<Optional> *_deliveryShortLine;
    CustomerIntentModel<Optional> *_customerIntent;
    NSString<Optional> *_storeContext;
    NSNumber<Optional> *_launchAutoGPSFlowTimeExpirationByHour;
}

+ (_Bool)propertyIsOptional:(id)arg1;
@property(retain, nonatomic) NSNumber<Optional> *launchAutoGPSFlowTimeExpirationByHour; // @synthesize launchAutoGPSFlowTimeExpirationByHour=_launchAutoGPSFlowTimeExpirationByHour;
@property(nonatomic) _Bool glowShouldBeVisible; // @synthesize glowShouldBeVisible=_glowShouldBeVisible;
@property(nonatomic) _Bool isToasterEligible; // @synthesize isToasterEligible=_isToasterEligible;
@property(nonatomic) _Bool blacklistedPage; // @synthesize blacklistedPage=_blacklistedPage;
@property(copy, nonatomic) NSString<Optional> *storeContext; // @synthesize storeContext=_storeContext;
@property(nonatomic) _Bool launchAutoGPSFlow; // @synthesize launchAutoGPSFlow=_launchAutoGPSFlow;
@property(retain, nonatomic) CustomerIntentModel<Optional> *customerIntent; // @synthesize customerIntent=_customerIntent;
@property(copy, nonatomic) NSString<Optional> *deliveryShortLine; // @synthesize deliveryShortLine=_deliveryShortLine;
@property(copy, nonatomic) NSString<Optional> *deliveryLine2; // @synthesize deliveryLine2=_deliveryLine2;
@property(copy, nonatomic) NSString<Optional> *deliveryLine1; // @synthesize deliveryLine1=_deliveryLine1;
- (void).cxx_destruct;

@end

