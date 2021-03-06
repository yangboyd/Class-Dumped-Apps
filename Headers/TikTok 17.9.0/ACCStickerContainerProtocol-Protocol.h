//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ACCPlayerAdaptionContainerProtocol-Protocol.h"

@class ACCStickerConfig, NSArray, UIView;
@protocol ACCStickerContentProtocol, ACCStickerProtocol;

@protocol ACCStickerContainerProtocol <ACCPlayerAdaptionContainerProtocol>
- (NSArray *)stickerViewsWithHierarchyId:(id)arg1;
- (NSArray *)stickerViewsWithTypeId:(id)arg1;
- (NSArray *)allStickerViews;
- (void)selectStickerView:(UIView<ACCStickerProtocol> *)arg1 withTapCenter:(struct CGPoint)arg2;
- (void)removeAllStickerViews;
- (void)removeStickerView:(UIView *)arg1;
- (UIView<ACCStickerProtocol> *)addStickerView:(UIView<ACCStickerContentProtocol> *)arg1 config:(ACCStickerConfig *)arg2;
- (UIView *)containerView;
@end

