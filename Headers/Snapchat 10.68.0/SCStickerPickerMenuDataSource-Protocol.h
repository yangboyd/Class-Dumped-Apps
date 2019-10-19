//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSIndexPath, NSString, SCStickerCategory, SCStickerPickerMenuView, SCStickerSuperCategory, SCTopicInfoSticker, SCVenueInfoSticker, UIView;
@protocol SCStickerPickerLayoutSource;

@protocol SCStickerPickerMenuDataSource <NSObject>
- (id <SCStickerPickerLayoutSource>)layoutSource;
- (unsigned long long)findStickerSuperCategory:(long long)arg1;
- (long long)superCategoryTypeAtIndexPath:(NSIndexPath *)arg1;
- (_Bool)stickerPickerMenuHasSuperCategoryType:(long long)arg1 atIndex:(NSIndexPath *)arg2;
- (_Bool)stickerPickerMenuHasSuperCategoryType:(long long)arg1;
- (_Bool)stickerPickerMenu:(SCStickerPickerMenuView *)arg1 shouldDisplayEmptyStateForIndexPath:(NSIndexPath *)arg2 sourceType:(unsigned long long)arg3;
- (SCStickerCategory *)stickerPickerMenu:(SCStickerPickerMenuView *)arg1 stickerCategoryForIndexPath:(NSIndexPath *)arg2;
- (SCStickerSuperCategory *)stickerPickerMenu:(SCStickerPickerMenuView *)arg1 stickerSuperCategoryForIndex:(long long)arg2;
- (long long)stickerPickerMenu:(SCStickerPickerMenuView *)arg1 numberOfCategoriesInSuperCategory:(long long)arg2;
- (long long)numberOfSuperCategoriesInStickerPickerMenu:(SCStickerPickerMenuView *)arg1;

@optional
- (SCTopicInfoSticker *)topicsInfoToDisplayForTopicStickerInPickerMenu:(SCStickerPickerMenuView *)arg1;
- (SCVenueInfoSticker *)venuesInfoToDisplayForVenueStickerInPickerMenu:(SCStickerPickerMenuView *)arg1;
- (NSString *)friendmojiIdForSearch;
- (NSString *)avatarIdForSearch;
- (UIView *)stickerPickerMenu:(SCStickerPickerMenuView *)arg1 emptyStateViewForIndexPath:(NSIndexPath *)arg2 frame:(struct CGRect)arg3 sourceType:(unsigned long long)arg4;
@end

