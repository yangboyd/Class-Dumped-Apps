//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;

@protocol AWEIMSysEmojiNodeProtocol <NSObject>
@property(readonly, copy, nonatomic) NSString *supportedVersion;
@property(readonly, nonatomic) unsigned long long businessType;
@property(readonly, nonatomic) _Bool isUsed;
@property(readonly, copy, nonatomic) NSArray *emojis;
@property(readonly, copy, nonatomic) NSString *previewEmoji;
- (void)updateLastUsedEmoji:(NSString *)arg1;
@end

