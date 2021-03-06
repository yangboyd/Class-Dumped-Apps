//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GBTClearcutApplicationService-Protocol.h"

@class CCTClearcutUploader, CCTLegacyClearcutLoggerProxy, NSString;
@protocol SSOService;

@interface GBTClearcutApplicationServiceImpl : NSObject <GBTClearcutApplicationService>
{
    id <SSOService> _SSOService;
    CCTLegacyClearcutLoggerProxy *_legacyClearcutProxy;
    CCTClearcutUploader *_clearcutUploader;
}

- (void).cxx_destruct;
- (void)uploadLogsForApplication:(id)arg1 reason:(id)arg2;
- (void)configure;
- (void)installLegacyClearcutProxy;
- (id)initWithSSOService:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

