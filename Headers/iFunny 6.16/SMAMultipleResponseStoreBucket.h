//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/SMAResponseBucketing-Protocol.h>

@class NSMutableArray, NSString;

@interface SMAMultipleResponseStoreBucket : NSObject <SMAResponseBucketing>
{
    _Bool _allowOverwrite;
    unsigned long long _amountOfValues;
    NSMutableArray *_values;
    NSMutableArray *_expiredValues;
}

@property(retain, nonatomic) NSMutableArray *expiredValues; // @synthesize expiredValues=_expiredValues;
@property(retain, nonatomic) NSMutableArray *values; // @synthesize values=_values;
@property(nonatomic) unsigned long long amountOfValues; // @synthesize amountOfValues=_amountOfValues;
@property(nonatomic) _Bool allowOverwrite; // @synthesize allowOverwrite=_allowOverwrite;
- (void).cxx_destruct;
- (void)expireNode:(id)arg1;
- (void)clearExpiredItems;
- (void)cleanAll;
- (_Bool)isEmpty;
- (void)put:(id)arg1;
- (id)nextPassesBlock:(CDUnknownBlockType)arg1;
- (id)next;
- (id)initWithAmountOfValues:(unsigned long long)arg1 allowOverwriteOldest:(_Bool)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

