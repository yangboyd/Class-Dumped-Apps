//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIConfirmDialogRenderer, YTIMembershipPostCancelRenderer, YTIYPCTransactionErrorMessageRenderer, YTIYPCTransactionSuccessMessageRenderer;

@interface YTIYPCCancelRecurrenceSupportedRenderers : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIConfirmDialogRenderer *confirmDialogRenderer; // @dynamic confirmDialogRenderer;
@property(retain, nonatomic) YTIYPCTransactionErrorMessageRenderer *errorMessage; // @dynamic errorMessage;
@property(retain, nonatomic) YTIMembershipPostCancelRenderer *membershipPostCancelRenderer; // @dynamic membershipPostCancelRenderer;
@property(readonly, nonatomic) int rendererOneOfCase; // @dynamic rendererOneOfCase;
@property(retain, nonatomic) YTIYPCTransactionSuccessMessageRenderer *ypcTransactionSuccessMessageRenderer; // @dynamic ypcTransactionSuccessMessageRenderer;

@end

