//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DYNSDataUiGroupSummariesConverter;
@protocol DYNSMixinsFilter, DYNSStorageApiWorldStorageCoordinator, JavaxInjectProvider;

@interface DYNSActionsFilterWorldAction : NSObject
{
    id <JavaxInjectProvider> executorProvider_;
    id <DYNSMixinsFilter> filter_;
    DYNSDataUiGroupSummariesConverter *uiGroupSummariesConverter_;
    id <DYNSStorageApiWorldStorageCoordinator> worldStorageCoordinator_;
}

- (void)dealloc;
- (id)executeWithNSString:(id)arg1;

@end

