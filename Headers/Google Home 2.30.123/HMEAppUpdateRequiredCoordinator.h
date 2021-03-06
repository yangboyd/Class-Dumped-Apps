//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HMEAppUpdateRequiredCoordinator-Protocol.h"
#import "HMEAppUpdateRequiredViewControllerDelegate-Protocol.h"

@class NSString;
@protocol GCAConfigurationFlags, HMEHelpCoordinator, HMELinkOpener;

@interface HMEAppUpdateRequiredCoordinator : NSObject <HMEAppUpdateRequiredViewControllerDelegate, HMEAppUpdateRequiredCoordinator>
{
    id <GCAConfigurationFlags> _experimentFlags;
    id <HMEHelpCoordinator> _helpCoordinator;
    id <HMELinkOpener> _linkOpener;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <HMELinkOpener> linkOpener; // @synthesize linkOpener=_linkOpener;
@property(readonly, nonatomic) id <HMEHelpCoordinator> helpCoordinator; // @synthesize helpCoordinator=_helpCoordinator;
@property(retain, nonatomic) id <GCAConfigurationFlags> experimentFlags; // @synthesize experimentFlags=_experimentFlags;
- (void)appUpdateRequiredViewControllerWillDisplayOverflowMenu:(id)arg1;
- (void)appUpdateRequiredViewControllerWillNavigateToAppUpdatePage:(id)arg1;
- (void)startInWindow:(id)arg1;
- (void)startInNavigationController:(id)arg1;
- (id)initWithExperimentFlags:(id)arg1 linkOpener:(id)arg2 helpCoordinatorFactory:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

