//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface YTIMusicLibraryEditEntity : GPBMessage
{
}

+ (id)descriptor;
+ (Class)entityClass;
- (id)entityWithStore:(id)arg1;

// Remaining properties
@property(copy, nonatomic) NSString *addToLibraryFeedbackToken; // @dynamic addToLibraryFeedbackToken;
@property(nonatomic) _Bool hasAddToLibraryFeedbackToken; // @dynamic hasAddToLibraryFeedbackToken;
@property(nonatomic) _Bool hasId_p; // @dynamic hasId_p;
@property(nonatomic) _Bool hasRemoveFromLibraryFeedbackToken; // @dynamic hasRemoveFromLibraryFeedbackToken;
@property(copy, nonatomic) NSString *id_p; // @dynamic id_p;
@property(copy, nonatomic) NSString *removeFromLibraryFeedbackToken; // @dynamic removeFromLibraryFeedbackToken;

@end

