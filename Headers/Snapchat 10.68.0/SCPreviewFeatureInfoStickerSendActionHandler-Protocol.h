//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, SCPreviewStickerView;
@protocol SCPerforming;

@protocol SCPreviewFeatureInfoStickerSendActionHandler
- (void)handleSendingActionWithUsernames:(NSArray *)arg1 stickerView:(SCPreviewStickerView *)arg2 completionPerformer:(id <SCPerforming>)arg3 completion:(void (^)(NSString *, NSString *))arg4;
- (unsigned long long)infoStickerType;
@end

