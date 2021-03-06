//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "GCKRemoteMediaClientListener-Protocol.h"
#import "HMELabelRemoteItemViewDelegate-Protocol.h"
#import "HMEMultizoneVolumeRemoteItemViewDelegate-Protocol.h"

@class HMECastChannelSessionHolder, HMELabelRemoteItemView, HMEMultizoneVolumeRemoteItemView, NSArray, NSString, NSTimer;
@protocol GCAConfigurationFlags, HMEMultizoneDeviceRemoteConfigDelegate, HMEUnifiedDeviceData;

@interface HMEMultizoneDeviceRemoteConfig : UIViewController <HMEMultizoneVolumeRemoteItemViewDelegate, HMELabelRemoteItemViewDelegate, GCKRemoteMediaClientListener>
{
    _Bool _containsSabrinaFixedVolumeDevices;
    id <HMEMultizoneDeviceRemoteConfigDelegate> _delegate;
    HMECastChannelSessionHolder *_groupCastChannelSessionHolder;
    NSArray *_childCastChannelSessionHolders;
    id <HMEUnifiedDeviceData> _unifiedDeviceData;
    id <GCAConfigurationFlags> _experimentFlags;
    NSTimer *_timer;
    HMELabelRemoteItemView *_titleRemoteItemView;
    HMEMultizoneVolumeRemoteItemView *_groupVolumeRemoteItemView;
    NSArray *_childVolumeRemoteItems;
    NSArray *_fixedVolumeRemoteItems;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool containsSabrinaFixedVolumeDevices; // @synthesize containsSabrinaFixedVolumeDevices=_containsSabrinaFixedVolumeDevices;
@property(retain, nonatomic) NSArray *fixedVolumeRemoteItems; // @synthesize fixedVolumeRemoteItems=_fixedVolumeRemoteItems;
@property(retain, nonatomic) NSArray *childVolumeRemoteItems; // @synthesize childVolumeRemoteItems=_childVolumeRemoteItems;
@property(retain, nonatomic) HMEMultizoneVolumeRemoteItemView *groupVolumeRemoteItemView; // @synthesize groupVolumeRemoteItemView=_groupVolumeRemoteItemView;
@property(retain, nonatomic) HMELabelRemoteItemView *titleRemoteItemView; // @synthesize titleRemoteItemView=_titleRemoteItemView;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) id <GCAConfigurationFlags> experimentFlags; // @synthesize experimentFlags=_experimentFlags;
@property(retain, nonatomic) id <HMEUnifiedDeviceData> unifiedDeviceData; // @synthesize unifiedDeviceData=_unifiedDeviceData;
@property(retain, nonatomic) NSArray *childCastChannelSessionHolders; // @synthesize childCastChannelSessionHolders=_childCastChannelSessionHolders;
@property(retain, nonatomic) HMECastChannelSessionHolder *groupCastChannelSessionHolder; // @synthesize groupCastChannelSessionHolder=_groupCastChannelSessionHolder;
@property(nonatomic) __weak id <HMEMultizoneDeviceRemoteConfigDelegate> delegate; // @synthesize delegate=_delegate;
- (void)showCannotChangeVolumeSnackbarMessage:(id)arg1;
- (void)showSabrinaCannotChangeVolumeSnackbarMessage;
- (void)multizoneRemoteItemViewDidTapDisplaySoundSettings:(id)arg1;
- (void)multizoneRemoteItemViewDidTapDisplaySettings:(id)arg1;
- (void)multizoneRemoteItemView:(id)arg1 volumeSliderDidEndDraggingWithValue:(double)arg2;
- (double)multizoneVolumeSliderValue:(id)arg1;
- (id)multizoneVolumeTitleText:(id)arg1;
- (id)labelText:(id)arg1;
- (id)sessionForRemoteItem:(id)arg1;
- (void)remoteMediaClient:(id)arg1 didUpdateMediaStatus:(id)arg2;
- (void)dealloc;
- (void)updateRemoteConfigComponents;
- (void)startUpdateTimer;
- (id)initWithDeviceID:(id)arg1 unifiedDeviceData:(id)arg2 castChannelData:(id)arg3 experimentFlags:(id)arg4;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

