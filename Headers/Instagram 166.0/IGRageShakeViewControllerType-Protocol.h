//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class IGRageShakeReport, NSNumber, NSString;
@protocol IGRageShakeViewControllerAdditionalAttachmentsDelegate, IGRageShakeViewControllerDelegate;

@protocol IGRageShakeViewControllerType <NSObject>
@property(copy, nonatomic) NSNumber *categoryIdOverride;
@property(copy, nonatomic) NSString *lastViewControllerName;
@property(nonatomic) long long reportType;
@property(readonly, nonatomic) IGRageShakeReport *report;
@property(nonatomic) __weak id <IGRageShakeViewControllerAdditionalAttachmentsDelegate> additionalAttachmentsDelegate;
@property(nonatomic) __weak id <IGRageShakeViewControllerDelegate> delegate;
@end

