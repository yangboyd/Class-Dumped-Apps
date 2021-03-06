//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ACCPinStickerPlayerViewComponentProtocol-Protocol.h"

@class AWEEditorStickerGestureViewController, AWESimplifiedStickerContainerView, AWEStickerEditBaseView, NSDictionary, NSNumber, NSString, UIImageView, UIView;
@protocol ACCComponentBusProtocol, ACCComponentProtocol, ACCComponentViewModelProvider;

@interface AWEPinStickerPlayerViewComponent : NSObject <ACCPinStickerPlayerViewComponentProtocol>
{
    id <ACCComponentBusProtocol> _componentBus;
    UIView *_playerContainer;
    UIImageView *_interactionImageView;
    AWESimplifiedStickerContainerView *_stickerContainerView;
    AWEEditorStickerGestureViewController *_stickerGestureController;
    NSNumber *_selectedStickerEditid;
    AWEStickerEditBaseView *_selectedStickerView;
    NSString *_currentStickerIds;
    NSDictionary *_initialStickerInfoDict;
    NSDictionary *_initialStickerSizeDict;
}

@property(copy, nonatomic) NSDictionary *initialStickerSizeDict; // @synthesize initialStickerSizeDict=_initialStickerSizeDict;
@property(copy, nonatomic) NSDictionary *initialStickerInfoDict; // @synthesize initialStickerInfoDict=_initialStickerInfoDict;
@property(copy, nonatomic) NSString *currentStickerIds; // @synthesize currentStickerIds=_currentStickerIds;
@property(retain, nonatomic) AWEStickerEditBaseView *selectedStickerView; // @synthesize selectedStickerView=_selectedStickerView;
@property(retain, nonatomic) NSNumber *selectedStickerEditid; // @synthesize selectedStickerEditid=_selectedStickerEditid;
@property(retain, nonatomic) AWEEditorStickerGestureViewController *stickerGestureController; // @synthesize stickerGestureController=_stickerGestureController;
@property(retain, nonatomic) AWESimplifiedStickerContainerView *stickerContainerView; // @synthesize stickerContainerView=_stickerContainerView;
@property(retain, nonatomic) UIImageView *interactionImageView; // @synthesize interactionImageView=_interactionImageView;
@property(retain, nonatomic) UIView *playerContainer; // @synthesize playerContainer=_playerContainer;
@property(nonatomic) __weak id <ACCComponentBusProtocol> componentBus; // @synthesize componentBus=_componentBus;
- (void).cxx_destruct;
- (void)cancelPinSticker:(long long)arg1;
- (_Bool)activeSticker:(long long)arg1;
- (void)setSticker:(long long)arg1 offsetX:(double)arg2 offsetY:(double)arg3 angle:(double)arg4 scale:(double)arg5;
- (id)allStickerViews;
- (id)player;
- (id)infoStickerContainerComponent;
- (id)bottomViewComponet;
- (id)rootComponent;
- (id)componentContentView;
- (void)unHilightStickerExceptStickerId:(long long)arg1;
- (void)hilightStickerWithStickerId:(long long)arg1;
- (void)setPlayerContainerFrame:(struct CGRect)arg1;
- (id)createStickerInfoWithInfo:(id)arg1;
- (void)restoreViewToOriginalState;
- (void)recoverStickerView;
- (void)setupContainerViewAndGestureVC;
- (void)recoverStickersAlpha;
- (void)containerViewControllerWillDisappear;
- (void)containerViewControllerDidAppear;
- (void)containerViewControllerDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak id <ACCComponentProtocol> superComponent;
@property(readonly) Class superclass;
@property(nonatomic) __weak id <ACCComponentViewModelProvider> viewModelProvider;

@end

