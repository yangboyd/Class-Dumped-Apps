//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YTGraftingViewController.h"
#import "YTResponder.h"
#import "YTResponderProviderProtocol.h"

@class NSObject;

@protocol YTSwipeLeftPresenter <YTGraftingViewController, YTResponder, YTResponderProviderProtocol>
@property(retain, nonatomic) NSObject *transitionManager;
- (_Bool)coordinatorCanSwipeLeft:(id <YTSwipeLeftCoordinator>)arg1;
@end

