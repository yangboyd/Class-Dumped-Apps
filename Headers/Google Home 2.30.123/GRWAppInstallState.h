//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSSet;
@protocol GRWCanOpenURLProtocol, OS_dispatch_queue;

@interface GRWAppInstallState : NSObject
{
    NSMutableSet *_appsToAlwaysEvaluate;
    NSMutableDictionary *_bundleIDInstallStateCache;
    NSMutableDictionary *_schemeOpenabilityCache;
    NSSet *_canQuerySchemes;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<GRWCanOpenURLProtocol> *_canOpenURLEvaluator;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<GRWCanOpenURLProtocol> *canOpenURLEvaluator; // @synthesize canOpenURLEvaluator=_canOpenURLEvaluator;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(retain, nonatomic) NSSet *canQuerySchemes; // @synthesize canQuerySchemes=_canQuerySchemes;
@property(retain, nonatomic) NSMutableDictionary *schemeOpenabilityCache; // @synthesize schemeOpenabilityCache=_schemeOpenabilityCache;
@property(retain, nonatomic) NSMutableDictionary *bundleIDInstallStateCache; // @synthesize bundleIDInstallStateCache=_bundleIDInstallStateCache;
@property(retain, nonatomic) NSMutableSet *appsToAlwaysEvaluate; // @synthesize appsToAlwaysEvaluate=_appsToAlwaysEvaluate;
- (void)setShouldAlwaysEvaluate:(_Bool)arg1 forApp:(id)arg2;
- (_Bool)canOpenScheme:(id)arg1;
- (_Bool)isAppInstalled:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (id)init;

@end

