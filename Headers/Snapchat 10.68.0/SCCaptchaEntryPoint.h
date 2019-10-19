//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCBusinessLogicHarness, SCCaptchaScope, SCIdentityLoggerServices, SCSystemNetworkServices, SCUserNetworkServices;

@interface SCCaptchaEntryPoint : SCEntryPoint
{
    SCBusinessLogicHarness *_harness;
    SCCaptchaScope *_captchaScope;
    SCSystemNetworkServices *_systemNetworkServices;
    SCUserNetworkServices *_userNetworkServices;
    SCIdentityLoggerServices *_loggerServices;
}

@property(nonatomic) __weak SCIdentityLoggerServices *loggerServices; // @synthesize loggerServices=_loggerServices;
@property(nonatomic) __weak SCUserNetworkServices *userNetworkServices; // @synthesize userNetworkServices=_userNetworkServices;
@property(nonatomic) __weak SCSystemNetworkServices *systemNetworkServices; // @synthesize systemNetworkServices=_systemNetworkServices;
@property(nonatomic) __weak SCCaptchaScope *captchaScope; // @synthesize captchaScope=_captchaScope;
- (void).cxx_destruct;
- (void)begin;

@end

