//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AriaObjC/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSString;

@protocol ACTIExpDataSource <NSObject>
- (void)saveConfig:(NSDictionary *)arg1 clientVersion:(NSString *)arg2;
- (NSArray *)loadConfigWithKey:(NSString *)arg1;
@end

