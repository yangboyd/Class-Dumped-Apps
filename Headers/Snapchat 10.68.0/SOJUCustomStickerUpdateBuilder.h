//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface SOJUCustomStickerUpdateBuilder : NSObject
{
    NSString *_operationType;
    NSArray *_lastUsedTimeList;
}

+ (id)withJUCustomStickerUpdate:(id)arg1;
- (void).cxx_destruct;
- (id)setLastUsedTimeList:(id)arg1;
- (id)setOperationType:(id)arg1;
- (id)build;
- (id)setOperationTypeEnum:(long long)arg1;

@end

