//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class DisplayPageSimilarsCellViewModel, NFUIDisplayPageSimilarsEntity, NSDictionary, NSNumber, PlaybackSourceModel;

@protocol NFUIDisplayPageSimilarsCellListViewModelProtocol
@property(readonly, nonatomic) NSNumber *currentPresentationSession;
@property(retain, nonatomic) PlaybackSourceModel *sourceModel;
@property(readonly, nonatomic) unsigned long long numberOfItems;
@property(readonly, nonatomic) unsigned long long index;
- (void)endPresentationSession;
- (void)beginPresentationSession;
- (unsigned long long)indexOfItem:(DisplayPageSimilarsCellViewModel *)arg1;
- (DisplayPageSimilarsCellViewModel *)itemAtIndex:(unsigned long long)arg1;
- (id)init;

@optional
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithSimilarsEntity:(NFUIDisplayPageSimilarsEntity *)arg1 withPlaybackSourceModel:(PlaybackSourceModel *)arg2;
@end

