//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DYNSDataModelsConvertersGroupConverter, DYNSDataUiGroupConverter;
@protocol ComGoogleAppsXplatObserveSettable, DYNSFlagsSharedConfiguration, DYNSNetworkApiRequestManager, DYNSStorageApiGroupStorageController, DYNSUsersApiUserManager, JavaxInjectProvider;

@interface DYNSActionsUpdateSpaceAction : NSObject
{
    id <DYNSStorageApiGroupStorageController> groupStorageController_;
    DYNSDataModelsConvertersGroupConverter *groupConverter_;
    DYNSDataUiGroupConverter *uiGroupConverter_;
    id <DYNSUsersApiUserManager> userManager_;
    id <DYNSNetworkApiRequestManager> requestManager_;
    id <ComGoogleAppsXplatObserveSettable> spaceUpdatedSettable_;
    id <JavaxInjectProvider> executorProvider_;
    id <DYNSFlagsSharedConfiguration> sharedConfiguration_;
}

+ (void)initialize;
- (void)dealloc;
- (id)executeWithDYNSCommonSpaceId:(id)arg1 withJavaUtilOptional:(id)arg2 withJavaUtilOptional:(id)arg3 withJavaUtilOptional:(id)arg4;

@end

