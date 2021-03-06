//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ComGoogleAppsTasksSharedAccountImplCachedStorage, ComGoogleAppsTasksSharedAccountImplResourceExecutor, ComGoogleAppsTasksSharedUtilsNullableReference, TDLPlatformProtoLogger;
@protocol ComGoogleAppsTasksSharedAccountImplDataModelCreator, JavaUtilConcurrentExecutor, JavaUtilMap, TDLPlatformCacheStateListener;

@interface ComGoogleAppsTasksSharedAccountImplDataModelsHandler : NSObject
{
    id <ComGoogleAppsTasksSharedAccountImplDataModelCreator> dataModelCreator_;
    id <JavaUtilConcurrentExecutor> tasksSequentialExecutor_;
    ComGoogleAppsTasksSharedAccountImplResourceExecutor *resourceExecutor_;
    id <TDLPlatformCacheStateListener> accountCacheStateListener_;
    ComGoogleAppsTasksSharedAccountImplCachedStorage *cachedStorage_;
    TDLPlatformProtoLogger *protoLogger_;
    id <JavaUtilMap> activeDataModels_;
    ComGoogleAppsTasksSharedUtilsNullableReference *currentCacheState_;
}

+ (void)initialize;
- (void)dealloc;
- (_Bool)isActiveShardWithTDLDataModelShard:(id)arg1;
- (id)getActiveDataModels;
- (_Bool)hasActiveDataModels;
- (id)cacheState;
- (id)acquireDataModelWithTDLDataModelShard:(id)arg1 withNSString:(id)arg2;

@end

