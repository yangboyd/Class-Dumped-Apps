//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSData, NSPredicate, NSString;

@protocol SPTPodcastRequestData <NSObject>
@property(readonly, copy, nonatomic) NSString *requestAction;
@property(readonly, nonatomic) NSArray *sortDescriptors;
@property(readonly, nonatomic) NSPredicate *filterPredicate;
@property(readonly, copy, nonatomic) NSString *requestStringTemplate;

@optional
@property(readonly, nonatomic, getter=isGrouped) _Bool grouped;
@property(readonly, copy, nonatomic) NSData *requestBody;
@end

