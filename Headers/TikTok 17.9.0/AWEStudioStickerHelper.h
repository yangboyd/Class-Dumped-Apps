//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AWEStudioStickerHelper-Protocol.h"

@class NSString;

@interface AWEStudioStickerHelper : NSObject <AWEStudioStickerHelper>
{
}

+ (_Bool)stickerIsUnlockedByQRCode:(id)arg1;
+ (_Bool)stickerNeedUnlockByQRCodeWithStickerDetailModel:(id)arg1;
+ (void)showAlertForCommercialSticker:(id)arg1 fromType:(long long)arg2;
+ (id)sharedInstance;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

