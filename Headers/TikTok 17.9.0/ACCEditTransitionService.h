//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ACCEditTransitionServiceProtocol-Protocol.h"

@class AWEBigToSmallModalDelegate, NSHashTable, UIView, UIViewController;
@protocol ACCEditViewContainer, AWEVideoEditorPlayerService;

@interface ACCEditTransitionService : NSObject <ACCEditTransitionServiceProtocol>
{
    AWEBigToSmallModalDelegate *_bigToSmallModalDelagete;
    UIView *_snapshotBeforeTransition;
    UIView *_snapshotAddedForDisappear;
    UIView *_mediaContainerSnap;
    UIViewController *_containerViewController;
    id <AWEVideoEditorPlayerService> _playerService;
    id <ACCEditViewContainer> _viewContainer;
    NSHashTable *_observers;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(nonatomic) __weak id <ACCEditViewContainer> viewContainer; // @synthesize viewContainer=_viewContainer;
@property(nonatomic) __weak id <AWEVideoEditorPlayerService> playerService; // @synthesize playerService=_playerService;
@property(nonatomic) __weak UIViewController *containerViewController; // @synthesize containerViewController=_containerViewController;
@property(retain, nonatomic) UIView *mediaContainerSnap; // @synthesize mediaContainerSnap=_mediaContainerSnap;
@property(retain, nonatomic) UIView *snapshotAddedForDisappear; // @synthesize snapshotAddedForDisappear=_snapshotAddedForDisappear;
@property(retain, nonatomic) UIView *snapshotBeforeTransition; // @synthesize snapshotBeforeTransition=_snapshotBeforeTransition;
@property(retain, nonatomic) AWEBigToSmallModalDelegate *bigToSmallModalDelagete; // @synthesize bigToSmallModalDelagete=_bigToSmallModalDelagete;
- (void)removeTransitionObserver:(id)arg1;
- (void)addTransitionObserver:(id)arg1;
- (void)p_notifyViewControllerDidDismiss:(id)arg1;
- (void)p_notifyViewControllerWillDismiss:(id)arg1;
- (void)p_notifyViewControllerDidPresent:(id)arg1;
- (void)p_notifyViewControllerWillPresent:(id)arg1;
- (void)dismissViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)snapBeforeTransition;
- (void)addSnapshotBeforeDisappear;
- (id)initWithContainerViewController:(id)arg1 playerService:(id)arg2 viewContainer:(id)arg3;

@end

