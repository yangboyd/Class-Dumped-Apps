//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCBloopsAPI-Protocol.h"

@class NSString, SCBloopsPersonsSource;

@interface SCBloopsAPIDummyImpl : NSObject <SCBloopsAPI>
{
    SCBloopsPersonsSource *_personsSource;
}

@property(retain, nonatomic) SCBloopsPersonsSource *personsSource; // @synthesize personsSource=_personsSource;
- (void).cxx_destruct;
- (void)clearUserCachesWithCompletion:(CDUnknownBlockType)arg1;
- (id)previewsResourcesService;
- (void)updateBloopsConfig;
- (void)updateSettingsConfig:(id)arg1;
- (id)targetsConverter;
- (id)targetFormatVersion;
- (id)apiVersion;
- (void)downloadAIResourcesIfNeeded;
- (void)resetPersonsSource;
- (_Bool)sdkInitCompleted;
- (_Bool)searchBloopsForQuery:(id)arg1;
- (void)isSettingsUpdateRequired:(CDUnknownBlockType)arg1;
- (_Bool)targetsInitialized;
- (void)saveMainTarget;
- (void)warmUp;
- (void)tryToPreparePreviewsResources;
- (_Bool)isBloopsEnabledAndPreviewsResourcesReady;
- (_Bool)isBloopsFeatureEnabled;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)updateBloopsConfigWithCompletion:(CDUnknownBlockType)arg1;
- (void)checkIsBloopsConfigOnDiskWithCompletion:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

