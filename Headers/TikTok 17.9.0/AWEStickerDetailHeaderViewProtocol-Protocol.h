//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol AWEStickerDetailHeaderViewProtocol <NSObject>
- (void)shouldReloadHeaderHeight;
- (void)didClickDesViewWithOpenUrl:(NSString *)arg1 wenUrl:(NSString *)arg2 webTitle:(NSString *)arg3;
- (void)didClickAdOwnerViewWithOwnerID:(NSString *)arg1 secUserID:(NSString *)arg2 stickerID:(NSString *)arg3;
- (void)didClickDesignerViewWithDesignerID:(NSString *)arg1 secUserID:(NSString *)arg2;
- (void)didSelectStickerDetailCellWithIndex:(long long)arg1;

@optional
- (void)didClickCollectBtn;
@end

