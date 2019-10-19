//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTAudioPlayerMediaClockService-Protocol.h"

@class NSMapTable, NSString, SPTAllocationContext;
@protocol CosmosFeature, SPTContainerService, SPTPlayerFeature, SPTResolver;

@interface SPTAudioPlayerMediaClockServiceImplementation : NSObject <SPTAudioPlayerMediaClockService>
{
    id <SPTContainerService> _containerService;
    id <SPTPlayerFeature> _playerFeature;
    id <CosmosFeature> _cosmosService;
    id <SPTResolver> _resolver;
    NSMapTable *_audioMediaClocks;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) NSMapTable *audioMediaClocks; // @synthesize audioMediaClocks=_audioMediaClocks;
@property(retain, nonatomic) id <SPTResolver> resolver; // @synthesize resolver=_resolver;
@property(nonatomic) __weak id <CosmosFeature> cosmosService; // @synthesize cosmosService=_cosmosService;
@property(nonatomic) __weak id <SPTPlayerFeature> playerFeature; // @synthesize playerFeature=_playerFeature;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
- (void).cxx_destruct;
- (id)audioPlayerMediaClockForPlaybackIdentity:(id)arg1;
- (void)unload;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

