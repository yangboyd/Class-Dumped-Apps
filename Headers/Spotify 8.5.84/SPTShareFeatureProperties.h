//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTRemoteConfigurationProperties-Protocol.h"

@class NSString;

@interface SPTShareFeatureProperties : NSObject <SPTRemoteConfigurationProperties>
{
    _Bool _backendGeneratedShareableUrlEnabled;
    _Bool _shareDeepLinkLoggingEnabled;
    _Bool _shareDeepLinkLoggingAllowAllUris;
    _Bool _isCanvasSharingEnabled;
    _Bool _sharingsdkEnabled;
    long long _shareDestinationsVersion;
}

@property(readonly, nonatomic) long long shareDestinationsVersion; // @synthesize shareDestinationsVersion=_shareDestinationsVersion;
@property(readonly, nonatomic) _Bool sharingsdkEnabled; // @synthesize sharingsdkEnabled=_sharingsdkEnabled;
@property(readonly, nonatomic) _Bool isCanvasSharingEnabled; // @synthesize isCanvasSharingEnabled=_isCanvasSharingEnabled;
@property(readonly, nonatomic) _Bool shareDeepLinkLoggingAllowAllUris; // @synthesize shareDeepLinkLoggingAllowAllUris=_shareDeepLinkLoggingAllowAllUris;
@property(readonly, nonatomic) _Bool shareDeepLinkLoggingEnabled; // @synthesize shareDeepLinkLoggingEnabled=_shareDeepLinkLoggingEnabled;
@property(readonly, nonatomic) _Bool backendGeneratedShareableUrlEnabled; // @synthesize backendGeneratedShareableUrlEnabled=_backendGeneratedShareableUrlEnabled;
- (id)propertyModels;
- (id)initWithPropertyValuesDictionary:(id)arg1;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

