//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCBloopsSendBar;

@protocol SCBloopsSendBarDelegate <NSObject>
- (void)bloopsSendBarDidPressSend:(SCBloopsSendBar *)arg1;

@optional
- (void)bloopsSendBarDidPressExport:(SCBloopsSendBar *)arg1;
- (void)bloopsSendBarDidPressNewSelfie:(SCBloopsSendBar *)arg1;
- (void)bloopsSendBarDidPressView:(SCBloopsSendBar *)arg1;
- (void)bloopsSendBarDidPressMore:(SCBloopsSendBar *)arg1;
@end

