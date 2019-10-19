//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class LolomoViewConfig, NFUILolomoEntity, NFUILolomoListIdentity, NSIndexPath, PlaybackSourceModel;

@protocol NFUILolomoListItemViewModel
@property(nonatomic) long long itemIndex;
@property(nonatomic) LolomoViewConfig *config;
@property(retain, nonatomic) NFUILolomoListIdentity *listIdentity;
@property(nonatomic) _Bool forceHorizontal;
@property(nonatomic) _Bool impressionRecorded;
@property(nonatomic) long long timesRendered;
@property(retain, nonatomic) NSIndexPath *indexPath;
@property(retain, nonatomic) PlaybackSourceModel *entityPlaybackSource;
@property(retain, nonatomic) NFUILolomoEntity *entity;
- (void)resetPresentationImageData;
- (void)cleanupEntity;
- (void)renewEntity;
- (void)setupWithEntity:(NFUILolomoEntity *)arg1 listIdentity:(NFUILolomoListIdentity *)arg2 lolomoConfig:(LolomoViewConfig *)arg3 itemIndex:(long long)arg4;
@end

