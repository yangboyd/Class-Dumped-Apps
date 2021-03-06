//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SLKDeprecatedBotsDataProviderInterface-Protocol.h"

@class NSMutableDictionary, NSMutableSet, SLKDependencies;
@protocol OS_dispatch_queue;

@interface SLKDeprecatedBotsDataProvider : NSObject <SLKDeprecatedBotsDataProviderInterface>
{
    SLKDependencies *_dependencies;
    NSMutableSet *_botsBeingFetched;
    NSMutableDictionary *_completionBlocks;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (_Bool)isSlackBotId:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSMutableDictionary *completionBlocks; // @synthesize completionBlocks=_completionBlocks;
@property(retain, nonatomic) NSMutableSet *botsBeingFetched; // @synthesize botsBeingFetched=_botsBeingFetched;
@property(nonatomic) __weak SLKDependencies *dependencies; // @synthesize dependencies=_dependencies;
- (void)queue_addCompletion:(CDUnknownBlockType)arg1 forBotId:(id)arg2;
- (void)loadBotFromApi:(id)arg1;
- (void)performFetchForBotWithId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchBotForId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)cachedBotForId:(id)arg1 contextType:(unsigned long long)arg2 fetchIfNotAvailable:(_Bool)arg3;
- (id)initWithDependencies:(id)arg1;

@end

