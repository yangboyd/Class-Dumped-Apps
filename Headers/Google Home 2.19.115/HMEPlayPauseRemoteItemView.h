//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "HMEPlayPauseRemoteItemView-Protocol.h"

@class MDCFloatingButton, NSString;
@protocol HMEPlayPauseRemoteItemViewDelegate, HMERemoteItemDelegate, HMEUniversalRemoteAppearance;

@interface HMEPlayPauseRemoteItemView : UIView <HMEPlayPauseRemoteItemView>
{
    _Bool enabled;
    id <HMEPlayPauseRemoteItemViewDelegate> delegate;
    id <HMEUniversalRemoteAppearance> itemAppearance;
    MDCFloatingButton *_playPauseButton;
}

@property(retain, nonatomic) MDCFloatingButton *playPauseButton; // @synthesize playPauseButton=_playPauseButton;
@property(nonatomic) __weak id <HMEUniversalRemoteAppearance> itemAppearance;
@property(nonatomic) __weak id <HMERemoteItemDelegate> delegate;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled;
- (void).cxx_destruct;
- (void)didTapPlayPause:(id)arg1;
- (void)updateRemoteItem;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

