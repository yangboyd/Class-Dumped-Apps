//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSArray, NSDate, NSOrderedSet, NSString;

@interface IBGSurveyQuestion : NSManagedObject
{
}

+ (id)questionsFromResponseArray:(id)arg1 withContext:(id)arg2;
+ (id)fetchRequest;
- (void)recordAnswer:(id)arg1;
- (_Bool)isAnswered;
- (id)description;

// Remaining properties
@property(retain, nonatomic) NSArray *answers; // @dynamic answers;
@property(copy, nonatomic) NSString *customUpdateLink; // @dynamic customUpdateLink;
@property(copy, nonatomic) NSString *details; // @dynamic details;
@property(retain, nonatomic) NSOrderedSet *features; // @dynamic features;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property(copy, nonatomic) NSString *recordedAnswer; // @dynamic recordedAnswer;
@property(copy, nonatomic) NSDate *respondDate; // @dynamic respondDate;
@property(copy, nonatomic) NSString *title; // @dynamic title;
@property(nonatomic) long long type; // @dynamic type;

@end

