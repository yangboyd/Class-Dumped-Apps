//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleAppsBigtopSyncClientImplSecurityApiBimiAvatarFactory-Protocol.h"

@class ComGoogleAppsBigtopSyncClientImplCommonCollectLruCache, ComGoogleAppsBigtopSyncClientImplCommonSapiMainExecutor, ComGoogleAppsBigtopSyncClientImplSecurityBimiUriProvider, NSString;
@protocol ComGoogleAppsXplatDaggerAsyncProvider;

@interface ComGoogleAppsBigtopSyncClientImplSecurityBimiAvatarFactoryImpl : NSObject <ComGoogleAppsBigtopSyncClientImplSecurityApiBimiAvatarFactory>
{
    ComGoogleAppsBigtopSyncClientImplCommonSapiMainExecutor *sapiMainExecutor_;
    id <ComGoogleAppsXplatDaggerAsyncProvider> gmailApiServerApiaryClient_;
    ComGoogleAppsBigtopSyncClientImplSecurityBimiUriProvider *bimiUriProvider_;
    ComGoogleAppsBigtopSyncClientImplCommonCollectLruCache *bimiResponseCache_;
}

+ (void)initialize;
- (void)dealloc;
- (id)fetchAndCreateWithComGoogleCaribouSecurityBimiBimiMessageInfoProto_BimiId:(id)arg1;
- (id)createBuilder;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

