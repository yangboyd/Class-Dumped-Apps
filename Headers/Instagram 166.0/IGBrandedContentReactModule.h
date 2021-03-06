//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/RCTIGUserSessionModule-Protocol.h>

@class IGUserSession, NSString, RCTBridge;
@protocol OS_dispatch_queue;

@interface IGBrandedContentReactModule : NSObject <RCTIGUserSessionModule>
{
    IGUserSession *_userSession;
    RCTBridge *_bridge;
}

+ (const struct RCTMethodInfo *)__rct_export__331;
+ (const struct RCTMethodInfo *)__rct_export__280;
+ (void)load;
+ (id)moduleName;
- (void).cxx_destruct;
@property(readonly, nonatomic) __weak RCTBridge *bridge; // @synthesize bridge=_bridge;
@property(nonatomic) __weak IGUserSession *userSession; // @synthesize userSession=_userSession;
- (void)openAdCreationPartners:(double)arg1;
- (void)openRequestAdCreationAccess:(double)arg1;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

