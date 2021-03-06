//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DBStormcrowBase : NSObject
{
    struct Handle<std::__1::shared_ptr<StormcrowBase>, std::__1::shared_ptr<StormcrowBase>> _cppRefHandle;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)shutdown;
- (void)initFetcherThread;
- (_Bool)isDebugOverridesEnabled;
- (void)useDebugOverrides:(_Bool)arg1;
- (id)getDebugOverrides;
- (void)unsetDebugOverride:(id)arg1;
- (void)setDebugOverrideWithStrings:(id)arg1 variantName:(id)arg2;
- (void)setDebugOverride:(id)arg1;
- (void)setDebugVariants:(id)arg1;
- (void)unregisterStormcrowLogListener:(id)arg1;
- (void)registerStormcrowLogListener:(id)arg1;
- (void)unregisterStormcrowListener:(id)arg1;
- (void)registerStormcrowListener:(id)arg1;
- (id)getVariantStringUnloggedButYouAlmostCertainlyShouldNotUseThisMethod:(id)arg1;
- (id)getServerVariants;
- (void)setServerVariants:(id)arg1;
- (id)getCurrentVariants;
- (id)getFeatureVariants;
- (id)getFeatureNames;
- (_Bool)hasAuth;
- (_Bool)getStormcrowFromServer;
- (id)initWithCpp:(const shared_ptr_266fc2da *)arg1;

@end

