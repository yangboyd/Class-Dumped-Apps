//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDate, NSNumber, NSString;

@protocol ACCDraftModelProtocol <NSObject>
@property(retain, nonatomic) NSDate *saveDate;
@property(retain, nonatomic) NSNumber *createTimestamp;
@property(copy, nonatomic) NSString *draftTrackID;
@property(copy, nonatomic) NSString *draftID;
@property(copy, nonatomic) NSString *userID;
@end

