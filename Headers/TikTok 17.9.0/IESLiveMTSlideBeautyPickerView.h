//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class IESLiveMTRoomBeautyItem, NSArray, NSString, UICollectionView;
@protocol HTSLiveCameraEffectProvider, IESLiveMTSliderProtocol, IESLiveRoomService, IESLiveTracker, IESLiveUserService;

@interface IESLiveMTSlideBeautyPickerView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>
{
    NSArray *_beautyItems;
    IESLiveMTRoomBeautyItem *_selectedItem;
    UICollectionView *_collectionView;
    UIView *_containerView;
    UIView *_blurView;
    UIView<IESLiveMTSliderProtocol> *_slider;
    id <IESLiveRoomService> _roomService;
    id <IESLiveTracker> _tracker;
    id <HTSLiveCameraEffectProvider> _cameraProvider;
    id <IESLiveUserService> _userService;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <IESLiveUserService> userService; // @synthesize userService=_userService;
@property(nonatomic) __weak id <HTSLiveCameraEffectProvider> cameraProvider; // @synthesize cameraProvider=_cameraProvider;
@property(retain, nonatomic) id <IESLiveTracker> tracker; // @synthesize tracker=_tracker;
@property(retain, nonatomic) id <IESLiveRoomService> roomService; // @synthesize roomService=_roomService;
@property(retain, nonatomic) UIView<IESLiveMTSliderProtocol> *slider; // @synthesize slider=_slider;
@property(retain, nonatomic) UIView *blurView; // @synthesize blurView=_blurView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) IESLiveMTRoomBeautyItem *selectedItem; // @synthesize selectedItem=_selectedItem;
@property(retain, nonatomic) NSArray *beautyItems; // @synthesize beautyItems=_beautyItems;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

