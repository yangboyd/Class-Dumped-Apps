//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PayPalOneTouch/PPOTRequest.h>

@class NSSet, NSURL;

@interface PPOTAuthorizationRequest : PPOTRequest
{
    NSSet *_scopeValues;
    NSURL *_privacyURL;
    NSURL *_agreementURL;
}

+ (id)requestWithScopeValues:(id)arg1 privacyURL:(id)arg2 agreementURL:(id)arg3 clientID:(id)arg4 environment:(id)arg5 callbackURLScheme:(id)arg6;
@property(retain, nonatomic) NSURL *agreementURL; // @synthesize agreementURL=_agreementURL;
@property(retain, nonatomic) NSURL *privacyURL; // @synthesize privacyURL=_privacyURL;
@property(retain, nonatomic) NSSet *scopeValues; // @synthesize scopeValues=_scopeValues;
- (void).cxx_destruct;
- (void)getAppropriateConfigurationRecipe:(CDUnknownBlockType)arg1;
- (_Bool)scopeIsSupportedByConfigurationRecipe:(id)arg1;
- (id)getAppSwitchRequestForConfigurationRecipe:(id)arg1;
- (id)initWithScopeValues:(id)arg1 privacyURL:(id)arg2 agreementURL:(id)arg3 clientID:(id)arg4 environment:(id)arg5 callbackURLScheme:(id)arg6;

@end

