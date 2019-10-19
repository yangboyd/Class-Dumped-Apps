//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTDrivingModePivotListObserver-Protocol.h"
#import "SPTPlayerObserver-Protocol.h"

@class NSArray, NSString, SPTDrivingModePivotList, SPTDrivingModePivotPlayer;
@protocol SPTDrivingModePivotViewModelDelegate, SPTPlayer;

@interface SPTDrivingModePivotViewModel : NSObject <SPTDrivingModePivotListObserver, SPTPlayerObserver>
{
    _Bool _showErrorView;
    _Bool _showLoadingView;
    _Bool _showAdView;
    id <SPTDrivingModePivotViewModelDelegate> _delegate;
    NSArray *_pivotItems;
    unsigned long long _selectedItemIndex;
    SPTDrivingModePivotList *_pivotList;
    SPTDrivingModePivotPlayer *_pivotPlayer;
    id <SPTPlayer> _player;
}

@property(readonly, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(readonly, nonatomic) SPTDrivingModePivotPlayer *pivotPlayer; // @synthesize pivotPlayer=_pivotPlayer;
@property(readonly, nonatomic) SPTDrivingModePivotList *pivotList; // @synthesize pivotList=_pivotList;
@property(nonatomic) unsigned long long selectedItemIndex; // @synthesize selectedItemIndex=_selectedItemIndex;
@property(copy, nonatomic) NSArray *pivotItems; // @synthesize pivotItems=_pivotItems;
@property(nonatomic, getter=shouldShowAdView) _Bool showAdView; // @synthesize showAdView=_showAdView;
@property(nonatomic, getter=shouldShowLoadingView) _Bool showLoadingView; // @synthesize showLoadingView=_showLoadingView;
@property(nonatomic, getter=shouldShowErrorView) _Bool showErrorView; // @synthesize showErrorView=_showErrorView;
@property(nonatomic) __weak id <SPTDrivingModePivotViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)player:(id)arg1 stateDidChange:(id)arg2;
- (void)playURI:(id)arg1;
- (id)itemForIndex:(long long)arg1;
- (id)selectedItem;
- (_Bool)setSelectedItemIndexInternal:(unsigned long long)arg1;
- (void)updateSelectedItemIndex;
- (void)pivotListDidUpdate:(id)arg1;
- (void)viewWillBeDismissed;
- (void)viewWillBePresented;
@property(readonly, copy, nonatomic) NSString *errorText;
- (_Bool)setShowAdViewInternal:(_Bool)arg1;
- (id)initWithPivotList:(id)arg1 pivotPlayer:(id)arg2 player:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

