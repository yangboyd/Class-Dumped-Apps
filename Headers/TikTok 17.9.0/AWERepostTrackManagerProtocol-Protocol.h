//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AWEAwemeModel, NSMutableDictionary, NSString;

@protocol AWERepostTrackManagerProtocol <NSObject>
+ (NSMutableDictionary *)generateAttributesWithAweme:(AWEAwemeModel *)arg1 fromAweme:(AWEAwemeModel *)arg2 pageType:(NSString *)arg3;
+ (NSMutableDictionary *)generateParamsWithAweme:(AWEAwemeModel *)arg1 fromAweme:(AWEAwemeModel *)arg2 pageType:(NSString *)arg3 enterFrom:(NSString *)arg4 enterMethod:(NSString *)arg5;
@end

