//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSMutableArray;

@interface YTIDownloadsPagePlaylistEntity_CollageThumbnail : GPBMessage
{
}

+ (id)descriptor;
+ (Class)entityClass;
- (id)entityWithStore:(id)arg1;

// Remaining properties
@property(nonatomic) unsigned int firstColumnCoverThumbnailBackgroundColor; // @dynamic firstColumnCoverThumbnailBackgroundColor;
@property(retain, nonatomic) NSMutableArray *firstColumnThumbnailsArray; // @dynamic firstColumnThumbnailsArray;
@property(readonly, nonatomic) unsigned long long firstColumnThumbnailsArray_Count; // @dynamic firstColumnThumbnailsArray_Count;
@property(nonatomic) _Bool hasFirstColumnCoverThumbnailBackgroundColor; // @dynamic hasFirstColumnCoverThumbnailBackgroundColor;
@property(nonatomic) _Bool hasStyle; // @dynamic hasStyle;
@property(retain, nonatomic) NSMutableArray *secondColumnThumbnailsArray; // @dynamic secondColumnThumbnailsArray;
@property(readonly, nonatomic) unsigned long long secondColumnThumbnailsArray_Count; // @dynamic secondColumnThumbnailsArray_Count;
@property(nonatomic) int style; // @dynamic style;

@end

