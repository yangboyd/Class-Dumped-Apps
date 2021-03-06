//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AWWebImageManager, NSString, UIImage;

@protocol AWWebImageManagerSubscriber <NSObject>

@optional
- (void)webImageManager:(AWWebImageManager *)arg1 didFailImageRetrieveWithError:(NSString *)arg2;
- (void)webImageManager:(AWWebImageManager *)arg1 didReceiveImage:(UIImage *)arg2 originalServerIndex:(unsigned long long)arg3 appearanceIndex:(unsigned long long)arg4;
@end

