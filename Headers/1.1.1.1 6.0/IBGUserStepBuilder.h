//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString, UIImage;

@interface IBGUserStepBuilder : NSObject
{
    NSString *_userStepMessage;
    NSString *_type;
    NSString *_view;
    NSString *_klass;
    NSString *_userStepsLabel;
    NSString *_reproStepsLabel;
    NSString *_legacyName;
    NSString *_legacyType;
    NSString *_topViewName;
    NSNumber *_date;
    long long _userSteptype;
    UIImage *_reproStepsButtonIcon;
}

@property(retain, nonatomic) UIImage *reproStepsButtonIcon; // @synthesize reproStepsButtonIcon=_reproStepsButtonIcon;
@property(nonatomic) long long userSteptype; // @synthesize userSteptype=_userSteptype;
@property(copy, nonatomic) NSNumber *date; // @synthesize date=_date;
@property(copy, nonatomic) NSString *topViewName; // @synthesize topViewName=_topViewName;
@property(copy, nonatomic) NSString *legacyType; // @synthesize legacyType=_legacyType;
@property(copy, nonatomic) NSString *legacyName; // @synthesize legacyName=_legacyName;
@property(copy, nonatomic) NSString *reproStepsLabel; // @synthesize reproStepsLabel=_reproStepsLabel;
@property(copy, nonatomic) NSString *userStepsLabel; // @synthesize userStepsLabel=_userStepsLabel;
@property(copy, nonatomic) NSString *klass; // @synthesize klass=_klass;
@property(copy, nonatomic) NSString *view; // @synthesize view=_view;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *userStepMessage; // @synthesize userStepMessage=_userStepMessage;
- (void).cxx_destruct;
- (id)init;

@end

