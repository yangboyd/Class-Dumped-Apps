//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ASTAssistantSettingsSessionConfigDataSource-Protocol.h"

@class NSMutableArray, NSString;
@protocol ASTAuthProvider;

@interface ASTConsentDataService : NSObject <ASTAssistantSettingsSessionConfigDataSource>
{
    id <ASTAuthProvider> _authProvider;
    NSMutableArray *_requesters;
    NSString *_versionInfo;
}

@property(retain, nonatomic) NSString *versionInfo; // @synthesize versionInfo=_versionInfo;
@property(retain, nonatomic) NSMutableArray *requesters; // @synthesize requesters=_requesters;
@property(readonly, nonatomic) id <ASTAuthProvider> authProvider; // @synthesize authProvider=_authProvider;
- (void).cxx_destruct;
- (id)consentSettingsSelector;
- (void)getAssistantSettingsSessionConfig:(CDUnknownBlockType)arg1;
- (long long)serverEnvironment;
- (void)sendOmniconsentUpdate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithAuthProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

