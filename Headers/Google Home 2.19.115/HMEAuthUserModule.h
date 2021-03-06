//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SSOIdentity;
@protocol SSOAuthorization;

@interface HMEAuthUserModule : NSObject
{
    SSOIdentity *_identity;
    id <SSOAuthorization> _authorization;
    CDUnknownBlockType _applicationLinkingCoordinatorFactory;
}

+ (id)SSOScopesWithExperimentFlags:(id)arg1;
@property(readonly, nonatomic) CDUnknownBlockType applicationLinkingCoordinatorFactory; // @synthesize applicationLinkingCoordinatorFactory=_applicationLinkingCoordinatorFactory;
@property(readonly, nonatomic) id <SSOAuthorization> authorization; // @synthesize authorization=_authorization;
@property(readonly, nonatomic) SSOIdentity *identity; // @synthesize identity=_identity;
- (void).cxx_destruct;
- (id)initWithIdentity:(id)arg1 SSOService:(id)arg2 auditRecorder:(id)arg3 experimentFlags:(id)arg4 linkOpener:(id)arg5;

@end

