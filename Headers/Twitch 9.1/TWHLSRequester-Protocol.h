//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol NSObject><TWHLSRequesterDelegate, TWStandardAnalyticsDataSource;

@protocol TWHLSRequester <NSObject>
- (void)requestManifest;
@property(nonatomic) __weak id <NSObject><TWHLSRequesterDelegate> hlsRequesterDelegate;
@property(nonatomic) __weak id <TWStandardAnalyticsDataSource> standardAnalyticsDataSource;
@end

